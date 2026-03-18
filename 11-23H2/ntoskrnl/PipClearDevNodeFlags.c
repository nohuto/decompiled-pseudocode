/*
 * XREFs of PipClearDevNodeFlags @ 0x14079805C
 * Callers:
 *     PnpAllocateResources @ 0x14078F4C4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14078F864 (PnpGetResourceRequirementsForAssignTable.c)
 *     PipEnumerateDevice @ 0x140794D7C (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x140795400 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PiProcessReenumeration @ 0x1407CCFF4 (PiProcessReenumeration.c)
 *     IopRemoveLegacyDeviceNode @ 0x140815968 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x1408159AC (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140816054 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x1408162A4 (IopReleaseFilteredBootResources.c)
 *     PnpProcessRelation @ 0x140868A58 (PnpProcessRelation.c)
 *     PipClearDevNodeProblem @ 0x14086919C (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140869968 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x1408814C8 (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882AE8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140958CBC (PnpRestartDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140959370 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409594D4 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14096D548 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14096E3F4 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14096F33C (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797210 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
