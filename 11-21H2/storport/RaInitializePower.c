/*
 * XREFs of RaInitializePower @ 0x1C003350C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 *     RaidPowerPassToMiniPort @ 0x1C00491FC (RaidPowerPassToMiniPort.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4432) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, a2, a1);
  *(_QWORD *)(a1 + 4424) = result;
  return result;
}
