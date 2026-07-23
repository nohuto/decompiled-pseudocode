/*
 * XREFs of RtlpDupTebLanguageList @ 0x18008AA30
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006FD80 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpFreeTebLanguageList @ 0x1800101D8 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011AA8 (RtlpMuiRegDupLanguageList.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x180112A78 (RtlpMuiRegDupLanguageConfigList.c)
 */

void **__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  __int64 v2; // rdx
  void **Heap; // rbx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( !a1 )
    return 0LL;
  Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v4 = RtlpMuiRegDupLanguageList(*a1, v2), (*Heap = (void *)v4) == 0LL)
    || a1[1] && (v6 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = (void *)v6) == 0LL) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
