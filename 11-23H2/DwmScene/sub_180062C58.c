/*
 * XREFs of sub_180062C58 @ 0x180062C58
 * Callers:
 *     sub_180063038 @ 0x180063038 (sub_180063038.c)
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 *     sub_1800633B0 @ 0x1800633B0 (sub_1800633B0.c)
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 *     sub_1800DDE34 @ 0x1800DDE34 (sub_1800DDE34.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 * Callees:
 *     sub_1800618AC @ 0x1800618AC (sub_1800618AC.c)
 */

_QWORD *__fastcall sub_180062C58(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // r11
  _QWORD *v9; // rbx
  _QWORD *v10; // r11

  v4 = a2;
  v5 = a1[3];
  v6 = a1[1];
  v8 = *(_QWORD *)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *v4 = v6;
LABEL_3:
    v4[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( sub_1800618AC((__int64)a1, a3, v8 + 16) )
    {
      if ( v10 == v9 )
      {
        *v4 = v10;
        goto LABEL_3;
      }
      v8 = v10[1];
    }
    *v4 = *v10;
    v4[1] = v10;
  }
  return v4;
}
