/*
 * XREFs of sub_140A31E68 @ 0x140A31E68
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

char __fastcall sub_140A31E68(const void **a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  size_t v7; // rsi

  v3 = 0;
  if ( !a2 )
    return 0;
  v7 = *(unsigned int *)a1;
  while ( *(_DWORD *)(a3 + 16LL * v3) != (_DWORD)v7 || memcmp(*(const void **)(a3 + 16LL * v3 + 8), a1[1], v7) )
  {
    if ( ++v3 >= a2 )
      return 0;
  }
  return 1;
}
