/*
 * XREFs of sub_14075DEAC @ 0x14075DEAC
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_1409DE730 @ 0x1409DE730 (sub_1409DE730.c)
 * Callees:
 *     sub_14075DFE4 @ 0x14075DFE4 (sub_14075DFE4.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 *     sub_1408577B0 @ 0x1408577B0 (sub_1408577B0.c)
 */

__int64 __fastcall sub_14075DEAC(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  unsigned int v8; // esi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rcx

  v3 = (_QWORD *)(a1 + 40);
  v5 = *(_QWORD **)(a1 + 40);
  v8 = 0;
  while ( v5 != v3 )
  {
    v9 = v5 - 5;
    if ( (*(_DWORD *)(v5 - 3) & 8) != 0 )
    {
      v10 = sub_140783CD8(v9[7], 0LL);
      if ( !v10 )
      {
        v10 = sub_14075DFE4();
        if ( !v10 )
          return (unsigned int)-1073741670;
        v12 = qword_140C16560;
        *(_OWORD *)(v10 + 72) = *(_OWORD *)v9[7];
        v13 = *(_QWORD *)v12;
        if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
          goto LABEL_16;
        *(_QWORD *)v10 = v13;
        *(_QWORD *)(v10 + 8) = v12;
        *(_QWORD *)(v13 + 8) = v10;
        *(_QWORD *)v12 = v10;
      }
      *((_DWORD *)v9 + 4) &= ~8u;
      v9[7] = v10;
      v11 = *(_QWORD **)(v10 + 64);
      if ( *v11 != v10 + 56 )
        goto LABEL_16;
      *v9 = v10 + 56;
      v9[1] = v11;
      *v11 = v9;
      *(_QWORD *)(v10 + 64) = v9;
      ++*(_DWORD *)(v10 + 36);
      if ( (v9[2] & 0x80000) != 0 )
        sub_1408577B0(v5 - 5, a3);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( a2 )
  {
    v14 = qword_140C16510;
    *(_DWORD *)(a1 + 16) |= 0x40000000u;
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 != v14 )
LABEL_16:
      __fastfail(3u);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v15;
    *v15 = a1;
    *(_QWORD *)(v14 + 8) = a1;
  }
  return v8;
}
