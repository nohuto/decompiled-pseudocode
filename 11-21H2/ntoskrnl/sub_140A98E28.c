/*
 * XREFs of sub_140A98E28 @ 0x140A98E28
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 * Callees:
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A98A98 @ 0x140A98A98 (sub_140A98A98.c)
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 *     sub_140A99098 @ 0x140A99098 (sub_140A99098.c)
 *     sub_140A99A38 @ 0x140A99A38 (sub_140A99A38.c)
 */

__int64 __fastcall sub_140A98E28(ULONG_PTR a1, ULONG_PTR a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  int v11; // ecx
  __int64 v13; // r15
  _QWORD **v14; // r15
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rdx
  int v18; // r9d
  unsigned int v19; // ecx
  int v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v8 = 1;
  if ( a3 )
  {
    v9 = qword_140D57500;
    *((_DWORD *)qword_140D57500 + 8199) = 0;
    ++v9[8201];
    v9[8216] = 0;
    *((_QWORD *)v9 + 4107) = 0LL;
    if ( v9[8201] == 1073741822 )
      dword_140D57524 |= 8u;
    sub_140294D90((__int64)(v9 + 8283), (__int64)(v9 + 8284), (__int64)(v9 + 8286));
    a4 = v20;
  }
  v10 = qword_140D57500;
  v11 = *((_DWORD *)qword_140D57500 + 8201);
  if ( *(_DWORD *)(a2 + 72) >> 3 == v11 )
    return 0LL;
  ++*((_DWORD *)qword_140D57500 + 8199);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a2 + 72) & 7 | (8 * v11);
  if ( a4 > v10[8202] )
  {
    ++v10[8204];
    return 0LL;
  }
  if ( v10[8199] >= v10[8203] )
  {
    ++v10[8205];
    return 0LL;
  }
  if ( (unsigned __int64)&sub_14041FAB0()[-*((_QWORD *)qword_140D57500 + 4142)] <= 0x1630 )
  {
    ++*((_DWORD *)qword_140D57500 + 8206);
    return 0LL;
  }
  v13 = *(_QWORD *)(a2 + 56);
  if ( a1 == *(_QWORD *)(v13 + 8) && (*(_DWORD *)(a2 + 72) & 4) == 0 )
    goto LABEL_15;
  v14 = (_QWORD **)(v13 + 24);
  v8 = 0;
  v15 = *v14;
  if ( *v14 != v14 )
  {
    while ( 1 )
    {
      v16 = v15 - 5;
      v17 = *(v15 - 5);
      *((_DWORD *)v15 + 8) = v15[4] & 7 | (8 * *((_DWORD *)qword_140D57500 + 8201));
      if ( v17 )
      {
        v18 = v20 + 1;
        if ( v16 == (_QWORD *)a2 )
          v18 = v20;
        v8 = sub_140A98E28(a1, v17, 0, v18, a5);
        if ( v8 )
          break;
      }
      v15 = (_QWORD *)*v15;
      if ( v15 == v14 )
        goto LABEL_29;
    }
    sub_140A98A98((__int64)(v15 - 5));
    if ( v16 == (_QWORD *)a2 )
    {
LABEL_23:
      if ( a3 )
      {
        if ( (unsigned int)sub_140A99098(a5, a2) )
        {
          *((_QWORD *)qword_140D57500 + 4107) = a1;
          sub_140A99A38(byte_140C0D9EC, "Type !deadlock in the debugger for more information.", 4097LL, a1, a2, 0LL);
          sub_1405FFA20(0xC4u, 0x1001uLL, a1, a2, 0LL, byte_140C0D9EC);
          return 0LL;
        }
        v8 = 0;
        goto LABEL_30;
      }
      return v8;
    }
LABEL_15:
    sub_140A98A98(a2);
    goto LABEL_23;
  }
LABEL_29:
  if ( a3 )
  {
LABEL_30:
    v19 = *((_DWORD *)qword_140D57500 + 8199);
    if ( v19 > *((_DWORD *)qword_140D57500 + 8200) )
      *((_DWORD *)qword_140D57500 + 8200) = v19;
  }
  return v8;
}
