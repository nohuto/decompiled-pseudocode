/*
 * XREFs of RaMiniportSaveFeatureList @ 0x1C00410A8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     memmove @ 0x1C0024080 (memmove.c)
 */

__int64 __fastcall RaMiniportSaveFeatureList(__int64 a1, unsigned int a2, const void *a3)
{
  _WORD *v6; // rcx

  if ( *(_DWORD *)(a1 + 300) )
    return 3221225659LL;
  if ( a2 <= 6 )
  {
    v6 = (_WORD *)(a1 + 304);
    *(_DWORD *)v6 = 0;
    v6[2] = 0;
    memmove(v6, a3, a2);
    *(_DWORD *)(a1 + 300) = a2;
  }
  *(_BYTE *)(a1 + 248) &= 0xE7u;
  return 0LL;
}
