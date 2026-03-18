/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C002494C
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0022E2C (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0023B1C (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0066F20 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x1C00249FC (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ??0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0024A64 (--0FxDisposeList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *WdmObject,
        FxDisposeList **pObject)
{
  FxDisposeList *v6; // rax
  FxDisposeList *v7; // rax
  FxDisposeList *v8; // rbx
  int v9; // edi
  FxPoolTypeOrPoolFlags v11; // [rsp+40h] [rbp-18h] BYREF

  *pObject = 0LL;
  *(_QWORD *)&v11.UsePoolType = 0LL;
  v11.u.PoolFlags = 64LL;
  v6 = (FxDisposeList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v11, 0xA0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v6 )
    return 3221225626LL;
  FxDisposeList::FxDisposeList(v6, FxDriverGlobals);
  v8 = v7;
  if ( !v7 )
    return 3221225626LL;
  v9 = FxDisposeList::Initialize(v7, WdmObject);
  if ( v9 < 0 )
  {
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
  }
  else
  {
    *pObject = v8;
  }
  return (unsigned int)v9;
}
