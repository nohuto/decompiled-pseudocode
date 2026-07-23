/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x180110C4C
 * Callers:
 *     RtlpLoadUserUIByPolicy @ 0x18000A8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadLanguageConfigList @ 0x18000A9A0 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180087880 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180015C44 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800166A8 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(HANDLE KeyHandle, __int64 a2, _BYTE *a3, __int16 *a4)
{
  unsigned int v8; // edi
  int v9; // eax
  PVOID Heap; // rsi
  int InstalledLanguageIndex; // ebx
  __int16 v12; // cx
  __int16 v14[2]; // [rsp+30h] [rbp-20h] BYREF
  SIZE_T Size; // [rsp+34h] [rbp-1Ch] BYREF
  DWORD Lcid; // [rsp+3Ch] [rbp-14h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int16 v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0;
  v14[0] = -1;
  if ( !a2 || !KeyHandle )
    return (unsigned int)-1073741811;
  v8 = 1;
  Size = 0x100000000LL;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v9 = LdrpQueryValueKey(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, 0LL, (ULONG *)&Size);
  if ( !(_DWORD)Size || v9 == -1073741772 )
    return (unsigned int)-1073741823;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
  if ( Heap )
  {
    InstalledLanguageIndex = LdrpQueryValueKey(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, Heap, (ULONG *)&Size);
    if ( InstalledLanguageIndex >= 0 )
    {
      if ( HIDWORD(Size) == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)Heap), RtlCultureNameToLCID(&DestinationString, &Lcid)) )
      {
        v12 = Lcid;
        if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_14;
        InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, DestinationString.Buffer, 0LL, &v18);
        if ( InstalledLanguageIndex >= 0 )
        {
          v12 = v18;
          v8 = 3;
LABEL_14:
          InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v8, v12, v14);
          if ( InstalledLanguageIndex >= 0 )
          {
            if ( a3 )
              *a3 = 2;
            if ( a4 )
              *a4 = v14[0];
          }
        }
      }
      else
      {
        InstalledLanguageIndex = -1073741823;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return (unsigned int)InstalledLanguageIndex;
  }
  return (unsigned int)-1073741801;
}
