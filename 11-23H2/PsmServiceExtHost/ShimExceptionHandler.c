/*
 * XREFs of ShimExceptionHandler @ 0x180096F34
 * Callers:
 *     SdbReleaseDatabase @ 0x180090334 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x180090A10 (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall ShimExceptionHandler(int **a1)
{
  int v3; // [rsp+20h] [rbp-48h]
  int v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+40h] [rbp-28h]

  v5 = (*a1)[1];
  v4 = 0;
  v3 = **a1;
  AslLogCallPrintf(
    1,
    (unsigned int)"ShimExceptionHandler",
    235,
    (unsigned int)"Shim Exception %#x in module \"%hs\", line %d, at address %Ix. flags:%#x. !exr %#p !cxr %#p",
    v3,
    &word_1800B7A68,
    v4,
    *((_QWORD *)a1[1] + 31),
    v5,
    *a1,
    a1[1]);
  return **a1 != -1073741571;
}
