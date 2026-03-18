/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797210
 * Callers:
 *     PipSetDevNodeState @ 0x14022AE84 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B6F88 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B70AC (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1406C8234 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeUserFlags @ 0x1407906BC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407933E0 (PipClearDevNodeUserFlags.c)
 *     PipEnumerateCompleted @ 0x140795400 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1407956CC (PipSetDevNodeFlags.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x14079805C (PipClearDevNodeFlags.c)
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 *     IopIncDisableableDepends @ 0x1407E6C5C (IopIncDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14083827C (PipNotifyDependenciesChanged.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140867E64 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086919C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408692EC (PipSetDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086EEDC (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopDecDisableableDepends @ 0x14096CCD0 (IopDecDisableableDepends.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 * Callees:
 *     _CmMapPropertyKeyToRegProp @ 0x140797284 (_CmMapPropertyKeyToRegProp.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407972F4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x14086CBA4 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, int a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_140008070[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
