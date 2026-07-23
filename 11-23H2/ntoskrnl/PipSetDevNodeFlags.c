/*
 * XREFs of PipSetDevNodeFlags @ 0x1407958BC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PnpAllocateResources @ 0x14078F6B4 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FC14 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140790534 (PiQueryResourceRequirements.c)
 *     PnpProcessAssignResources @ 0x140790C8C (PnpProcessAssignResources.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407957FC (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1407982C8 (PnpQueryID.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407CD378 (PiMarkDeviceTreeForReenumeration.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140815B14 (IopLegacyResourceAllocation.c)
 *     PnpBuildCmResourceLists @ 0x140816324 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140816FE8 (IopAllocateBootResourcesInternal.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1408699BC (IopReleaseDeviceResources.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1408739E0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409596D4 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140959838 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14096D748 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14096E898 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14096EA28 (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x140B3A148 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140B724DC (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
