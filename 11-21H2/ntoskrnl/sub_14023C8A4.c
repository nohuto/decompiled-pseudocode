/*
 * XREFs of sub_14023C8A4 @ 0x14023C8A4
 * Callers:
 *     sub_14027E174 @ 0x14027E174 (sub_14027E174.c)
 * Callees:
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 */

__int64 __fastcall sub_14023C8A4(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx

  v2 = 0;
  if ( a1 == a2[3] )
    v3 = a2[1];
  else
    v3 = *(_QWORD *)(a1 + 8);
  if ( a1 == a2[4] )
    v4 = a2[2] + 8LL;
  else
    v4 = *(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 44);
  while ( v3 < v4 )
  {
    if ( sub_140337B00(v3) )
    {
      v5 = v4;
      if ( v4 > (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
        v5 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      while ( v3 < v5 )
      {
        if ( (*(_BYTE *)v3 & 1) != 0 )
        {
          v2 = 1;
          v3 = v4;
          break;
        }
        v3 += 8LL;
      }
    }
    else
    {
      v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
  }
  return v2;
}
