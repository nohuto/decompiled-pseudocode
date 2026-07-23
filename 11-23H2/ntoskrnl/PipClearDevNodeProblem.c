/*
 * XREFs of PipClearDevNodeProblem @ 0x1408693DC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B728C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x140790E50 (PnpProcessAssignResourcesWorker.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x140862114 (PipAttemptDependentStart.c)
 *     PiRestartRemovalRelations @ 0x140863A1C (PiRestartRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PiDevCfgProcessDevice @ 0x14087A430 (PiDevCfgProcessDevice.c)
 *     PnpDisableDevice @ 0x140958B18 (PnpDisableDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140959570 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409596D4 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140963950 (PiProfileUpdateDeviceTreeCallback.c)
 *     PnpRebalance @ 0x14096EAB8 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140971BC8 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x14079824C (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x14086984C (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14096F8A0 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  PVOID **v8; // rcx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v2 )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    PipClearDevNodeFlags(a1, 0x2000);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        0LL,
        0LL,
        (__int64)DEVPKEY_Device_ProblemStatusOverride,
        0,
        0LL,
        0,
        0);
    }
    v7 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v7 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v7 + 792) = 2;
    *(_DWORD *)(a1 + 8 * v7 + 796) = v2;
    *(_DWORD *)(a1 + 8 * v7 + 800) = v3;
    v8 = (PVOID **)P;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( v8 )
      PiPnpRtlEndOperation(v8);
  }
}
