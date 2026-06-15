/*
 * XREFs of pow @ 0x1800175F4
 * Callers:
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18002C8E4 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
