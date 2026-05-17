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

__int64 __fastcall LdrpQueryValueKey(__int64 a1, __int64 a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  _DWORD *Heap; // rsi
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v16; // eax
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v17 = 0;
      v11 = 12;
LABEL_4:
      Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v11);
      if ( Heap )
      {
        v13 = NtQueryValueKey(a1, a2, 2LL, Heap, v11, &v17);
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
            else if ( v16 <= v11 )
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
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
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
    v17 = 0;
    v11 = v10 + 12;
    if ( !v11 )
      return (unsigned int)-1073741670;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
