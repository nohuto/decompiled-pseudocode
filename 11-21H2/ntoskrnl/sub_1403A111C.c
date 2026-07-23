/*
 * XREFs of sub_1403A111C @ 0x1403A111C
 * Callers:
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_1409835EC @ 0x1409835EC (sub_1409835EC.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

unsigned __int64 __fastcall sub_1403A111C(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // ebp
  unsigned __int64 v4; // rsi
  __int64 v6; // r8
  _QWORD *v7; // rdi
  unsigned __int64 i; // r12
  BOOL v10; // r15d

  v3 = 13;
  v4 = a2;
  if ( a3 != 9 )
    v3 = a3;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = (_QWORD *)(v6 + (a2 >> 21 << 12));
    for ( i = v6 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12); (unsigned __int64)v7 < i; ++v7 )
    {
      if ( !sub_140317A10((unsigned __int64)v7) )
        break;
      v10 = 0;
      if ( sub_140317A80((unsigned __int64)v7) )
        v10 = sub_140229550() != 0;
      *v7 = 0LL;
      if ( v10 )
        sub_1402294F0((__int64)v7, 0LL);
    }
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  return sub_14026DAB0(a1, a1 + v4, v3);
}
