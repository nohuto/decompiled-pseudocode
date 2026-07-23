/*
 * XREFs of PipClearDevNodeFlags @ 0x14079824C
 * Callers:
 *     PnpAllocateResources @ 0x14078F6B4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14078FA54 (PnpGetResourceRequirementsForAssignTable.c)
 *     PipEnumerateDevice @ 0x140794F6C (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PiProcessReenumeration @ 0x1407CD2C4 (PiProcessReenumeration.c)
 *     IopRemoveLegacyDeviceNode @ 0x140815C38 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140815C7C (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140816324 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x140816574 (IopReleaseFilteredBootResources.c)
 *     PnpProcessRelation @ 0x140868C98 (PnpProcessRelation.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140869BA8 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x140881708 (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140882D28 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140958EBC (PnpRestartDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140959570 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409596D4 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14096D748 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14096E5F4 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14096F53C (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
