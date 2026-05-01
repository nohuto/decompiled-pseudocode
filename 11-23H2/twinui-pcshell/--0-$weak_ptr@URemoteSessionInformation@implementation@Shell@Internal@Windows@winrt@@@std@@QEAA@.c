/*
 * XREFs of ??0?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV01@@Z @ 0x1807200B0
 * Callers:
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::_lambda_665315f8e7a3be3e9382c02473f3b139_ @ 0x18027AD08 (_lambda_665315f8e7a3be3e9382c02473f3b139_--_lambda_665315f8e7a3be3e9382c02473f3b139_.c)
 *     _lambda_f03d60f1a224720d7726d7a51ce0d0af_::_lambda_f03d60f1a224720d7726d7a51ce0d0af_ @ 0x180280D44 (_lambda_f03d60f1a224720d7726d7a51ce0d0af_--_lambda_f03d60f1a224720d7726d7a51ce0d0af_.c)
 *     _lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_::_lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_ @ 0x180280D5C (_lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_--_lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_66e3247105c53d232400c257ddcfd6f2__void___lambda_66e3247105c53d232400c257ddcfd6f2__const_&_ @ 0x180281EB4 (std--_Global_new_std--_Func_impl_no_alloc__lambda_66e3247105c53d232400c257ddcfd6f2__void___lambd.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void___lambda_c08ce6a39495b94ac81d1bf94c809a99__const_&_ @ 0x18028200C (std--_Global_new_std--_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void___lambd.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lambda_d5554fb7d1d16b7c69ea1af45fa7d089__const_&_ @ 0x180282164 (std--_Global_new_std--_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lambd.c)
 *     _lambda_c08ce6a39495b94ac81d1bf94c809a99_::_lambda_c08ce6a39495b94ac81d1bf94c809a99_ @ 0x1802822C0 (_lambda_c08ce6a39495b94ac81d1bf94c809a99_--_lambda_c08ce6a39495b94ac81d1bf94c809a99_.c)
 *     _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_ @ 0x180282374 (_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_--_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}
