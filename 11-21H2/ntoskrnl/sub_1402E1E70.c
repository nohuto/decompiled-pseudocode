/*
 * XREFs of sub_1402E1E70 @ 0x1402E1E70
 * Callers:
 *     sub_140799140 @ 0x140799140 (sub_140799140.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E1E70(int *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  unsigned int v5; // eax
  unsigned int v8; // r9d
  unsigned __int64 v9; // rbp
  _DWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // r11d
  unsigned int v13; // ecx
  int v14; // r8d
  unsigned int v15; // ecx

  v3 = *a1;
  v4 = 1;
  v5 = 1;
  v8 = 0;
  do
    v4 |= 1 << v5++;
  while ( v5 < 0x20 );
  v9 = *((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)(v3 - 1) >> 5);
  while ( 1 )
  {
    v10 = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)v8 >> 5));
    if ( (unsigned __int64)v10 > v9 )
      return 0xFFFFFFFFLL;
    while ( 1 )
    {
      v11 = v8 & 0x1F;
      v8 &= 0xFFFFFFE0;
      v12 = *v10 | *((_DWORD *)qword_140015FA0 + v11);
      if ( (v12 & v4) != v4 )
        break;
      v8 += 32;
LABEL_19:
      if ( (unsigned __int64)++v10 > v9 )
        return 0xFFFFFFFFLL;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( !_bittest(&v12, v13) )
      {
        v14 = 0;
        if ( v8 < v3 )
          break;
      }
LABEL_8:
      ++v13;
      ++v8;
      if ( v13 >= 0x20 )
        goto LABEL_19;
    }
    do
    {
      if ( _bittest64(*((const signed __int64 **)a1 + 1), v8) )
        break;
      ++v8;
      if ( ++v14 == a3 )
        return v8 - v14;
    }
    while ( v8 < v3 );
    if ( !v14 )
      goto LABEL_8;
    v15 = v14 + v13 + 1;
    if ( v15 < 0x20 )
    {
      v13 = v15 - 1;
      goto LABEL_8;
    }
    ++v8;
  }
}
