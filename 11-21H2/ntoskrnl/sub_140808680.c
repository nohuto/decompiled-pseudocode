/*
 * XREFs of sub_140808680 @ 0x140808680
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 */

__int64 __fastcall sub_140808680(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (int)sub_14042A5E0(a1, 0LL) < 0 )
  {
    return (unsigned int)-1073741491;
  }
  else
  {
    if ( (int)sub_14068A23C(a1, 0) < 0 )
      return (unsigned int)-1073741491;
    return v1;
  }
}
