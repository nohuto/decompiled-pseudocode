/*
 * XREFs of ??0?$com_ptr_t@V?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAV?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18014BF28
 * Callers:
 *     ?OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z @ 0x18014E4F8 (-OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z.c)
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x18014E5A4 (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18014E6C0 (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 *     ?OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x18014EA80 (-OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z @ 0x18014EB2C (-OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z.c)
 *     ?OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x18014EC3C (-OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18014F7B0 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?EnsureInterfaceAttached@PenDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x1801A52C4 (-EnsureInterfaceAttached@PenDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_polic.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x1801A60BC (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
