/*
 * XREFs of KeUninitThread @ 0x1406E90B4
 * Callers:
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 *     MmDeleteKernelShadowStack @ 0x1405A5DF0 (MmDeleteKernelShadowStack.c)
 */

char __fastcall KeUninitThread(__int64 a1)
{
  char result; // al

  result = MmDeleteKernelStackEx(*(_QWORD *)(a1 + 56), 2u, a1);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    result = MmDeleteKernelStackEx(*(_QWORD *)(a1 + 96) + (unsigned int)KeDecoupledStateSaveAreaLength, 8u, a1);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 1032) )
  {
    result = MmDeleteKernelShadowStack(*(_QWORD *)(a1 + 1048), (*(_DWORD *)(a1 + 116) >> 10) & 1, 0);
    *(_QWORD *)(a1 + 1032) = 0LL;
  }
  return result;
}
