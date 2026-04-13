/*
 * XREFs of ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800491E8
 * Callers:
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180004500 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     DllCanUnloadNow @ 0x18004BD10 (DllCanUnloadNow.c)
 *     DllGetActivationFactory @ 0x18004BD60 (DllGetActivationFactory.c)
 *     DllGetClassObject @ 0x18004BDA0 (DllGetClassObject.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    (PINIT_ONCE_FN)_lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = &Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_;
  byte_180196540 = 1;
  return result;
}
