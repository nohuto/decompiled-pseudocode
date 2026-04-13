/*
 * XREFs of ?LockServer@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJH@Z @ 0x180079730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::LockServer(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v5 = *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_;
    if ( a2 )
      (*(void (**)(void))(v5 + 8))();
    else
      (*(void (**)(void))(v5 + 16))();
    return 0LL;
  }
  else
  {
    RoOriginateError(2147500037LL, 0LL, a3, a4);
    return 2147500037LL;
  }
}
