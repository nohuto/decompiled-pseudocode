/*
 * XREFs of AslRegistryGetString @ 0x1800EF1D0
 * Callers:
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18008D6E8 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslRegistryGetStringExpand @ 0x1800EDB74 (AslRegistryGetStringExpand.c)
 *     AslEnvBuildBasic @ 0x1800EEA40 (AslEnvBuildBasic.c)
 * Callees:
 *     AslStringDuplicate @ 0x1800EF328 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
  NTSTATUS v9; // eax
  const char *v11; // r9
  int v12; // r8d
  __int64 Length; // [rsp+20h] [rbp-38h]
  __int64 Lengtha; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  v5 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v6 = v5;
  if ( v5 != -1073741789 )
  {
    if ( v5 == -1073741772 )
      return v6;
    if ( v5 != -2147483643 )
    {
      LODWORD(Length) = v5;
      AslLogCallPrintf(
        1,
        (unsigned int)"AslRegistryGetString",
        1172,
        (unsigned int)"Failed to query key value [%x]",
        Length);
      return v6;
    }
  }
  ResultLength += 2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
  v8 = Heap;
  if ( !Heap )
  {
    v6 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1186, (unsigned int)"Out of memory");
    return v6;
  }
  v9 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
  v6 = v9;
  if ( v9 < 0 )
  {
    v11 = "Failed to query key value [%x]";
    v12 = 1198;
LABEL_15:
    LODWORD(Lengtha) = v9;
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", v12, (_DWORD)v11, Lengtha);
    goto LABEL_6;
  }
  if ( (unsigned int)(v8[1] - 1) > 1 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1206, (unsigned int)"Invalid value type");
    v6 = -1073741788;
    goto LABEL_6;
  }
  *((_WORD *)v8 + ((unsigned __int64)(unsigned int)v8[2] >> 1) + 6) = 0;
  v9 = AslStringDuplicate(a1);
  v6 = v9;
  if ( v9 < 0 )
  {
    v11 = "Out of memory [%x]";
    v12 = 1216;
    goto LABEL_15;
  }
LABEL_6:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  return v6;
}
