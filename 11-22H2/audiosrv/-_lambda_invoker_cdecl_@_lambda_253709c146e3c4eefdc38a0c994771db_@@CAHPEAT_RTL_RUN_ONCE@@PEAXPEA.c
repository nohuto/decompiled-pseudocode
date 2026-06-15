/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_253709c146e3c4eefdc38a0c994771db_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180054430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_253709c146e3c4eefdc38a0c994771db_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  __int64 result; // rax

  byte_1801CF9F8 = 1;
  dword_1801CF9CC = 0;
  Microsoft::WRL::Details::ModuleBase::module_ = (Microsoft::WRL::Details *)&qword_1801CF9E0;
  qword_1801CF9F0 = 0LL;
  Microsoft::WRL::Details::StaticStorage<Windows::Internal::SvcHostModule,1,int>::instance_ = (__int64)&Windows::Internal::SvcHostModule::`vftable'{for `Windows::Internal::ServiceModuleBase'};
  result = 1LL;
  qword_1801CF9C0 = 0LL;
  qword_1801CF9E0 = (__int64)&Windows::Internal::SvcHostModule::`vftable'{for `Microsoft::WRL::Module<2,Windows::Internal::SvcHostModule>'};
  dword_1801CF9C8 = -2147467259;
  xmmword_1801CF9D0 = 0LL;
  qword_1801CF9E8 = 0LL;
  return result;
}
