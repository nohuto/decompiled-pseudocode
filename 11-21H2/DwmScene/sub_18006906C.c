/*
 * XREFs of sub_18006906C @ 0x18006906C
 * Callers:
 *     sub_180056B10 @ 0x180056B10 (sub_180056B10.c)
 * Callees:
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180092D8C @ 0x180092D8C (sub_180092D8C.c)
 */

void __fastcall sub_18006906C(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi

  v1 = (_QWORD *)(a1 + 256);
  v2 = (_QWORD *)(a1 + 416);
  while ( v1 != v2 )
  {
    if ( sub_1800122C0(v1) )
      sub_180092D8C(*v1);
    v1 += 2;
  }
}
