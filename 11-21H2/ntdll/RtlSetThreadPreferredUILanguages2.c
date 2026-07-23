/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x18006DD30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18004C61C (RtlpMuiRegDupLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006DB7C (RtlpFreeTebLanguageList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006DEA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x1800920B0 (RtlpDupTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // ebx
  PVOID Heap; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  ULONG NumberOfLanguages[10]; // [rsp+20h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, NumberOfLanguages, 0LL, &ReturnLength);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( Heap )
  {
    if ( NtCurrentTeb()->PreferredLanguages )
    {
      v10 = RtlpMuiRegDupLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
      *(_QWORD *)Heap = v10;
      if ( !v10 )
        goto LABEL_16;
      *(_DWORD *)(v10 + 40) &= ~0x40u;
    }
    if ( NtCurrentTeb()->MergedPrefLanguages )
    {
      v11 = RtlpMuiRegDupLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
      *((_QWORD *)Heap + 1) = v11;
      if ( !v11 )
        goto LABEL_16;
      *(_DWORD *)(v11 + 40) &= ~0x40u;
    }
    if ( !NtCurrentTeb()->UserPrefLanguages )
      goto LABEL_13;
    v12 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
    *((_QWORD *)Heap + 2) = v12;
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)v12 + 40LL) &= ~0x40u;
LABEL_13:
      *((_DWORD *)Heap + 6) = NtCurrentTeb()->ClientId.UniqueThread;
      v13 = RtlSetThreadPreferredUILanguages(v7, a2, a3);
      if ( v13 >= 0 )
      {
        *a4 = Heap;
        return (unsigned int)v13;
      }
LABEL_18:
      RtlpMuiRegFreeLanguageList(*(PVOID *)Heap);
      RtlpMuiRegFreeLanguageList(*((PVOID *)Heap + 1));
      RtlpFreeTebLanguageList(*((void ***)Heap + 2));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return (unsigned int)v13;
    }
LABEL_16:
    v13 = -1073741801;
    goto LABEL_18;
  }
  return 3221225495LL;
}
