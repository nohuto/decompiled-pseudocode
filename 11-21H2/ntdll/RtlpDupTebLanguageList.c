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

__int64 *__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  __int64 *Heap; // rbx
  __int64 v3; // rax
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v3 = RtlpMuiRegDupLanguageList(*a1), (*Heap = v3) == 0)
    || a1[1] && (v5 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = v5) == 0) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
