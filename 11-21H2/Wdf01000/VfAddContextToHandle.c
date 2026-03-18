/*
 * XREFs of VfAddContextToHandle @ 0x1C00C52D4
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1C00C4C90 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00C5070 (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0021584 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0021670 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VfAddContextToHandle(
        FxContextHeader *ContextHeader,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int64 Handle,
        void **Context)
{
  __int64 result; // rax
  __int64 v9; // rcx
  FxObject *v10; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int _a2; // eax
  int status; // [rsp+70h] [rbp+8h] BYREF

  status = 0;
  if ( !ContextHeader )
    return 3221225485LL;
  LOWORD(v9) = 0;
  v10 = (FxObject *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v9 = LOWORD(v10->__vftable);
    v10 = (FxObject *)((char *)v10 - v9);
  }
  m_Globals = v10->m_Globals;
  if ( (_WORD)v9 )
  {
    status = -1073741767;
    WPP_IFR_SF_qL(m_Globals, 3u, 0xBu, 0xCu, WPP_Verifier_cpp_Traceguids, (const void *)Handle, 0xC0000039);
  }
  else
  {
    FxObject::AddRef(v10, &status, 622, "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp");
    FxContextHeaderInit(ContextHeader, v10, Attributes);
    _a2 = FxObject::AddContext(v10, ContextHeader, Context, Attributes);
    status = _a2;
    if ( _a2 )
      WPP_IFR_SF_qL(m_Globals, 3u, 0xBu, 0xDu, WPP_Verifier_cpp_Traceguids, (const void *)Handle, _a2);
    v10->Release(v10, &status, 639, "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp");
  }
  result = (unsigned int)status;
  if ( status )
  {
    FxPoolFree((FX_POOL_TRACKER *)ContextHeader);
    return (unsigned int)status;
  }
  return result;
}
