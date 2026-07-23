/*
 * XREFs of sub_1409FD474 @ 0x1409FD474
 * Callers:
 *     sub_1409FD4A0 @ 0x1409FD4A0 (sub_1409FD4A0.c)
 *     sub_1409FDC88 @ 0x1409FDC88 (sub_1409FDC88.c)
 *     sub_1409FF178 @ 0x1409FF178 (sub_1409FF178.c)
 *     sub_1409FF2C4 @ 0x1409FF2C4 (sub_1409FF2C4.c)
 *     sub_1409FF6B0 @ 0x1409FF6B0 (sub_1409FF6B0.c)
 *     sub_1409FFD10 @ 0x1409FFD10 (sub_1409FFD10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409FD474(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  while ( *v2 )
  {
    if ( (unsigned __int64)++v2 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return v2 - a1;
}
