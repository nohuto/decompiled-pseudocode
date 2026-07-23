/*
 * XREFs of sub_1403C2638 @ 0x1403C2638
 * Callers:
 *     sub_1403C2FF8 @ 0x1403C2FF8 (sub_1403C2FF8.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_1403C2DB8 @ 0x1403C2DB8 (sub_1403C2DB8.c)
 *     sub_1403C2F70 @ 0x1403C2F70 (sub_1403C2F70.c)
 *     sub_14056D8FC @ 0x14056D8FC (sub_14056D8FC.c)
 *     sub_14056DBB0 @ 0x14056DBB0 (sub_14056DBB0.c)
 */

__int64 __fastcall sub_1403C2638(int a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // ebx
  unsigned __int16 v4; // si
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 *v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v17; // [rsp+50h] [rbp+8h]

  v2 = a2;
  v3 = 0;
  v4 = -1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = qword_140D31700[a1];
  if ( word_140C2B0F0 )
  {
    while ( 1 )
    {
      a2 = qword_140C2B0F8 + 24LL * (unsigned __int16)v6;
      if ( *(unsigned __int16 *)(a2 + 2) == a1 )
      {
        v8 = *(_QWORD *)(a2 + 16) - ((*(_QWORD *)(a2 + 16) >> 1) & 0x5555555555555555LL);
        if ( (unsigned int)((0x101010101010101LL
                           * (((v8 & 0x3333333333333333LL)
                             + ((v8 >> 2) & 0x3333333333333333LL)
                             + (((v8 & 0x3333333333333333LL) + ((v8 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < *(unsigned __int8 *)(a2 + 4) )
          break;
      }
      LOWORD(v6) = v6 + 1;
      if ( (unsigned __int16)v6 >= (unsigned __int16)word_140C2B0F0 )
        goto LABEL_7;
    }
    v5 = qword_140C2B0F8 + 24LL * (unsigned __int16)v6;
    v4 = v6;
  }
LABEL_7:
  if ( (*(_BYTE *)(v5 + 5) & 2) == 0 )
  {
    sub_1403C2F70(v5, a2, v6);
    if ( (*(_BYTE *)(v5 + 5) & 2) == 0 )
    {
      sub_1403C2DB8(*(unsigned __int16 *)(v5 + 6));
      v3 = 1;
    }
  }
  if ( *(_QWORD *)(qword_140C2B0E8 + 8LL * v4) )
    goto LABEL_15;
  v9 = sub_14056D8FC(v5, a2, v6);
  if ( v9 )
  {
    *(_QWORD *)(qword_140C2B0E8 + 8LL * v4) = v9;
    *(_QWORD *)(v7 + 8LL * *(unsigned __int16 *)(v5 + 6) + 24) = v9;
LABEL_15:
    v13 = &qword_140D08390[4 * *(unsigned __int16 *)(v5 + 6)];
    LOWORD(v17) = *(_WORD *)(v5 + 6);
    v12 = 0;
    v14 = *v13 + 1;
    *v13 |= v14;
    _BitScanReverse64(&v15, v14);
    HIWORD(v17) = (unsigned __int8)v15;
    *(_DWORD *)v2 = v17;
    *(_QWORD *)(v5 + 16) |= 1LL << *(_BYTE *)(v2 + 2);
    return v12;
  }
  v12 = -1073741670;
  if ( v3 )
    sub_14056DBB0(*(unsigned __int16 *)(v5 + 6), v10, v11, 3221225626LL);
  return v12;
}
