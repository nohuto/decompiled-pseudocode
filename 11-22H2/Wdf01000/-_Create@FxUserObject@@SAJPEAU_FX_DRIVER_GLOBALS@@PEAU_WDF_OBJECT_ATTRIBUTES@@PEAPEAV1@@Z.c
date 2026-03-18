/*
 * XREFs of ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C00483AC
 * Callers:
 *     ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C003BBCC (-AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAP.c)
 *     imp_WdfObjectCreate @ 0x1C00454A0 (imp_WdfObjectCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject)
{
  FxNonPagedObject *v6; // rax
  FxUserObject *v7; // rbx
  signed int _a1; // eax
  unsigned int v9; // esi
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
    FxNonPagedObject::FxNonPagedObject(v6, 0x100Cu, 0x78u, FxDriverGlobals);
    v7->__vftable = (FxUserObject_vtbl *)FxUserObject::`vftable';
    _a1 = FxObject::Commit(v7, Attributes, &handle, 0LL, 1u);
    v9 = _a1;
    if ( _a1 >= 0 )
    {
      *pUserObject = v7;
    }
    else
    {
      WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v7);
      v7->DeleteObject(v7);
    }
    return v9;
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
