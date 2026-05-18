/*
 * XREFs of pow @ 0x18000C050
 * Callers:
 *     ??$pow@HI$0A@@@YANHI@Z @ 0x1800551CC (--$pow@HI$0A@@@YANHI@Z.c)
 *     ??$pow@HN$0A@@@YANHN@Z @ 0x1800E0BB0 (--$pow@HN$0A@@@YANHN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
