/*
 * XREFs of LZNT1FindMatchStandard @ 0x18011B4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(char *a1, __int64 a2)
{
  char v2; // bp
  int v4; // r14d
  int v5; // r15d
  unsigned int v6; // r10d
  __int64 v7; // rax
  _BYTE *v8; // r8
  unsigned __int64 v9; // r9
  unsigned int v10; // edx
  _BYTE *v11; // r11
  _BYTE *v12; // r11

  v2 = *a1;
  v4 = (unsigned __int8)a1[1];
  v5 = (unsigned __int8)a1[2];
  v6 = 0;
  v7 = ((-24993 * (v5 ^ (16 * (v4 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF;
  v8 = *(_BYTE **)(a2 + 16 * v7 + 40);
  v9 = *(_QWORD *)(a2 + 16 * (v7 + 2));
  v10 = 0;
  if ( v9 >= *(_QWORD *)a2
    && v9 < (unsigned __int64)a1
    && *(_BYTE *)v9 == v2
    && *(_WORD *)(v9 + 1) == __PAIR16__(v5, v4) )
  {
    v6 = 3;
    if ( *(_DWORD *)(a2 + 16) > 3u )
    {
      v11 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v6] >= *(_QWORD *)(a2 + 8) )
          break;
        if ( *v11 != v11[v9 - (_QWORD)a1] )
          break;
        ++v6;
        ++v11;
      }
      while ( v6 < *(_DWORD *)(a2 + 16) );
    }
  }
  if ( (unsigned __int64)v8 >= *(_QWORD *)a2 && v8 < a1 && *v8 == v2 && v8[1] == (_BYTE)v4 && v8[2] == (_BYTE)v5 )
  {
    v10 = 3;
    if ( *(_DWORD *)(a2 + 16) > 3u )
    {
      v12 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v10] >= *(_QWORD *)(a2 + 8) )
          break;
        if ( *v12 != v12[v8 - a1] )
          break;
        ++v10;
        ++v12;
      }
      while ( v10 < *(_DWORD *)(a2 + 16) );
    }
  }
  *(_QWORD *)(a2 + 16LL * (((-24993 * (v5 ^ (16 * (v4 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF) + 40) = v9;
  *(_QWORD *)(a2 + 16 * (v7 + 2)) = a1;
  if ( v6 < v10 )
  {
    *(_QWORD *)(a2 + 24) = v8;
    return v10;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v9;
    return v6;
  }
}
