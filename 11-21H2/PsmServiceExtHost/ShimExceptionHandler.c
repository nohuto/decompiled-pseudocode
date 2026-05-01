/*
 * XREFs of ShimExceptionHandler @ 0x18009C3B0
 * Callers:
 *     SdbReleaseDatabase @ 0x180095694 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x180095D78 (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall ShimExceptionHandler(_DWORD **a1)
{
  AslLogCallPrintf(
    1,
    (unsigned int)"ShimExceptionHandler",
    162,
    (unsigned int)"Shim Exception %#x in module \"%hs\", line %d, at address %Ix. flags:%#x. !exr %#p !cxr %#p");
  return **a1 != -1073741571;
}
