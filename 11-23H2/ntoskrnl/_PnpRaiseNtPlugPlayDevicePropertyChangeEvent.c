/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797400
 * Callers:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B7168 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B728C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeUserFlags @ 0x1407908AC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407935D0 (PipClearDevNodeUserFlags.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1407958BC (PipSetDevNodeFlags.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x14079824C (PipClearDevNodeFlags.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     IopIncDisableableDepends @ 0x1407E6F2C (IopIncDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14083857C (PipNotifyDependenciesChanged.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408680A4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x1408693DC (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086F11C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopDecDisableableDepends @ 0x14096CED0 (IopDecDisableableDepends.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 * Callees:
 *     _CmMapPropertyKeyToRegProp @ 0x140797474 (_CmMapPropertyKeyToRegProp.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407974E4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x14086CDE4 (_CmRaisePropertyChangeEvent.c)
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
