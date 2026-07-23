/*
 * XREFs of sub_1403B3C40 @ 0x1403B3C40
 * Callers:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_1403B3D20 @ 0x1403B3D20 (sub_1403B3D20.c)
 *     sub_1409E92F8 @ 0x1409E92F8 (sub_1409E92F8.c)
 *     sub_140A702DC @ 0x140A702DC (sub_140A702DC.c)
 */

unsigned __int64 __fastcall sub_1403B3C40(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int128 *v5; // r9
  __int64 v6; // r10
  __int128 v7; // xmm0
  _OWORD *v8; // [rsp+20h] [rbp-19h] BYREF
  int v9; // [rsp+28h] [rbp-11h]
  __int64 v10; // [rsp+30h] [rbp-9h]
  unsigned int v11; // [rsp+38h] [rbp-1h]
  _OWORD v12[3]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+80h] [rbp+47h]
  unsigned int v15; // [rsp+A0h] [rbp+67h] BYREF

  v15 = 0;
  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 && KeGetEffectiveIrql() < 2u )
    sub_1409E92F8(a1);
  result = sub_1403B3D20(*(_QWORD *)a2, *(unsigned int *)(a2 + 16), &v15);
  if ( (_DWORD)result )
  {
    result = v15 + 72LL;
    if ( result <= (unsigned int)(dword_140C097F8 - 64) )
    {
      v7 = *v5;
      v9 = 72;
      v11 = v15;
      v12[0] = v7;
      v12[1] = v5[1];
      v12[2] = v5[2];
      v13 = v5[3];
      *(_QWORD *)&v7 = *((_QWORD *)v5 + 8);
      LODWORD(v12[0]) = v15 + 72;
      LODWORD(v13) = v15 + 72;
      v8 = v12;
      v10 = (__int64)v5 + v6;
      v14 = v7;
      return sub_140A702DC(&v8, 2LL);
    }
  }
  return result;
}
