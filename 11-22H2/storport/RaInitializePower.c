/*
 * XREFs of RaInitializePower @ 0x1C0034170
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C00346D8 (RaidAdapterCompleteInitialization.c)
 *     RaidPowerPassToMiniPort @ 0x1C004C25C (RaidPowerPassToMiniPort.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4496) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 484) + 7) & 0xFFFFFFF8) + 1104, a2, a1);
  *(_QWORD *)(a1 + 4488) = result;
  return result;
}
