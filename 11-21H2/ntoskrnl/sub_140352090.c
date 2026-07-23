/*
 * XREFs of sub_140352090 @ 0x140352090
 * Callers:
 *     sub_14023D570 @ 0x14023D570 (sub_14023D570.c)
 *     sub_140351E90 @ 0x140351E90 (sub_140351E90.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 *     sub_140372070 @ 0x140372070 (sub_140372070.c)
 * Callees:
 *     sub_14035225C @ 0x14035225C (sub_14035225C.c)
 *     sub_140366D64 @ 0x140366D64 (sub_140366D64.c)
 */

__int64 __fastcall sub_140352090(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  unsigned __int64 v10; // rdi
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // esi
  int v17; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+40h] BYREF

  v10 = 1LL;
  if ( a3 )
    v10 = a3;
  v12 = *a2;
  v13 = 3;
  if ( (a4 & 0x20001000) != 0x20001000 )
    v13 = a7;
  if ( (a4 & 0x2000) != 0 )
  {
    v12 = v12 - ((v12 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v25 = v12;
    if ( v10 > 0x200000 )
      v25 = v10 + v12;
  }
  else
  {
    v25 = *a2;
  }
  if ( v13 )
  {
    v14 = 512;
  }
  else
  {
    v14 = 33;
    if ( a6 == 1 )
      v14 = 1;
  }
  if ( (a5 & 0x60) != 0 && v14 == 512 )
    v14 = 0;
  v24 = *a1;
  v15 = v14 | 0x80000000;
  v16 = a4 & ((a4 & 0x40000) != 0 ? -1310721 : -1048577);
  if ( (a4 & 0x40000) == 0 )
    v15 = v14;
  v17 = sub_14035225C((unsigned int)&v24, (unsigned int)&v25, v16, a5, v15, a9 + 1);
  if ( v17 >= 0 && (v16 & 0x2000) != 0 )
  {
    v23[0] = v24;
    v19 = -(__int64)v10 & (v10 + v24 - 1);
    v24 = v19;
    v20 = v19 - v23[0];
    a8 = v19 - v23[0];
    if ( v19 != v23[0] )
    {
      v22 = sub_140366D64(v23, &a8, 0x8000LL);
      v20 = a8;
      v17 = v22;
      v19 = v24;
    }
    v23[0] = v19 + v12;
    a8 = v25 - v20 - v12;
    if ( v25 - v20 != v12 )
    {
      v21 = sub_140366D64(v23, &a8, 0x8000LL);
      v19 = v24;
      v17 = v21;
    }
    *a1 = v19;
    *a2 = v12;
  }
  return (unsigned int)v17;
}
