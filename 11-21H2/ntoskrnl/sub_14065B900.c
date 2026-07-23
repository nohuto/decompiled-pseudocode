/*
 * XREFs of sub_14065B900 @ 0x14065B900
 * Callers:
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_14069EE0C @ 0x14069EE0C (sub_14069EE0C.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     sub_14065B994 @ 0x14065B994 (sub_14065B994.c)
 *     sub_14069F130 @ 0x14069F130 (sub_14069F130.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F45C @ 0x14069F45C (sub_14069F45C.c)
 */

__int64 __fastcall sub_14065B900(__int16 *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  __int16 v4; // r9
  _QWORD *v5; // r10

  for ( result = ((__int64 (*)(void))sub_14065B994)(); (int)result >= 0; result = sub_14065B994(a1) )
  {
    if ( *a1 >= 0 )
    {
      while ( 1 )
      {
        sub_14069F1CC(a1 + 4);
        v3 = (_QWORD *)sub_14069F130(a1);
        if ( v5[2] )
          break;
        if ( v3[1] && (unsigned int)sub_14069F45C(*v3) || v4 == a1[1] || (__int16)(v4 - 1) < 0 )
          goto LABEL_11;
      }
      if ( (unsigned int)sub_14069F45C(*v5) != 1 )
        return 0LL;
    }
LABEL_11:
    ;
  }
  return result;
}
