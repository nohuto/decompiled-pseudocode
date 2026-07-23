/*
 * XREFs of sub_1403BF66C @ 0x1403BF66C
 * Callers:
 *     sub_140AFA320 @ 0x140AFA320 (sub_140AFA320.c)
 *     sub_140B4C3F8 @ 0x140B4C3F8 (sub_140B4C3F8.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403BF66C()
{
  unsigned int v1; // ecx
  unsigned __int16 v2; // r10
  __int64 v3; // rdx
  unsigned __int16 v4; // r8

  if ( !qword_140C4E850 )
    return 0LL;
  v1 = 0;
  v2 = *(_WORD *)(qword_140C4E850 + 40);
  v3 = qword_140C4E850 + 44;
  v4 = 0;
  if ( v2 )
  {
    do
    {
      if ( v3 + 34 > qword_140C4E850 + (unsigned __int64)*(unsigned int *)(qword_140C4E850 + 4) )
        return 0;
      if ( *(_DWORD *)(v3 + 24) && (*(_BYTE *)v3 & 1) != 0 )
        ++v1;
      ++v4;
      v3 += *(unsigned int *)(v3 + 4);
    }
    while ( v4 < v2 );
    if ( v1 && !*(_WORD *)v3 )
      return 0;
  }
  return v1;
}
