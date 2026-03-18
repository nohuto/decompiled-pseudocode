/*
 * XREFs of MiGetAweVadPartition @ 0x14064A960
 * Callers:
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030B424 (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x14064A858 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 )
    return *(_QWORD *)(qword_140C673C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 40));
}
