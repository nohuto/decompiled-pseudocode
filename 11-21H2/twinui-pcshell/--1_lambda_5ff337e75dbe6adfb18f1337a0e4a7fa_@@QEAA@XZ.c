/*
 * XREFs of ??1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ @ 0x1803B54C8
 * Callers:
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$0 @ 0x180218486 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$0.c)
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$1 @ 0x180222CA9 (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$1.c)
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$5 @ 0x180222CCD (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$5.c)
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$15 @ 0x180222CF1 (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$15.c)
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$30 @ 0x180222D03 (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$30.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ @ 0x180077884 (-unconditional_release_ref@-$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ.c)
 */

void __fastcall _lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_::~_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_(
        _lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_ *this)
{
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::immersive_shell_component>::unconditional_release_ref((__int64 *)this);
}
