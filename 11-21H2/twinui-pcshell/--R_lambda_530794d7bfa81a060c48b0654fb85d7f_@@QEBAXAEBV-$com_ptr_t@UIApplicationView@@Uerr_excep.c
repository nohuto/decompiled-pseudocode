/*
 * XREFs of ??R_lambda_530794d7bfa81a060c48b0654fb85d7f_@@QEBAXAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804EF4FC
 * Callers:
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F1904 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1804EEC7C (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall _lambda_530794d7bfa81a060c48b0654fb85d7f_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *result; // rax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1[1];
  v5 = **a1;
  if ( v5 == *v4 )
  {
    wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(&v11);
    *(_WORD *)(v11 + 112) = 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 320LL))(*a2, v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEC,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v8,
        v9);
    return (__int64 *)Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v11);
  }
  else
  {
    v11 = *(_QWORD *)(v5 + 16);
    v12 = *a2;
    v6 = a1[2][7];
    if ( !v6 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v12, &v11);
    result = (__int64 *)**a1;
    **a1 = *result;
  }
  return result;
}
