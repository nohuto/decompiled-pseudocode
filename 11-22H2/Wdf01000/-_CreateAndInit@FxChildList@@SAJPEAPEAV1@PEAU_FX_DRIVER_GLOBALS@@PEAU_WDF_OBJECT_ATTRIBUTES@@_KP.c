/*
 * XREFs of ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C00268E8
 * Callers:
 *     imp_WdfChildListCreate @ 0x1C0020D40 (imp_WdfChildListCreate.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0077B10 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0082840 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C0023554 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C0024DD8 (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 */

__int64 __fastcall FxChildList::_CreateAndInit(
        FxChildList **ChildList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        unsigned __int8 Static)
{
  unsigned int v8; // ebx
  FxPoolTypeOrPoolFlags v9; // xmm1
  FxChildList *v12; // rcx
  FxChildList *v13; // rax
  FxChildList *v14; // rdi
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v16.UsePoolType = 0LL;
  v16.u.PoolFlags = 64LL;
  v8 = 0;
  v9 = v16;
  *ChildList = 0LL;
  v16 = v9;
  v12 = (FxChildList *)FxObjectHandleAllocCommon(
                         FxDriverGlobals,
                         &v16,
                         0x168uLL,
                         0,
                         ListAttributes,
                         0,
                         FxObjectTypeExternal);
  if ( v12 && (FxChildList::FxChildList(v12, FxDriverGlobals, TotalDescriptionSize, Device, Static), (v14 = v13) != 0LL) )
  {
    FxChildList::Initialize(v13, ListConfig);
    *ChildList = v14;
  }
  else
  {
    v8 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, 0xC000009A);
  }
  return v8;
}
