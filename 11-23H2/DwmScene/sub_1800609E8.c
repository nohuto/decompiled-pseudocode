/*
 * XREFs of sub_1800609E8 @ 0x1800609E8
 * Callers:
 *     sub_18004FAB8 @ 0x18004FAB8 (sub_18004FAB8.c)
 * Callees:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800850E8 @ 0x1800850E8 (sub_1800850E8.c)
 */

void __fastcall sub_1800609E8(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi

  v1 = (_QWORD *)(a1 + 256);
  v2 = (_QWORD *)(a1 + 416);
  while ( v1 != v2 )
  {
    if ( sub_180011DE0(v1) )
      sub_1800850E8(*v1);
    v1 += 2;
  }
}
