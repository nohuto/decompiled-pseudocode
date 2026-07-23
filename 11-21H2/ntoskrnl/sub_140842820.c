/*
 * XREFs of sub_140842820 @ 0x140842820
 * Callers:
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 * Callees:
 *     sub_140842978 @ 0x140842978 (sub_140842978.c)
 *     sub_140842C30 @ 0x140842C30 (sub_140842C30.c)
 */

__int64 __fastcall sub_140842820(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // eax

  v4 = sub_140842C30(a1, *a2, a2);
  if ( v4 )
    return sub_140842978(a1, v4, a2);
  else
    return 0LL;
}
