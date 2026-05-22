/*
 * XREFs of ??0?$com_ptr_t@V?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAV?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180131A28
 * Callers:
 *     ?OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z @ 0x180133E74 (-OnOcclusionRectAdded@SystemContextManager@@QEAAXAEBUDisplayOcclusionRect@@@Z.c)
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x180133F20 (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18013403C (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 *     ?OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x1801343F8 (-OnTouchpadAdded@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z @ 0x1801344A4 (-OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z.c)
 *     ?OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x1801345B4 (-OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?EnsureInterfaceAttached@PenDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x180186938 (-EnsureInterfaceAttached@PenDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_polic.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x180187B44 (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
