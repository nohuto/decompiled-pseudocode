/*
 * XREFs of ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0022804
 * Callers:
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0020848 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00225C0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C00228BC (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxCmResList::_CreateAndInit(
        FxCmResList **ResourceList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *AccessFlags,
        _WDF_OBJECT_ATTRIBUTES *a4,
        unsigned __int8 FxDriverGlobals_0)
{
  unsigned int v5; // ebx
  FxCmResList *v8; // rdi
  FxPoolTypeOrPoolFlags v10; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  *ResourceList = 0LL;
  *(_QWORD *)&v10.UsePoolType = 0LL;
  v10.u.PoolFlags = 64LL;
  v8 = (FxCmResList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v10, 0x98uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v8 )
  {
    FxResourceCollection::FxResourceCollection(v8, FxDriverGlobals, 0x1036u, 0x98u, FxDriverGlobals_0);
    v8->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
    *ResourceList = v8;
  }
  else
  {
    v5 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxResource_hpp_Traceguids, -1073741670);
  }
  return v5;
}
