/*
 * XREFs of sub_14096CA00 @ 0x14096CA00
 * Callers:
 *     sub_14053E3AC @ 0x14053E3AC (sub_14053E3AC.c)
 * Callees:
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_14096CA00(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  ULONG_PTR v2; // rax
  _QWORD *v3; // r8
  ULONG_PTR v4; // r9
  unsigned __int64 v5; // r11

  sub_140313C70(a1);
  v2 = sub_1403295C0(v1);
  if ( *(_QWORD *)(v2 + 32) >> 62 < 2uLL )
    KeBugCheckEx(0x1Au, 0x784uLL, v2, v4, *(_QWORD *)(v2 + 32) >> 62);
  do
  {
    if ( (*v3 & 1) != 0 || (*v3 & 0x400LL) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v2, v4, 0LL);
    ++v3;
  }
  while ( (unsigned __int64)v3 < v5 );
  sub_1402864A0(0LL, v4);
}
