/*
 * XREFs of sub_1405ED1A0 @ 0x1405ED1A0
 * Callers:
 *     sub_1405ED354 @ 0x1405ED354 (sub_1405ED354.c)
 *     sub_1405ED45C @ 0x1405ED45C (sub_1405ED45C.c)
 *     sub_1405ED6E4 @ 0x1405ED6E4 (sub_1405ED6E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405ED1A0(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r9
  unsigned int v3; // r8d

  v2 = *a2;
  v3 = **a2;
  if ( v3 - 55296 <= 0x7FF )
  {
    if ( v3 < 0xDC00 )
      v3 = *++v2 + ((v3 - 55287) << 10);
    else
      v3 += (*--v2 - 55287) << 10;
  }
  *a2 = v2;
  return v3;
}
