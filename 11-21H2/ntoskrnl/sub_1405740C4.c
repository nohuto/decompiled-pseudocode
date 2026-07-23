/*
 * XREFs of sub_1405740C4 @ 0x1405740C4
 * Callers:
 *     sub_140574558 @ 0x140574558 (sub_140574558.c)
 * Callees:
 *     sub_14023BA88 @ 0x14023BA88 (sub_14023BA88.c)
 *     sub_14045B3BC @ 0x14045B3BC (sub_14045B3BC.c)
 *     sub_140573D78 @ 0x140573D78 (sub_140573D78.c)
 */

unsigned __int64 __fastcall sub_1405740C4(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  char v12; // dl
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // si
  unsigned __int8 v16; // r8
  int v17; // edx
  int v18; // r14d
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int64 result; // rax

  v6 = a1;
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    if ( sub_14023BA88() && (a3 & v7) != 0 && sub_14045B3BC(*(_DWORD *)(a4 + 4)) )
    {
      a3 = v9 & ~v8;
      if ( !a3 )
        a3 = v9;
    }
    else
    {
      v10 = a3 & v8;
      if ( v10 )
        a3 = v10;
    }
  }
  v11 = a3 & *(_QWORD *)(v6 + 32);
  if ( !v11 )
    v11 = a3;
  v12 = 0;
  v13 = *a5 & v11;
  if ( !v13 )
  {
    v13 = v11;
    if ( (v11 & a5[1]) != 0 )
    {
      v12 = 1;
      v13 = v11 & a5[1];
    }
  }
  if ( dword_140D06A24 && (v13 & *(_QWORD *)(v6 + 8LL * *(int *)(a4 + 4) + 200)) != 0 )
    v13 &= *(_QWORD *)(v6 + 8LL * *(int *)(a4 + 4) + 200);
  if ( v12 )
  {
    v14 = 0LL;
    v15 = 0;
    if ( v13 )
    {
      v16 = *(_BYTE *)(a4 + 16);
      v17 = *(_DWORD *)(a4 + 12);
      v18 = *(unsigned __int16 *)(v6 + 136) << 6;
      do
      {
        _BitScanForward64(&v19, v13);
        v20 = sub_140573D78(qword_140D088C0[dword_140D105E0[v18 + (v19 & 0x3F)]], v17, v16);
        if ( v20 <= v15 )
        {
          if ( v20 == v15 )
            v14 |= *(_QWORD *)(v22 + 200);
        }
        else
        {
          v14 = *(_QWORD *)(v22 + 200);
          v15 = v20;
        }
        v13 = ~*(_QWORD *)(v22 + 200) & v21;
      }
      while ( v13 );
    }
    v13 = v14;
  }
  result = v13 & a2[25];
  if ( !result )
  {
    result = v13 & a2[4364];
    if ( !result )
    {
      result = v13 & a2[4367];
      if ( !result )
      {
        result = v13;
        if ( (v13 & a2[4366]) != 0 )
          return v13 & a2[4366];
      }
    }
  }
  return result;
}
