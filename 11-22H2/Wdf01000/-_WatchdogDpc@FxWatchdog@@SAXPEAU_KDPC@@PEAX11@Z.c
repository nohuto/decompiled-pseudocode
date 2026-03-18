/*
 * XREFs of ?_WatchdogDpc@FxWatchdog@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C00766F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall __noreturn FxWatchdog::_WatchdogDpc(
        _KDPC *Dpc,
        void *Context,
        void *SystemArgument1,
        void *SystemArgument2)
{
  __int64 v5; // rdi
  _WDF_POWER_ROUTINE_TIMED_OUT_DATA data; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)Context + 19) + 96LL);
  WPP_IFR_SF_(*(_FX_DRIVER_GLOBALS **)(v5 + 16), 2u, 0xCu, 0x4Fu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
  data.PowerState = *(_DWORD *)(v5 + 204);
  data.PowerPolicyState = *(_DWORD *)(v5 + 208);
  data.DeviceObject = *(_DEVICE_OBJECT **)(v5 + 144);
  data.Device = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked((FxObject *)v5);
  data.TimedOutThread = (_KTHREAD *)*((_QWORD *)Context + 20);
  FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v5 + 16), WDF_POWER_ROUTINE_TIMED_OUT, (ULONG_PTR)&data, 0LL);
}
