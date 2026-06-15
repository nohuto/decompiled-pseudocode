/*
 * XREFs of Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___ @ 0x180059F34
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x18005590C (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 */

__int64 *Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___()
{
  __int64 *result; // rax

  result = Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create();
  if ( !result[6] )
  {
    byte_1801D0218 = 1;
    qword_1801D0200 = (__int64)off_18016EB70;
    byte_1801D0208 = 0;
    result[6] = (__int64)&qword_1801D0200;
  }
  return result;
}
