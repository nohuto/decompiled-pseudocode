/*
 * XREFs of ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryStopAskDriver(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  signed int _a1; // eax
  int v5; // ebx
  unsigned int v6; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  __int64 result; // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  m_Method = This->m_DeviceQueryStop.m_Method;
  if ( !m_Method )
  {
    v5 = 0;
    goto LABEL_10;
  }
  _a1 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked);
  v5 = _a1;
  if ( _a1 >= 0 )
  {
LABEL_10:
    result = 312LL;
    goto LABEL_11;
  }
  WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0x15u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  if ( v5 == -1073741637 )
  {
    WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x16u, WPP_PnpStateMachine_cpp_Traceguids);
    m_Globals = This->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v6, 0xBu) || v8->FxVerifyDownlevel )
        FxVerifierDbgBreakPoint(v8);
    }
  }
  result = 281LL;
LABEL_11:
  This->m_PendingPnPIrp->IoStatus.Status = v5;
  return result;
}
