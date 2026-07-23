/*
 * XREFs of sub_14059726C @ 0x14059726C
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 * Callees:
 *     sub_1403867F4 @ 0x1403867F4 (sub_1403867F4.c)
 */

void __fastcall sub_14059726C(__int64 a1)
{
  int v1; // edx

  if ( byte_140C53444 )
  {
    v1 = 0;
    if ( *(__int64 *)(a1 + 1368) > 1 )
      v1 = 256;
    if ( *(_DWORD *)(a1 + 16588) )
      v1 |= 0x200u;
    if ( v1 )
      sub_1403867F4(a1, v1);
  }
}
