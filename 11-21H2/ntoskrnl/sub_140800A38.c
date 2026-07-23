/*
 * XREFs of sub_140800A38 @ 0x140800A38
 * Callers:
 *     sub_140800680 @ 0x140800680 (sub_140800680.c)
 *     sub_140800808 @ 0x140800808 (sub_140800808.c)
 *     sub_14099D244 @ 0x14099D244 (sub_14099D244.c)
 *     sub_140A212A0 @ 0x140A212A0 (sub_140A212A0.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     sub_140800ADC @ 0x140800ADC (sub_140800ADC.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_140813500 @ 0x140813500 (sub_140813500.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 */

__int64 __fastcall sub_140800A38(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // ebx

  if ( !a3 )
  {
    if ( a4 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( a2 != 1 )
    return 3221225485LL;
LABEL_3:
  LOBYTE(v7) = sub_1403A7864(a1);
  v8 = v7;
  result = sub_14081369C(v7);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    if ( !a3 || (v11 = sub_140800ADC(a1, a3), v11 >= 0) )
    {
      if ( a4 )
        v11 = sub_140813500(a1, a4);
    }
    LOBYTE(v10) = v8;
    sub_1408134D8(v10);
    return (unsigned int)v11;
  }
  return result;
}
