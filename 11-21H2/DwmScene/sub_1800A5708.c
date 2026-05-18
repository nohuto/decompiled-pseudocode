/*
 * XREFs of sub_1800A5708 @ 0x1800A5708
 * Callers:
 *     sub_1800A4984 @ 0x1800A4984 (sub_1800A4984.c)
 *     sub_1800A4DAC @ 0x1800A4DAC (sub_1800A4DAC.c)
 *     sub_1800A4E4C @ 0x1800A4E4C (sub_1800A4E4C.c)
 *     sub_1800A4EEC @ 0x1800A4EEC (sub_1800A4EEC.c)
 *     sub_1800A4FA4 @ 0x1800A4FA4 (sub_1800A4FA4.c)
 *     sub_1800A5524 @ 0x1800A5524 (sub_1800A5524.c)
 *     sub_1800A5598 @ 0x1800A5598 (sub_1800A5598.c)
 *     sub_1800A560C @ 0x1800A560C (sub_1800A560C.c)
 *     sub_1800A5678 @ 0x1800A5678 (sub_1800A5678.c)
 * Callees:
 *     sub_1800A4BFC @ 0x1800A4BFC (sub_1800A4BFC.c)
 */

_OWORD *__fastcall sub_1800A5708(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  _OWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  _OWORD *v7; // rax

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_1800A4BFC(a3, v4);
      a3 = (_OWORD *)(v5 + 16);
      v4 = (_OWORD *)(v6 + 16);
    }
    while ( v4 != v7 );
  }
  return a3;
}
