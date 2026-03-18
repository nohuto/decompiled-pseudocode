/*
 * XREFs of SepMatchCapability @ 0x140354BF4
 * Callers:
 *     SepMaximumAccessCheck @ 0x14022A160 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14022AAE8 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x140233540 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403CDC70 (SepMaximumAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1402B6680 (SepSidInTokenSidHash.c)
 */

char __fastcall SepMatchCapability(__int64 a1, int a2, unsigned __int8 *a3, int a4, _BYTE *a5, _DWORD *a6)
{
  char result; // al

  result = SepSidInTokenSidHash((_DWORD *)(a1 + 808), 0LL, a3, 0, 1, 0);
  if ( result )
  {
    *a6 |= a4 & a2;
    result = (char)a5;
    *a5 = 1;
  }
  return result;
}
