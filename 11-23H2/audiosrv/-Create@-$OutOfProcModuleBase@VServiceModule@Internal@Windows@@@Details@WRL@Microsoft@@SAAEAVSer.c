/*
 * XREFs of ?Create@?$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVServiceModule@Internal@Windows@@XZ @ 0x18005595C
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::ServiceModule_::isInitialized__ @ 0x180001370 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Windows--Internal--ServiceModule_--isInitiali.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::Create()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(
    &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::initOnceOutOfProc_,
    (PINIT_ONCE_FN)_lambda_0436b89998ddae64b987abcfc9f7e79b_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = &Microsoft::WRL::Details::StaticStorage<Windows::Internal::ServiceModule,1,int>::instance_;
  byte_1801CFA38 = 1;
  return result;
}
