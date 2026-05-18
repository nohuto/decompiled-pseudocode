/*
 * XREFs of sub_180042B30 @ 0x180042B30
 * Callers:
 *     sub_18003F750 @ 0x18003F750 (sub_18003F750.c)
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 *     sub_1800633B0 @ 0x1800633B0 (sub_1800633B0.c)
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 *     sub_1800DDE34 @ 0x1800DDE34 (sub_1800DDE34.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180042B30(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a1[3];
  v6 = 2 * (a2 & a1[6]);
  v7 = *(_QWORD *)(v5 + 16 * (a2 & a1[6]));
  if ( v7 == a1[1] )
  {
    *(_QWORD *)(v5 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(v5 + 8 * v6) = a4;
  }
  else if ( *(_QWORD **)(v5 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
