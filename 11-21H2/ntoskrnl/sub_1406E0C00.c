/*
 * XREFs of sub_1406E0C00 @ 0x1406E0C00
 * Callers:
 *     sub_1406E0A70 @ 0x1406E0A70 (sub_1406E0A70.c)
 * Callees:
 *     sub_140A136D8 @ 0x140A136D8 (sub_140A136D8.c)
 */

__int64 __fastcall sub_1406E0C00(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  int v5; // eax

  if ( (*(_DWORD *)(a1 + 28) & 0xFFF8) != 0 )
  {
    for ( i = 3; i < 0x10; ++i )
    {
      v5 = *(_DWORD *)(a1 + 28);
      if ( _bittest(&v5, i) )
        sub_140A136D8(a1, a2, i);
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
    sub_140A136D8(a1, a2, 1LL);
  return 1LL;
}
