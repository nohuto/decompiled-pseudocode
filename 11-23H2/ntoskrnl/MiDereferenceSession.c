/*
 * XREFs of MiDereferenceSession @ 0x1407E0E90
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 * Callees:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 */

unsigned __int64 MiDereferenceSession()
{
  _KPROCESS *Process; // rbx
  unsigned __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)Process[1].Affinity.StaticBitmap[25],
                           0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = MiDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
  return result;
}
