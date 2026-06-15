/*
 * XREFs of ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007190
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::HandleDefaultDeviceChanged(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work)
{
  struct _TP_WORK *v4; // rcx
  __int64 v5; // rcx

  CMonitorManager::DoHandleDefaultDeviceChanged(
    *((CMonitorManager **)Context + 2),
    *((enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *)Context + 2),
    *(const unsigned __int16 **)Context);
  v4 = (struct _TP_WORK *)*((_QWORD *)Context + 3);
  if ( v4 )
    CloseThreadpoolWork(v4);
  v5 = *((_QWORD *)Context + 2);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)Context - 24LL));
  operator delete(Context, 0x20uLL);
}
