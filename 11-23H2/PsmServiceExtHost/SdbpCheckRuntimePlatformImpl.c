/*
 * XREFs of SdbpCheckRuntimePlatformImpl @ 0x180095FD8
 * Callers:
 *     SdbpCheckRuntimePlatform @ 0x180095F80 (SdbpCheckRuntimePlatform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckRuntimePlatformImpl(_DWORD *a1, char a2, unsigned int a3, unsigned int a4)
{
  if ( (a2 & 2) != 0 )
    return SdbpCheckRuntimePlatformV2Impl(a1, a3, a4);
  *a1 = (a3 & a4) != 0;
  return 1LL;
}
