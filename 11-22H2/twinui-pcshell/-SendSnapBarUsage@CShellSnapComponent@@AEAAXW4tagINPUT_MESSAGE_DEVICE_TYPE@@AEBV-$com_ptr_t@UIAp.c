/*
 * XREFs of ?SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180662F50
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805AEDB8 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18065EBFC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F354 (--1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180661930 (-IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z @ 0x180663350 (-SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z.c)
 *     ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x180663B90 (-StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CShellSnapComponent::SendSnapBarUsage(__int64 a1, unsigned int a2, _QWORD *a3, struct tagRECT **a4)
{
  __int64 v6; // rbx
  struct tagRECT *v7; // rdi
  struct tagRECT *i; // rbx
  int v9; // edx
  struct tagRECT v10; // [rsp+20h] [rbp-E0h] BYREF
  struct tagRECT v11; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-C0h] BYREF

  v11 = 0LL;
  (*(void (__fastcall **)(_QWORD, struct tagRECT *))(*(_QWORD *)*a3 + 128LL))(*a3, &v11);
  v6 = a4[1] - *a4;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &CSnapComponentTelemetry::DragToSnapBar::`vftable';
  v10 = v11;
  CSnapComponentTelemetry::DragToSnapBar::StartActivity((CSnapComponentTelemetry::DragToSnapBar *)v12, a2, &v10, v6);
  v7 = a4[1];
  for ( i = *a4; i != v7; ++i )
  {
    v10 = *i;
    CSnapComponentTelemetry::DragToSnapBar::SnapRegion((CSnapComponentTelemetry::DragToSnapBar *)v12, &v10);
  }
  CSnapComponentTelemetry::DragToSnapBar::IsSuggestionSnapped((CSnapComponentTelemetry::DragToSnapBar *)v12, 0);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v12,
    v9);
  CSnapComponentTelemetry::DragToSnapBar::~DragToSnapBar((CSnapComponentTelemetry::DragToSnapBar *)v12);
}
