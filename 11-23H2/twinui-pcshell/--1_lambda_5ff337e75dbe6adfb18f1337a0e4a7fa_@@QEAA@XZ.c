/*
 * XREFs of ??1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ @ 0x18048EA30
 * Callers:
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$1 @ 0x1802C6074 (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$1.c)
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$5 @ 0x1802C6086 (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$5.c)
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$22 @ 0x1802C6098 (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$22.c)
 *     __lambda_9102ab066cd0787a9c4c0ffcea2bf645_::operator()_::_1_::dtor$37 @ 0x1802C60AA (__lambda_9102ab066cd0787a9c4c0ffcea2bf645_--operator()_--_1_--dtor$37.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801A2000 (-unconditional_release_ref@-$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 */

void __fastcall _lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_::~_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_(
        _lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_ *this)
{
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::unconditional_release_ref((__int64 *)this);
}
