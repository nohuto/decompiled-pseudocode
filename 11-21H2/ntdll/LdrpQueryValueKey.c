/*
 * XREFs of LdrpQueryValueKey @ 0x18006F0A8
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180093130 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpHasMachineUILock @ 0x180110734 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801107CC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18011098C (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1801135A0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180113918 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180113B9C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rdi
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *Heap; // rbx
  NTSTATUS v13; // eax
  unsigned int v14; // esi
  _DWORD *v15; // r8
  ULONG v17; // eax
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
        v15 = Heap;
        if ( v13 != -1073741772 )
        {
          if ( v13 >= 0 )
          {
            if ( a4 )
            {
              if ( !v5 )
              {
LABEL_10:
                if ( a3 )
                  *a3 = v15[1];
                goto LABEL_12;
              }
              v17 = Heap[2];
              if ( v17 > *v5 )
              {
                v14 = -2147483643;
              }
              else if ( v17 <= Length )
              {
                memmove(a4, Heap + 3, v17);
                v15 = Heap;
              }
LABEL_9:
              *v5 = v15[2];
              goto LABEL_10;
            }
LABEL_8:
            if ( !v5 )
              goto LABEL_10;
            goto LABEL_9;
          }
          if ( v13 == -2147483643 )
            goto LABEL_8;
        }
LABEL_12:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
        return v14;
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
