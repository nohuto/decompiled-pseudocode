/*
 * XREFs of AslRegistryGetString @ 0x180052FD0
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051604 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098570 (AslFree.c)
 *     AslStringDuplicate @ 0x180098DC8 (AslStringDuplicate.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  _WORD *Heap; // rax
  _WORD *v8; // rdi
  NTSTATUS v9; // eax
  const char *v10; // r9
  int v11; // r8d
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
  if ( v5 == -2147483643 || v5 == -1073741789 )
  {
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
      v10 = "Failed to query key value [%x]";
      v11 = 1198;
LABEL_13:
      LODWORD(Lengtha) = v9;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", v11, (_DWORD)v10, Lengtha);
      goto LABEL_14;
    }
    if ( (unsigned int)(*((_DWORD *)v8 + 1) - 1) <= 1 )
    {
      v8[((unsigned __int64)*((unsigned int *)v8 + 2) >> 1) + 6] = 0;
      v9 = AslStringDuplicate(a1, v8 + 6);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = "Out of memory [%x]";
        v11 = 1216;
        goto LABEL_13;
      }
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetString", 1206, (unsigned int)"Invalid value type");
      v6 = -1073741788;
    }
LABEL_14:
    AslFree(NtCurrentPeb()->ProcessHeap, v8);
    return v6;
  }
  if ( v5 != -1073741772 )
  {
    LODWORD(Length) = v5;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryGetString",
      1172,
      (unsigned int)"Failed to query key value [%x]",
      Length);
  }
  return v6;
}
