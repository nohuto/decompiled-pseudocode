/*
 * XREFs of sub_14090AFC8 @ 0x14090AFC8
 * Callers:
 *     sub_140AFA5EC @ 0x140AFA5EC (sub_140AFA5EC.c)
 * Callees:
 *     <none>
 */

__int64 sub_14090AFC8()
{
  unsigned int v0; // edx
  int v1; // r9d
  _WORD *i; // r11
  __int64 v3; // r8
  __int64 v4; // r10
  unsigned int v5; // esi
  unsigned int v6; // ebx
  _BYTE *v7; // rcx
  __int64 v8; // r8

  v0 = 1;
  v1 = 1;
  if ( (unsigned int)(dword_140C4A0D8 - 1) > 1 )
  {
    for ( i = (char *)qword_140C4A0D0 + 16; ; i += 8 )
    {
      v3 = *(_QWORD *)i;
      v4 = *((_QWORD *)qword_140C4A0D0 + 2 * (unsigned int)(v1 - 1));
      if ( *(_WORD *)(v4 + 2) == *(_WORD *)(*(_QWORD *)i + 2LL) )
      {
        if ( (*(_BYTE *)v4 & 1 | 6) != (*(_BYTE *)v3 & 1 | 6) )
          return 0;
        v5 = *(_DWORD *)(v4 + 24);
        if ( v5 != *(_DWORD *)(v3 + 24)
          || *(_DWORD *)(v4 + 28) != *(_DWORD *)(v3 + 28)
          || *((_WORD *)qword_140C4A0D0 + 8 * (unsigned int)(v1 - 1) + 5) != i[5] )
        {
          return 0;
        }
        if ( (*(_BYTE *)v4 & 2) != 0 )
        {
          v6 = 0;
          v7 = (_BYTE *)(v4 + 32);
          if ( v5 )
            break;
        }
      }
LABEL_14:
      if ( ++v1 >= (unsigned int)(dword_140C4A0D8 - 1) )
        return v0;
    }
    v8 = v3 - v4;
    while ( v7[1] == v7[v8 + 1] && *v7 == v7[v8] )
    {
      ++v6;
      v7 += 2;
      if ( v6 >= v5 )
        goto LABEL_14;
    }
    return 0;
  }
  return v0;
}
