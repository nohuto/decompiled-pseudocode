/*
 * XREFs of MiGetAweVadPartition @ 0x14064A9D0
 * Callers:
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030B2F4 (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x14064A8C8 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 )
    return *(_QWORD *)(qword_140C674C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 40));
}
