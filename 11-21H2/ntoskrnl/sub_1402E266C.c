/*
 * XREFs of sub_1402E266C @ 0x1402E266C
 * Callers:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_1402E22B0 @ 0x1402E22B0 (sub_1402E22B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E266C(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v5; // esi
  _DWORD *v6; // r10
  _DWORD *v7; // rax
  _DWORD *v8; // r9
  __int64 v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rax
  char v13; // r8
  bool v14; // zf
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int64 v18; // rax
  char v19; // r8

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)a1 & 0x1F;
  v6 = (_DWORD *)(v3 + 4 * ((unsigned __int64)a2 >> 5));
  v7 = (_DWORD *)(v3 + 4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)a1 - 1) >> 5));
  v8 = v7 - 1;
  if ( !v5 )
    v8 = v7;
  v9 = a2 & 0x1F;
  v10 = 0;
  v11 = ~*((_DWORD *)qword_140015FA0 + v9) & *v6;
  if ( v6 > v8 )
  {
LABEL_18:
    if ( v5 )
    {
      if ( v10 )
        v11 = v6[1];
      v18 = v11 | ~*((_DWORD *)qword_140015FA0 + (*(_DWORD *)a1 & 0x1F));
      v19 = -1;
      v14 = !_BitScanForward64((unsigned __int64 *)&a1, v18);
      if ( !v14 )
        v19 = a1;
      v10 += v19;
    }
  }
  else if ( v11 )
  {
LABEL_5:
    v12 = v11;
    v13 = -1;
    v14 = !_BitScanForward64((unsigned __int64 *)&v15, v12);
    if ( !v14 )
      v13 = v15;
    v10 += v13;
  }
  else
  {
    v11 = 0;
    while ( 1 )
    {
      v10 += 32;
      if ( v10 >= a3 && v10 - (unsigned int)v9 >= a3 )
        break;
      if ( v6 == v8 )
        goto LABEL_18;
      v11 = *++v6;
      if ( *v6 )
        goto LABEL_5;
    }
  }
  v16 = v10 - v9;
  if ( v16 > a3 )
    return a3;
  return v16;
}
