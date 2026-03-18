/*
 * XREFs of KeUninitThread @ 0x1407E9B3C
 * Callers:
 *     KiFreeProcessorStateInitializationParameters @ 0x14056BE34 (KiFreeProcessorStateInitializationParameters.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x14026F8D0 (MmDeleteKernelStackEx.c)
 *     MmDeleteKernelShadowStack @ 0x1406455C4 (MmDeleteKernelShadowStack.c)
 */

signed __int64 __fastcall KeUninitThread(__int64 a1)
{
  signed __int64 result; // rax

  result = MmDeleteKernelStackEx(*(_QWORD *)(a1 + 56), 2u, a1);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    result = MmDeleteKernelStackEx(*(_QWORD *)(a1 + 96) + (unsigned int)KeDecoupledStateSaveAreaLength, 8u, a1);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 1032) )
  {
    result = (signed __int64)MmDeleteKernelShadowStack(*(_QWORD *)(a1 + 1048), *(_DWORD *)(a1 + 1056) & 7, 0);
    *(_QWORD *)(a1 + 1032) = 0LL;
  }
  return result;
}
