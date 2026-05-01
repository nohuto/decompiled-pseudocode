/*
 * XREFs of ?SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRECT@@AEBV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x180663058
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805AEDB8 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18065EBFC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F354 (--1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180661930 (-IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z @ 0x180663350 (-SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z.c)
 *     ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x180663B90 (-StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18066583C (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CShellSnapComponent::SendSnapBarUsageForSuggestions(
        __int64 a1,
        unsigned int a2,
        struct tagRECT *a3,
        __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 i; // rbx
  float *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm1_4
  LONG v13; // ecx
  int v14; // edx
  struct tagRECT v15; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[40]; // [rsp+40h] [rbp-C0h] BYREF

  v7 = (a4[1] - *a4) >> 3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v17);
  v17[0] = &CSnapComponentTelemetry::DragToSnapBar::`vftable';
  v15 = *a3;
  CSnapComponentTelemetry::DragToSnapBar::StartActivity((CSnapComponentTelemetry::DragToSnapBar *)v17, a2, &v15, v7);
  v8 = a4[1];
  for ( i = *a4; i != v8; i += 8LL )
  {
    v10 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                     i,
                     v16);
    v11 = v10[1] + v10[3];
    v12 = *v10 + v10[2];
    v13 = (int)v10[1];
    v15.left = (int)*v10;
    v15.top = v13;
    v15.right = (int)v12;
    v15.bottom = (int)v11;
    CSnapComponentTelemetry::DragToSnapBar::SnapRegion((CSnapComponentTelemetry::DragToSnapBar *)v17, &v15);
  }
  CSnapComponentTelemetry::DragToSnapBar::IsSuggestionSnapped((CSnapComponentTelemetry::DragToSnapBar *)v17, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v17,
    v14);
  CSnapComponentTelemetry::DragToSnapBar::~DragToSnapBar((CSnapComponentTelemetry::DragToSnapBar *)v17);
}
