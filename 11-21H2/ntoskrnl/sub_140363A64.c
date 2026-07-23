/*
 * XREFs of sub_140363A64 @ 0x140363A64
 * Callers:
 *     sub_14023D4C8 @ 0x14023D4C8 (sub_14023D4C8.c)
 *     sub_140363490 @ 0x140363490 (sub_140363490.c)
 * Callees:
 *     sub_140352090 @ 0x140352090 (sub_140352090.c)
 *     sub_140363560 @ 0x140363560 (sub_140363560.c)
 *     sub_1403635BC @ 0x1403635BC (sub_1403635BC.c)
 *     sub_140363BC0 @ 0x140363BC0 (sub_140363BC0.c)
 *     sub_140363C3C @ 0x140363C3C (sub_140363C3C.c)
 *     sub_1405F3A90 @ 0x1405F3A90 (sub_1405F3A90.c)
 */

__int64 __fastcall sub_140363A64(__int64 a1, unsigned __int64 a2, int *a3, __int128 *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  int v11; // ecx
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+28h] [rbp-58h]
  int v15; // [rsp+30h] [rbp-50h]
  __int64 v16; // [rsp+38h] [rbp-48h]
  __int64 v17[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v21; // [rsp+B8h] [rbp+38h] BYREF

  v21 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v20 = 4096LL;
    v17[0] = *(_QWORD *)a1 + (v5 << 12);
    v9 = sub_140352090(
           v17,
           &v20,
           0LL,
           1073745920,
           4,
           *(unsigned __int8 *)(a1 + 49),
           *(unsigned __int8 *)(a1 + 50),
           v16,
           0);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v21;
  }
  *a4 = *(_OWORD *)sub_140363C3C(v19, a1);
  while ( 1 )
  {
    sub_140363BC0(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    sub_1403635BC(a3);
    sub_1405F3A90(a1 + 32, &v21, v12, a1, v13, v14);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    v11 = *(unsigned __int8 *)(a1 + 49);
    v17[0] = *(_QWORD *)(a1 + 8) + (v7 << 12);
    v15 = *(unsigned __int8 *)(a1 + 50);
    v20 = 4096LL;
    v9 = sub_140352090(v17, &v20, 0LL, 1073745920, 4, v11, v15, v16, 0);
    if ( v9 < 0 )
    {
      sub_1403635BC(a3);
      v18 = *a4;
      sub_140363560((unsigned __int8 *)&v18);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
