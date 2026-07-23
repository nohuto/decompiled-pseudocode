/*
 * XREFs of sub_140595E34 @ 0x140595E34
 * Callers:
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_140276DE4 @ 0x140276DE4 (sub_140276DE4.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140337EA0 @ 0x140337EA0 (sub_140337EA0.c)
 */

__int64 __fastcall sub_140595E34(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  __int16 v5; // ax
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r11
  char v10; // cl
  _QWORD *v11; // rcx
  int v13; // eax
  __int16 v14; // r9

  v2 = *a1;
  v3 = a2;
  if ( (*(_DWORD *)(*a1 + 112LL) & 1) != 0 )
  {
    v5 = *(_WORD *)(v2 + 114);
    if ( v5 )
      *(_WORD *)(v2 + 114) = v5 - 1;
  }
  v6 = *(_BYTE *)(a2 + 34) & 0xDF;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 34) = v6;
  v7 = a1[7];
  if ( v7 && !sub_140276DE4(v7, a2) )
    return 2LL;
  if ( (*(_BYTE *)(v3 + 34) & 0x18) != 0 )
    return 2LL;
  if ( sub_140277C50(v3) )
    return 2LL;
  v10 = *(_BYTE *)(v8 + 35);
  if ( (v10 & 0x40) != 0 )
    return 2LL;
  if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
    return 2LL;
  if ( (v10 & 0x10) != 0 )
    return 2LL;
  if ( *(int *)(v9 + 80) < 0 )
    return 2LL;
  v11 = (_QWORD *)a1[2];
  if ( (unsigned __int64)v11 >= a1[3] )
    return 2LL;
  if ( (*(_DWORD *)(v9 + 192) & 0x8000) != 0 )
  {
    *v11 |= 0x8000000000000000uLL;
    return 0LL;
  }
  if ( *(_WORD *)(v8 + 32) != 1 )
  {
    sub_1403377E0(v8);
    return 0LL;
  }
  if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
  {
    *(_WORD *)(v8 + 32) = 0;
    v13 = sub_140337EA0(v8);
    *(_WORD *)(v8 + 32) = v14;
    if ( !v13 )
      return 2LL;
  }
  sub_1403377E0(v8);
  return 1LL;
}
