/*
 * XREFs of nullsub_2 @ 0x140012008
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 nullsub_2()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}
