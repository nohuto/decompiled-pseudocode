/*
 * XREFs of RtlpDupTebLanguageList @ 0x18008A230
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006FD80 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpFreeTebLanguageList @ 0x1800103E8 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180011CB8 (RtlpMuiRegDupLanguageList.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1801115F8 (RtlpMuiRegDupLanguageConfigList.c)
 */

__int64 *__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 *Heap; // rbx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( !a1 )
    return 0LL;
  Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v4 = RtlpMuiRegDupLanguageList(*a1, v2), (*Heap = v4) == 0)
    || a1[1] && (v6 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = v6) == 0) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
