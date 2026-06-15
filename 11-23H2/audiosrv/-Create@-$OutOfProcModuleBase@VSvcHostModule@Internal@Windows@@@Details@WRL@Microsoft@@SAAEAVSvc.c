/*
 * XREFs of ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x18005591C
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::SvcHostModule_::isInitialized__ @ 0x180001390 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Windows--Internal--SvcHostModule_--isInitiali.c)
 *     Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___ @ 0x180059F44 (Microsoft--WRL--Details--OutOfProcModuleBase_Windows--Internal--SvcHostModule_--Create__lambda_b.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800F0C74 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(
    &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::initOnceOutOfProc_,
    (PINIT_ONCE_FN)_lambda_253709c146e3c4eefdc38a0c994771db_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = &Microsoft::WRL::Details::StaticStorage<Windows::Internal::SvcHostModule,1,int>::instance_;
  byte_1801CF9F8 = 1;
  return result;
}
