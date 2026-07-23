/*
 * XREFs of sub_140A74B1C @ 0x140A74B1C
 * Callers:
 *     sub_1405655BC @ 0x1405655BC (sub_1405655BC.c)
 * Callees:
 *     sub_140A74918 @ 0x140A74918 (sub_140A74918.c)
 */

char sub_140A74B1C()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdi
  int v2; // eax

  v0 = 0;
  v1 = &unk_140C33EE0;
  do
  {
    v2 = *v1 & 5;
    if ( (*(_BYTE *)v1 & 5) == 5 )
    {
      *v1 &= ~4u;
      LOBYTE(v2) = sub_140A74918(v0);
    }
    ++v0;
    v1 += 10;
  }
  while ( v0 < 0x20 );
  return v2;
}
