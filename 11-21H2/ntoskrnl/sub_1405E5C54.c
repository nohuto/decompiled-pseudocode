/*
 * XREFs of sub_1405E5C54 @ 0x1405E5C54
 * Callers:
 *     sub_140971708 @ 0x140971708 (sub_140971708.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1405E5C54(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  _DWORD *v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  _DWORD *v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  const signed __int64 *v15; // r11

  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  if ( *(_QWORD *)a1 > a2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (_DWORD *)(v7 + 4 * ((v3 - 1) >> 5));
    v9 = (_DWORD *)(v7 + 4 * (a2 >> 5));
    if ( v9 != v8 && (~*((_DWORD *)qword_140015FA0 + (a2 & 0x1F)) & *v9) == 0 )
    {
      a2 = (a2 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
      for ( ++v9; v9 < v8 && !*v9; ++v9 )
        a2 += 32LL;
    }
    for ( ; a2 < v3; ++a2 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), a2) )
        break;
    }
    v10 = 0LL;
    if ( v9 != v8 )
    {
      v11 = a2 & 0x1F;
      if ( (*v9 | *((_DWORD *)qword_140015FA0 + v11)) == -1 )
      {
        v10 = 32 - v11;
        if ( v11 == 33 )
        {
LABEL_24:
          *a3 = a2;
          return v10;
        }
        v12 = v9 + 1;
        while ( v12 < v8 && *v12 == -1 )
        {
          ++v12;
          v10 += 32LL;
          if ( v10 == -1LL )
            goto LABEL_24;
        }
      }
    }
    v13 = *(_QWORD *)a1;
    v14 = v10 + a2;
    if ( v10 + a2 < *(_QWORD *)a1 )
    {
      v15 = *(const signed __int64 **)(a1 + 8);
      do
      {
        if ( !_bittest64(v15, v14) )
          break;
        if ( v10 == -1LL )
          break;
        ++v14;
        ++v10;
      }
      while ( v14 < v13 );
    }
    goto LABEL_24;
  }
  *a3 = a2;
  return v4;
}
