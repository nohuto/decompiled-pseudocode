/*
 * XREFs of ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x18019DDC4
 * Callers:
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A2C0 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A4A0 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x18012A6C0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnInserted@TouchpadRectListProxy@@MEAAJI@Z @ 0x180130580 (-OnInserted@TouchpadRectListProxy@@MEAAJI@Z.c)
 *     ?OnRemoved@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180130710 (-OnRemoved@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180130760 (-OnReplaced@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180184820 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 * Callees:
 *     atexit @ 0x18004A308 (atexit.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x18019D9F4 (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 */

struct VirtualTouchpadContextProvider *VirtualTouchpadContextProvider::GetInstance(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int inited; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = 16LL;
  v1 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1802437C8 > *(_DWORD *)(v1 + 16) )
  {
    Init_thread_header(&dword_1802437C8);
    if ( dword_1802437C8 == -1 )
    {
      atexit(VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_1802437C8);
    }
  }
  inited = wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___(v1, v0, &v6);
  if ( inited < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x256,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)inited,
      v4);
  return (struct VirtualTouchpadContextProvider *)qword_180242DD8;
}
