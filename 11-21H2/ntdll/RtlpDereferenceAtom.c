/*
 * XREFs of RtlpDereferenceAtom @ 0x180062618
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180062570 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpFreeAllAtom @ 0x180062458 (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(char *a1, char *a2, __int64 a3)
{
  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != a1 + 12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  RtlpFreeAllAtom(a1, a3, a3);
  return 1;
}
