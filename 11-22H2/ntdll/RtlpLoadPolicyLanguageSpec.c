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

__int64 __fastcall RtlpLoadPolicyLanguageSpec(__int64 a1, __int64 a2, _BYTE *a3, __int16 *a4)
{
  unsigned int v8; // edi
  int v9; // eax
  void *Heap; // rsi
  int InstalledLanguageIndex; // ebx
  __int16 v12; // cx
  __int16 v14[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-1Ch] BYREF
  int v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+3Ch] [rbp-14h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int16 v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0;
  v14[0] = -1;
  if ( !a2 || !a1 )
    return (unsigned int)-1073741811;
  v8 = 1;
  v15 = 0;
  v16 = 1;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v9 = LdrpQueryValueKey(a1, (__int64)&DestinationString, &v16, 0LL, &v15);
  if ( !v15 || v9 == -1073741772 )
    return (unsigned int)-1073741823;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15);
  if ( Heap )
  {
    InstalledLanguageIndex = LdrpQueryValueKey(a1, (__int64)&DestinationString, &v16, Heap, &v15);
    if ( InstalledLanguageIndex >= 0 )
    {
      if ( v16 == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)Heap), RtlCultureNameToLCID(
                                                                      &DestinationString.Length,
                                                                      &v17)) )
      {
        v12 = v17;
        if ( ((v17 - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_14;
        InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, DestinationString.Buffer, 0LL, &v19);
        if ( InstalledLanguageIndex >= 0 )
        {
          v12 = v19;
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    return (unsigned int)InstalledLanguageIndex;
  }
  return (unsigned int)-1073741801;
}
