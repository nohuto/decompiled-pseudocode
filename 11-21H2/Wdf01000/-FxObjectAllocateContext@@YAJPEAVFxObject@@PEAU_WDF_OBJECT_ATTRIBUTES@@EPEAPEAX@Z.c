/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0021414
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfObjectAllocateContext @ 0x1C00213C0 (imp_WdfObjectAllocateContext.c)
 *     ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C0068EC4 (-AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAP.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0021584 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0021670 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C00216DC (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxObjectAllocateContext(
        FxObject *Object,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int8 AllowCallbacksOnly,
        void **Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  bool IsVersionGreaterThanOrEqualTo; // al
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  _FX_DRIVER_GLOBALS *v11; // rcx
  __int64 result; // rax
  bool v13; // zf
  ULONG Tag; // ecx
  void *v15; // rax
  FX_POOL **v16; // rax
  FxContextHeader *v17; // rbx
  unsigned __int64 size; // [rsp+40h] [rbp-20h] BYREF
  __m128i v19; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+18h]
  int status; // [rsp+80h] [rbp+20h] BYREF

  m_Globals = Object->m_Globals;
  size = 0LL;
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)Attributes,
                                    0xBu);
  result = FxValidateObjectAttributes(v11, v10, IsVersionGreaterThanOrEqualTo + 8);
  status = result;
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo || AllowCallbacksOnly )
    {
      FxObject::AddRef(Object, &status, 519, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
      status = FxCalculateObjectTotalSize(m_Globals, 0, 0, Attributes, &size);
      if ( status >= 0 )
      {
        v13 = m_Globals->FxPoolTrackingOn == 0;
        Tag = m_Globals->Tag;
        v19.m128i_i64[0] = 0LL;
        v19.m128i_i64[1] = 64LL;
        if ( v13 )
          v15 = 0LL;
        else
          v15 = retaddr;
        v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v19, size, Tag, v15);
        v17 = (FxContextHeader *)v16;
        if ( v16 )
        {
          FxContextHeaderInit((FxContextHeader *)v16, Object, Attributes);
          status = FxObject::AddContext(Object, v17, Context, Attributes);
          if ( status )
            FxPoolFree((FX_POOL_TRACKER *)v17);
        }
        else
        {
          status = -1073741670;
        }
      }
      Object->Release(Object, &status, 554, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
    }
    else
    {
      status = -1073741773;
      WPP_IFR_SF_qL(m_Globals, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, 0xC0000033);
    }
    return (unsigned int)status;
  }
  return result;
}
