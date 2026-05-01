/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C
 * Callers:
 *     ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x180110EBC (-InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ.c)
 *     ??4?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180110F68 (--4-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x1801110E8 (--0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ @ 0x18050C08C (--1-$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEAA@XZ.c)
 *     ??R?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ @ 0x18050D030 (--R-$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ.c)
 *     ??R?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x18050D1A0 (--R-$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18065EFF0 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18065F4D8 (--1SnapFlyoutHost@@UEAA@XZ.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x18066317C (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_688536045750b024e9c980c09e4232a8_@@QEBA?A_PAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x18067483C (--$-RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindo.c)
 *     _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x18067A258 (_lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator().c)
 *     _lambda_89d43c20f0f7bb0e860cd8602b20fbb7_::operator() @ 0x18067A394 (_lambda_89d43c20f0f7bb0e860cd8602b20fbb7_--operator().c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_b00624e5fb0e02667b9366ca0e3bf890_@@@impl@winrt@@UEAAHPEAX@Z @ 0x18067B460 (-Invoke@-$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@_ea_18067B460.c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_4f6f4ae6f6ef7d80e35ad6540d1880aa_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x18067B510 (-Invoke@-$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V.c)
 *     _lambda_eed24a43ab320b602e73bc35d7541654_::operator() @ 0x18068AE5C (_lambda_eed24a43ab320b602e73bc35d7541654_--operator().c)
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int64 __fastcall winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 result; // rax
  int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *a1;
  *a1 = 0LL;
  result = *((_QWORD *)v1 + 1);
  while ( result >= 0 )
  {
    v3 = result - 1;
    v4 = result;
    result = _InterlockedCompareExchange64(v1 + 1, result - 1, result);
    if ( v4 == result )
      goto LABEL_6;
  }
  result = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * result));
  v3 = result;
LABEL_6:
  if ( !v3 )
  {
    result = _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return result;
}
