/*
 * XREFs of _lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::__lambda_1e36923a9b749c25b7f1ddb2e1df24d1_ @ 0x1801B4B74
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 *     _JointResize::OnArrangedWindowResizeStarted_::_1_::dtor$4 @ 0x180529F6C (_JointResize--OnArrangedWindowResizeStarted_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::__lambda_1e36923a9b749c25b7f1ddb2e1df24d1_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
