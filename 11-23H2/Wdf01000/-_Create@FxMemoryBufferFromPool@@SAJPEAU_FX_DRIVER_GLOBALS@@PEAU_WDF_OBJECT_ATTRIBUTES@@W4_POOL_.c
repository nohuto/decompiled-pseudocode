/*
 * XREFs of ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0042930
 * Callers:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0001B44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 * Callees:
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0001948 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0001CF4 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00395E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxMemoryBufferFromPool::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Buffer)
{
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  bool IsPagedPoolType; // r14
  FxDeviceBase *v12; // rbp
  FxMemoryObject *v13; // rax
  FxMemoryObject *v14; // rbx
  FxMemoryObject *v16; // rax
  SIZE_T v17; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax
  FxPoolTypeOrPoolFlags v19; // [rsp+40h] [rbp-28h] BYREF

  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  if ( IsPagedPoolType && (v12 = FxDeviceBase::_SearchForDevice(FxDriverGlobals, v10)) != 0LL )
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v13 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                              FxDriverGlobals,
                              &v19,
                              0x80uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
    v14 = v13;
    if ( v13 )
    {
      FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
      v14[1].FxObject::__vftable = 0LL;
      v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
      v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      v14->m_DeviceBase = v12;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v14 )
      return 3221225626LL;
  }
  else
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v16 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                              FxDriverGlobals,
                              &v19,
                              0x80uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
    v14 = v16;
    if ( !v16 )
      return 3221225626LL;
    FxMemoryObject::FxMemoryObject(v16, FxDriverGlobals, 0x80u, BufferSize);
    v14[1].FxObject::__vftable = 0LL;
    v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  }
  v17 = v14->GetBufferSize(&v14->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v17, PoolTag);
  v14[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::ClearEvtCallbacks(v14);
    v14->DeleteObject(v14);
    return 3221225626LL;
  }
  if ( IsPagedPoolType )
    v14->m_ObjectFlags |= 0x11u;
  *Buffer = v14;
  return 0LL;
}
