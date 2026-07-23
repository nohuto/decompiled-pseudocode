/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x1801107CC
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x18006DBD0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadLanguageConfigList @ 0x18006EA54 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006F390 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004B16C (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18004B60C (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18006F0A8 (LdrpQueryValueKey.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(HANDLE KeyHandle, __int64 a2, _BYTE *a3, __int16 *a4)
{
  int v8; // edi
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
