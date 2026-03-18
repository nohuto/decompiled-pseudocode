/*
 * XREFs of ?_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@@PEAPEAVFxMemoryObject@@@Z @ 0x1C0001BC0
 * Callers:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0001B44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0001CF4 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 */

__int64 __fastcall FxMemoryBuffer::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        _POOL_TYPE PoolType,
        FxMemoryObject **Object)
{
  FxMemoryObject *v8; // rdi
  FxPoolTypeOrPoolFlags v10; // [rsp+40h] [rbp-18h] BYREF

  if ( BufferSize >= 0x1000 )
    return 3221225990LL;
  v10 = 0LL;
  v10.UsePoolType = 1;
  v10.u.PoolType = PoolType;
  v8 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                           DriverGlobals,
                           &v10,
                           0x78uLL,
                           PoolTag,
                           Attributes,
                           BufferSize,
                           FxObjectTypeExternal);
  if ( !v8 )
    return 3221225626LL;
  FxMemoryObject::FxMemoryObject(v8, DriverGlobals, ((BufferSize + 15) & 0xFFF0) + 128, BufferSize);
  v8->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
  v8->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  *Object = v8;
  return 0LL;
}
