/*
 * XREFs of LdrpQueryValueKey @ 0x18000BCE0
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DDF8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpHasMachineUILock @ 0x180110BB4 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180110C4C (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180110E0C (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180113A00 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180113D84 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180114000 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *Heap; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // edi
  ULONG v16; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      ResultLength = 0;
      Length = 12;
LABEL_4:
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      if ( Heap )
      {
        v13 = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
        v14 = v13;
        if ( v13 >= 0 )
        {
          if ( a4 )
          {
            if ( !v5 )
            {
LABEL_9:
              if ( a3 )
                *a3 = Heap[1];
              goto LABEL_11;
            }
            v16 = Heap[2];
            if ( v16 > *v5 )
            {
              v14 = -2147483643;
            }
            else if ( v16 <= Length )
            {
              memmove(a4, Heap + 3, v16);
            }
LABEL_8:
            *v5 = Heap[2];
            goto LABEL_9;
          }
        }
        else if ( v13 != -2147483643 )
        {
LABEL_11:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v14;
        }
        if ( !v5 )
          goto LABEL_9;
        goto LABEL_8;
      }
      return (unsigned int)-1073741670;
    }
LABEL_3:
    v10 = *a5;
    ResultLength = 0;
    Length = v10 + 12;
    if ( !Length )
      return (unsigned int)-1073741670;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
