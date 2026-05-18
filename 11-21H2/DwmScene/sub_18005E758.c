/*
 * XREFs of sub_18005E758 @ 0x18005E758
 * Callers:
 *     sub_18005F190 @ 0x18005F190 (sub_18005F190.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

_QWORD *__fastcall sub_18005E758(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax

  v6 = (_QWORD *)sub_18001D684();
  if ( v6 )
  {
    *v6 = *a3;
    v6[1] = *a2;
  }
  *a1 = v6;
  return a1;
}
