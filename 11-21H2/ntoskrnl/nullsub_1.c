/*
 * XREFs of nullsub_1 @ 0x140011FF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 nullsub_1()
{
  _BYTE retaddr[16]; // [rsp+0h] [rbp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_QWORD *)retaddr)();
}
