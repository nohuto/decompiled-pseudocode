/*
 * XREFs of IopLiveDumpUnpackMemoryRun @ 0x14094F374
 * Callers:
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094D6E4 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x14094E464 (IopLiveDumpFreeIoSpaceRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopLiveDumpUnpackMemoryRun(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx

  v3 = a1 & 0xFFFFFFFFFFLL;
  v4 = a1 >> 40;
  *a2 = v3;
  *a3 = v4;
  if ( v3 )
    return v3 + (unsigned int)v4 < v3 ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
