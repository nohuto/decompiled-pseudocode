/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0043354
 * Callers:
 *     ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C003BBCC (-AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAP.c)
 *     imp_WdfObjectAllocateContext @ 0x1C00437A0 (imp_WdfObjectAllocateContext.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0085BCC (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00027D8 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00028FC (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00029B8 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0045FE8 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
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
  unsigned __int64 ContextSize; // rax
  bool v14; // zf
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rax
  FxContextHeader *v18; // rbx
  unsigned __int64 size; // [rsp+40h] [rbp-20h] BYREF
  __m128i v20; // [rsp+50h] [rbp-10h] BYREF
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
      ContextSize = FxGetContextSize(Attributes);
      status = FxCalculateObjectTotalSize2(m_Globals, 0, 0, ContextSize, &size);
      if ( status >= 0 )
      {
        v14 = m_Globals->FxPoolTrackingOn == 0;
        Tag = m_Globals->Tag;
        v20.m128i_i64[0] = 0LL;
        v20.m128i_i64[1] = 64LL;
        if ( v14 )
          v16 = 0LL;
        else
          v16 = retaddr;
        v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v20, size, Tag, v16);
        v18 = (FxContextHeader *)v17;
        if ( v17 )
        {
          FxContextHeaderInit((FxContextHeader *)v17, Object, Attributes);
          status = FxObject::AddContext(Object, v18, Context, Attributes);
          if ( status )
            FxPoolFree((FX_POOL_TRACKER *)v18);
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
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, -1073741773);
    }
    return (unsigned int)status;
  }
  return result;
}
