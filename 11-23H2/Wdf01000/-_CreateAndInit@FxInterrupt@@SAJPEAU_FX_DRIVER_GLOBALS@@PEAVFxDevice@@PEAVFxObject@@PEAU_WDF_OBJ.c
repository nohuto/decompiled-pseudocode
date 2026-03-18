/*
 * XREFs of ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C007F92C
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C0067D20 (imp_WdfInterruptCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007E4AC (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C007EAD8 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F178 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 */

__int64 __fastcall FxInterrupt::_CreateAndInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        FxDevice *Parent,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_INTERRUPT_CONFIG *Configuration,
        FxInterrupt **Interrupt)
{
  FxInterrupt *v10; // rax
  FxInterrupt *v11; // rax
  FxInterrupt *v12; // rbx
  FxDevice *v13; // rbp
  int WakeInterruptMachine; // edi
  signed int _a1; // eax
  FxPoolTypeOrPoolFlags v17; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v17.UsePoolType = 0LL;
  v17.u.PoolFlags = 64LL;
  v10 = (FxInterrupt *)FxObjectHandleAllocCommon(
                         FxDriverGlobals,
                         &v17,
                         0x1C8uLL,
                         0,
                         Attributes,
                         0,
                         FxObjectTypeExternal);
  if ( v10 )
  {
    FxInterrupt::FxInterrupt(v10, FxDriverGlobals);
    v12 = v11;
    if ( v11 )
    {
      v13 = Device;
      if ( Parent )
        v13 = Parent;
      WakeInterruptMachine = FxInterrupt::Initialize(v11, Device, v13, Configuration);
      if ( WakeInterruptMachine >= 0 )
      {
        _a1 = FxObject::Commit(v12, Attributes, 0LL, (_FX_DRIVER_GLOBALS *)v13, 1u);
        WakeInterruptMachine = _a1;
        if ( _a1 >= 0 )
        {
          *Interrupt = v12;
          if ( !Configuration->CanWakeDevice )
            return (unsigned int)WakeInterruptMachine;
          WakeInterruptMachine = FxInterrupt::CreateWakeInterruptMachine(v12);
          if ( WakeInterruptMachine >= 0 )
            return (unsigned int)WakeInterruptMachine;
        }
        else
        {
          WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0x11u, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, _a1);
        }
      }
      FxObject::ClearEvtCallbacks(v12);
      v12->DeleteObject(v12);
      return (unsigned int)WakeInterruptMachine;
    }
  }
  WPP_IFR_SF_qd(
    FxDriverGlobals,
    2u,
    0xCu,
    0x10u,
    (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
    Device,
    -1073741670);
  return 3221225626LL;
}
