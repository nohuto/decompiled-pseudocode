/*
 * XREFs of sub_14027428C @ 0x14027428C
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 * Callees:
 *     sub_1402323E8 @ 0x1402323E8 (sub_1402323E8.c)
 *     sub_140232E74 @ 0x140232E74 (sub_140232E74.c)
 */

char __fastcall sub_14027428C(ULONG_PTR a1, unsigned int a2, int a3)
{
  ULONG_PTR v3; // r10
  int v4; // r11d
  char v5; // cl
  char v6; // bl
  unsigned int v7; // r9d
  char v9; // al
  __int64 v10; // rcx

  v3 = a1;
  v4 = a2;
  v5 = *(_BYTE *)(a1 + 35);
  v6 = -1;
  if ( (v5 & 8) != 0 )
    v7 = 5;
  else
    v7 = v5 & 7;
  if ( a2 != v7 && (a2 >= v7 || a3 && (v7 <= 5 || *(__int64 *)(v3 + 40) >= 0)) )
  {
    v9 = *(_BYTE *)(v3 + 34) & 7;
    if ( v9 == 2 )
    {
      if ( v7
        || (*(_DWORD *)(v3 + 16) & 0x400LL) != 0
        || (v10 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)),
            (*(_DWORD *)(v10 + 4) & 0x100) != 0)
        || !(unsigned int)sub_140232E74(v10, *(_QWORD *)(v3 + 16)) )
      {
        sub_1402323E8(v3, v4);
      }
    }
    else if ( v9 != 6 || (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || a2 >= v7 )
    {
      *(_BYTE *)(v3 + 35) = v5 ^ (a2 ^ v5) & 7;
      if ( v7 < 5 )
      {
        v6 = -1;
        if ( a2 == 5 )
          return 0;
      }
      else if ( a2 < 5 )
      {
        return 7;
      }
    }
  }
  return v6;
}
