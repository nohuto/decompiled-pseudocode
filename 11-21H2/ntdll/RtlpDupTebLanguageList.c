/*
 * XREFs of RtlpDupTebLanguageList @ 0x1800920B0
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006DD30 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpMuiRegDupLanguageList @ 0x18004C61C (RtlpMuiRegDupLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006DB7C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180111178 (RtlpMuiRegDupLanguageConfigList.c)
 */

void **__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  void **Heap; // rbx
  __int64 v3; // rax
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v3 = RtlpMuiRegDupLanguageList(*a1), (*Heap = (void *)v3) == 0LL)
    || a1[1] && (v5 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = (void *)v5) == 0LL) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
