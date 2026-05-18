/*
 * XREFs of sub_18000AF10 @ 0x18000AF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 */

__int64 sub_18000AF10()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_18000AEE4();
  *v0 |= 0x18uLL;
  v1 = sub_18000AEF4();
  *v1 |= 4uLL;
  return 0LL;
}
