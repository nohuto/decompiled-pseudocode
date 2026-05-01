/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801A2000
 * Callers:
 *     ??R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBA@XZ @ 0x18018FB3C (--R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBA@XZ.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@@impl@winrt@@UEAAIXZ @ 0x1801A1FA0 (-Release@-$implements_delegate@U-$TypedEventHandler@UShellViewCoordinator@Shell@UI@_ea_1801A1FA0.c)
 *     ??1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ @ 0x18048EA30 (--1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
