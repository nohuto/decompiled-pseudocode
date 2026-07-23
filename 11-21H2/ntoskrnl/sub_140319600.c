/*
 * XREFs of sub_140319600 @ 0x140319600
 * Callers:
 *     sub_1402336A8 @ 0x1402336A8 (sub_1402336A8.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402810B0 @ 0x1402810B0 (sub_1402810B0.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_1402D0500 @ 0x1402D0500 (sub_1402D0500.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402E7400 @ 0x1402E7400 (sub_1402E7400.c)
 *     sub_140317AB0 @ 0x140317AB0 (sub_140317AB0.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_140353858 @ 0x140353858 (sub_140353858.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_14057FF58 @ 0x14057FF58 (sub_14057FF58.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_140593E88 @ 0x140593E88 (sub_140593E88.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_1405A73A0 @ 0x1405A73A0 (sub_1405A73A0.c)
 *     sub_1405BBA5C @ 0x1405BBA5C (sub_1405BBA5C.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_1406A3E60 @ 0x1406A3E60 (sub_1406A3E60.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_1407BBF50 @ 0x1407BBF50 (sub_1407BBF50.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_14096CB14 @ 0x14096CB14 (sub_14096CB14.c)
 *     sub_14096FEDC @ 0x14096FEDC (sub_14096FEDC.c)
 *     sub_14097EB90 @ 0x14097EB90 (sub_14097EB90.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

__int64 __fastcall sub_140319600(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rax
  unsigned int v25; // eax

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x8000000) == 0 )
  {
    v8 = a2 - v7;
    if ( (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= v8 && (a3 & 4) == 0 )
    {
      *a4 = *(_QWORD *)(a1 + 72);
      return *(_QWORD *)(a1 + 80) + 8 * v8;
    }
  }
  v9 = 0;
  *a4 = 0LL;
  v10 = *(_QWORD *)(a1 + 72);
  v11 = *(_QWORD *)v10;
  v12 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v10 + 8)) >> 3) - v7;
  if ( !*(_QWORD *)(*(_QWORD *)v10 + 64LL) )
  {
    if ( (*(_DWORD *)(v11 + 56) & 0x1000) != 0 || *(_DWORD *)(v10 + 48) >= 0x40000000u )
    {
      v19 = 0x100000LL;
      if ( *(_DWORD *)(v10 + 48) >= 0x40000000u )
        v19 = 0x200000LL;
      v20 = v19 >> 3;
      if ( v20 == 0x20000 )
      {
        v21 = v12 >> 17;
        v12 &= 0x1FFFFu;
      }
      else
      {
        v21 = v12 / v20;
        v12 %= v20;
      }
      v22 = (unsigned int)v21 + 1LL;
      if ( !v12 )
        v22 = (unsigned int)v21;
      if ( v22 > *(unsigned int *)(v11 + 96) )
        return 0LL;
      v10 += 88 * v21;
      if ( v12 >= *(unsigned int *)(v10 + 44) )
        return 0LL;
    }
    else if ( v12 >= *(unsigned int *)(v10 + 44) )
    {
      return 0LL;
    }
    if ( v10 )
    {
      *a4 = v10;
      v17 = *(_QWORD *)(v10 + 8);
      if ( !v17 )
        return 0LL;
      goto LABEL_13;
    }
    return 0LL;
  }
  v13 = *(unsigned int *)(v10 + 44);
  v14 = 0LL;
  v15 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v10 + 8)) >> 3) - v7;
  v16 = *(_QWORD *)(a1 + 72);
  if ( v12 < v13 )
  {
LABEL_10:
    v12 = v15;
    v10 = v16;
  }
  else
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v16 + 16);
      v15 -= v13;
      if ( ++v14 == 3 && (*(_DWORD *)(v11 + 56) & 0x20) == 0 )
        break;
      if ( !v16 )
      {
        if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 )
          return 0LL;
        break;
      }
      v13 = *(unsigned int *)(v16 + 44);
      if ( v15 < v13 )
        goto LABEL_10;
    }
    v23 = ((*(unsigned int *)(v10 + 36) | ((unsigned __int64)(*(_WORD *)(v10 + 32) & 0xFFC0) << 26)) + v12) << 12;
    if ( (a3 & 1) != 0 )
      v9 = 1;
    v24 = sub_140287180(*(_QWORD *)v10, v23, v9);
    v10 = (__int64)v24;
    if ( !v24 )
      return 0LL;
    v12 = (v23 >> 12) - (*((unsigned int *)v24 + 9) | ((unsigned __int64)((_WORD)v24[4] & 0xFFC0) << 26));
  }
  if ( v12 >= *(_DWORD *)(v10 + 44) - (*(_DWORD *)(v10 + 52) & 0x3FFFFFFFu) )
    return 0LL;
  v17 = *(_QWORD *)(v10 + 8);
  *a4 = v10;
LABEL_13:
  if ( (*(_BYTE *)(v10 + 34) & 2) != 0 && (*(_DWORD *)(v11 + 56) & 0x8000000) != 0 && (a3 & 2) == 0 )
  {
    v25 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
    v17 = *(_QWORD *)(sub_140256DF8(v11, v25, v10) + 72);
  }
  return v17 + 8 * v12;
}
