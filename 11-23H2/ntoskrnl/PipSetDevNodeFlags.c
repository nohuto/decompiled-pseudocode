/*
 * XREFs of PipSetDevNodeFlags @ 0x1407956CC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C8234 (PipCallDriverAddDevice.c)
 *     PnpAllocateResources @ 0x14078F4C4 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FA24 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140790344 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140790A9C (PnpProcessAssignResources.c)
 *     PipEnumerateCompleted @ 0x140795400 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14079560C (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1407980D8 (PnpQueryID.c)
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407CD0A8 (PiMarkDeviceTreeForReenumeration.c)
 *     IopInitializeDeviceInstanceKey @ 0x1408121C4 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140815844 (IopLegacyResourceAllocation.c)
 *     PnpBuildCmResourceLists @ 0x140816054 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140816D18 (IopAllocateBootResourcesInternal.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x1408692EC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x14086977C (IopReleaseDeviceResources.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1408737A0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409594D4 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140959638 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14096D548 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14096E698 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14096E828 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x140B3A148 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140B724DC (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797210 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
