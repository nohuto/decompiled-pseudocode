/*
 * XREFs of ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0024E8C
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0024C4C (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C0024F78 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C0025464 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxIoQueue::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_IO_QUEUE_CONFIG *Config,
        FxDriver *Caller,
        FxPkgIo *PkgIo,
        unsigned __int8 InitialPowerStateOn,
        FxIoQueue **Object)
{
  FxIoQueue *v11; // rax
  FxIoQueue *v12; // rax
  FxIoQueue *v13; // rbx
  int _a1; // eax
  unsigned int v15; // edi
  FxPoolTypeOrPoolFlags v17; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v17.UsePoolType = 0LL;
  v17.u.PoolFlags = 64LL;
  *Object = 0LL;
  v11 = (FxIoQueue *)FxObjectHandleAllocCommon(DriverGlobals, &v17, 0x3A8uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( v11 && (FxIoQueue::FxIoQueue(v11, DriverGlobals, PkgIo), (v13 = v12) != 0LL) )
  {
    _a1 = FxIoQueue::Initialize(v12, Config, Attributes, Caller, InitialPowerStateOn);
    v15 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xBu, WPP_FxIoQueue_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v13);
      v13->DeleteObject(v13);
    }
    else
    {
      *Object = v13;
    }
    return v15;
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xAu, WPP_FxIoQueue_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
