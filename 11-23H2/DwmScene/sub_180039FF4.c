/*
 * XREFs of sub_180039FF4 @ 0x180039FF4
 * Callers:
 *     sub_18003AAE0 @ 0x18003AAE0 (sub_18003AAE0.c)
 * Callees:
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 *     sub_18003A228 @ 0x18003A228 (sub_18003A228.c)
 *     sub_18003A780 @ 0x18003A780 (sub_18003A780.c)
 *     sub_18003ABE4 @ 0x18003ABE4 (sub_18003ABE4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039FF4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  int v8; // r14d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 i; // rbp
  __int64 v12; // rbp

  v7 = a2;
  v8 = a1;
  result = sub_18003A780(a1, a2, a3, a5);
  if ( a3 > 32 )
  {
    sub_18003ABE4(v8, v7, a4, a3, a5);
    v10 = a4 + 16 * a3;
    result = sub_18003A228(a4, (int)a4 + 16 * (int)a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      sub_18003A228(v8, v7, a4, i, a3, a5);
      v12 = 2 * i;
      result = sub_18003A228(a4, (int)a4 + 16 * (int)a3, v8, v12, a3, a5);
    }
    while ( a4 != v10 )
    {
      result = sub_180032650(a4);
      a4 += 16LL;
    }
  }
  return result;
}
