/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_4fd86d7f339d52492de09ef910ca4095_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x18018E230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_4fd86d7f339d52492de09ef910ca4095_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  __int64 result; // rax

  byte_1807B32C8 = 1;
  Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_;
  result = 1LL;
  Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_ = (__int64)&Platform::Details::InProcModule::`vftable'{for `Microsoft::WRL::Module<5,Platform::Details::InProcModule>'};
  qword_1807B32C0 = (__int64)&Platform::Details::InProcModule::`vftable'{for `__abi_Module'};
  __abi_module = (struct __abi_Module *)&qword_1807B32C0;
  return result;
}
