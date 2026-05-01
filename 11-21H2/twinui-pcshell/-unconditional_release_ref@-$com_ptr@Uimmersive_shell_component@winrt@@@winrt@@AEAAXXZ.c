/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ @ 0x180077884
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180079610 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@@impl@winrt@@UEAAIXZ @ 0x1800FAB30 (-Release@-$implements_delegate@U-$TypedEventHandler@UShellViewCoordinator@Shell@UI@_ea_1800FAB30.c)
 *     ??R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBAXXZ @ 0x180157E8C (--R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBAXXZ.c)
 *     ??1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ @ 0x1803B54C8 (--1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::immersive_shell_component>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
