/*
 * XREFs of wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_::operator() @ 0x1801AA930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl_void__::operator()(
        __int64 a1)
{
  Microsoft::WRL::AgileRef *v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = (Microsoft::WRL::AgileRef *)(a1 + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  v2 = Microsoft::WRL::AgileRef::InternalResolve(v1, &GUID_71880306_f2db_0330_10a8_e1abbd3d18cb, &v7);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v4 = 845LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v4,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v2);
    return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 24LL))(v7);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v4 = 849LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
}
