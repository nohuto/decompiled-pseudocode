/*
 * XREFs of sub_18000AEC0 @ 0x18000AEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 */

__int64 sub_18000AEC0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_18000AEE4();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_18000AEF4();
  *v1 |= 2uLL;
  return 0LL;
}
