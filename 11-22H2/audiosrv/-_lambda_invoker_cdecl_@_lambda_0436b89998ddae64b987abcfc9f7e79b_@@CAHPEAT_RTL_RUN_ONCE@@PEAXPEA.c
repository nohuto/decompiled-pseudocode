/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0436b89998ddae64b987abcfc9f7e79b_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1800544A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_0436b89998ddae64b987abcfc9f7e79b_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  __int64 result; // rax

  byte_1801CFA38 = 1;
  dword_1801CFA14 = 0;
  Microsoft::WRL::Details::ModuleBase::module_ = (Microsoft::WRL::Details *)&qword_1801CFA28;
  qword_1801CFA08 = 0LL;
  Microsoft::WRL::Details::StaticStorage<Windows::Internal::ServiceModule,1,int>::instance_ = (__int64)&Windows::Internal::ServiceModule::`vftable'{for `Windows::Internal::ServiceModuleBase'};
  result = 1LL;
  dword_1801CFA10 = -2147467259;
  qword_1801CFA28 = (__int64)&Windows::Internal::ServiceModule::`vftable'{for `Microsoft::WRL::Module<2,Windows::Internal::ServiceModule>'};
  xmmword_1801CFA18 = 0LL;
  qword_1801CFA30 = 0LL;
  return result;
}
