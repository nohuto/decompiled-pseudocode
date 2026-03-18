/*
 * XREFs of imp_WdfMemoryCreatePreallocated @ 0x1C00125E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0005890 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C001275C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **PMemory)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *ParentObject; // rdx
  WDFMEMORY__ **v10; // rsi
  __int64 result; // rax
  FxMemoryObject *v12; // rax
  FxObject *v13; // rdi
  int v14; // ebx
  FxPoolTypeOrPoolFlags v15; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+90h] [rbp+18h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hMemory = 0LL;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 0) >= 0 )
  {
    ParentObject = Attributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v10 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PMemory = 0LL;
  if ( BufferSize )
  {
    result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)&v15.UsePoolType = 0LL;
      v15.u.PoolFlags = 64LL;
      v12 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                                m_Globals,
                                &v15,
                                0x80uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      v13 = v12;
      if ( v12 )
      {
        FxMemoryObject::FxMemoryObject(v12, m_Globals, 0x80u, BufferSize);
        v13[1].m_Globals = Buffer;
        v13->__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
        v13[1].__vftable = (FxObject_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
        v14 = FxObject::Commit(v13, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&hMemory, 0LL, 1u);
        if ( v14 < 0 )
        {
          FxObject::ClearEvtCallbacks(v13);
          v13->DeleteObject(v13);
        }
        else
        {
          *v10 = hMemory;
        }
        return (unsigned int)v14;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
