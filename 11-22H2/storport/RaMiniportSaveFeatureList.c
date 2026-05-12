/*
 * XREFs of RaMiniportSaveFeatureList @ 0x1C0043B20
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall RaMiniportSaveFeatureList(__int64 a1, unsigned int a2, const void *a3)
{
  _WORD *v6; // rcx

  if ( *(_DWORD *)(a1 + 304) )
    return 3221225659LL;
  if ( a2 <= 0xA )
  {
    v6 = (_WORD *)(a1 + 308);
    *(_QWORD *)v6 = 0LL;
    v6[4] = 0;
    memmove(v6, a3, a2);
    *(_DWORD *)(a1 + 304) = a2;
  }
  *(_BYTE *)(a1 + 248) &= 0xE7u;
  return 0LL;
}
