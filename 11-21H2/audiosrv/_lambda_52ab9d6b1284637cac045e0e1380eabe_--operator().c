/*
 * XREFs of _lambda_52ab9d6b1284637cac045e0e1380eabe_::operator() @ 0x1800FE6C4
 * Callers:
 *     wil::details::lambda_call__lambda_52ab9d6b1284637cac045e0e1380eabe___::_lambda_call__lambda_52ab9d6b1284637cac045e0e1380eabe___ @ 0x1800FE480 (wil--details--lambda_call__lambda_52ab9d6b1284637cac045e0e1380eabe___--_lambda_call__lambda_52ab.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800FE824 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_52ab9d6b1284637cac045e0e1380eabe_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *(_QWORD *)(v2 + 32) )
  {
    v5 = 0LL;
    v3 = *(__int64 **)(v2 + 40);
    v4 = *v3;
    v5 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 88))(v3, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *(_QWORD *)(*a1 + 32));
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v5);
  }
}
