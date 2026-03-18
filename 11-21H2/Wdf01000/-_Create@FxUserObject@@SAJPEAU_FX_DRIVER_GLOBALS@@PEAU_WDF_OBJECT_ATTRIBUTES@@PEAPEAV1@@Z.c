/*
 * XREFs of ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0011378
 * Callers:
 *     imp_WdfObjectCreate @ 0x1C00112B0 (imp_WdfObjectCreate.c)
 *     ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C0068EC4 (-AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAP.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0007A14 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject)
{
  FxNonPagedObject *v6; // rax
  FxUserObject *v7; // rbx
  int _a1; // eax
  unsigned int v9; // edi
  FxPoolTypeOrPoolFlags v11; // [rsp+40h] [rbp-28h] BYREF
  void *handle; // [rsp+88h] [rbp+20h] BYREF

  *(_QWORD *)&v11.UsePoolType = 0LL;
  v11.u.PoolFlags = 64LL;
  v6 = (FxNonPagedObject *)FxObjectHandleAllocCommon(
                             FxDriverGlobals,
                             &v11,
                             0x78uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
  v7 = (FxUserObject *)v6;
  if ( v6 )
  {
    FxNonPagedObject::FxNonPagedObject(v6, (_FX_DRIVER_GLOBALS *)0x100C, 0x78u, FxDriverGlobals);
    v7->__vftable = (FxUserObject_vtbl *)FxUserObject::`vftable';
    _a1 = FxObject::Commit(v7, (_FX_DRIVER_GLOBALS *)Attributes, &handle, 0LL, 1u);
    v9 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v7);
      v7->DeleteObject(v7);
    }
    else
    {
      *pUserObject = v7;
    }
    return v9;
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
