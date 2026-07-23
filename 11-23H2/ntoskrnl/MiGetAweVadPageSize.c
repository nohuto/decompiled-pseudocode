/*
 * XREFs of MiGetAweVadPageSize @ 0x140A4200C
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x140277EA0 (MiVadPageTableChargeLevel.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     MiGetAwePageSize @ 0x14064AE68 (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x14064AF08 (MiGetAweViewPageSize.c)
 */

__int64 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  __int64 AweViewPageSize; // r8
  __int64 VadEvent; // rax
  __int64 v3; // r9
  __int64 v4; // rcx

  AweViewPageSize = 1LL;
  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
  {
    VadEvent = MiLocateVadEvent(a1, 256LL);
    AweViewPageSize = MiGetAweViewPageSize(VadEvent + 8);
    if ( !AweViewPageSize )
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( (*(_DWORD *)(v4 + 8) & 1) == 0 )
        return MiGetAwePageSize(v4);
    }
  }
  return AweViewPageSize;
}
