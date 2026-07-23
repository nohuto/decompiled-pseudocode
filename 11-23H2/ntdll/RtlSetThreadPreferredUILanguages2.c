/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x18006FD80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFreeTebLanguageList @ 0x1800101D8 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011AA8 (RtlpMuiRegDupLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006FEF0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x18008AA30 (RtlpDupTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // ebx
  __int64 v9; // rdx
  PVOID Heap; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx
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
      v11 = RtlpMuiRegDupLanguageList((__int64)NtCurrentTeb()->PreferredLanguages, v9);
      *(_QWORD *)Heap = v11;
      if ( !v11 )
        goto LABEL_16;
      *(_DWORD *)(v11 + 40) &= ~0x40u;
    }
    if ( NtCurrentTeb()->MergedPrefLanguages )
    {
      v12 = RtlpMuiRegDupLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages, v9);
      *((_QWORD *)Heap + 1) = v12;
      if ( !v12 )
        goto LABEL_16;
      *(_DWORD *)(v12 + 40) &= ~0x40u;
    }
    if ( !NtCurrentTeb()->UserPrefLanguages )
      goto LABEL_13;
    v13 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
    *((_QWORD *)Heap + 2) = v13;
    if ( v13 )
    {
      *(_DWORD *)(*(_QWORD *)v13 + 40LL) &= ~0x40u;
LABEL_13:
      *((_DWORD *)Heap + 6) = NtCurrentTeb()->ClientId.UniqueThread;
      v14 = RtlSetThreadPreferredUILanguages(v7, a2, a3);
      if ( v14 >= 0 )
      {
        *a4 = Heap;
        return (unsigned int)v14;
      }
LABEL_18:
      RtlpMuiRegFreeLanguageList(*(PVOID *)Heap);
      RtlpMuiRegFreeLanguageList(*((PVOID *)Heap + 1));
      RtlpFreeTebLanguageList(*((void ***)Heap + 2));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return (unsigned int)v14;
    }
LABEL_16:
    v14 = -1073741801;
    goto LABEL_18;
  }
  return 3221225495LL;
}
