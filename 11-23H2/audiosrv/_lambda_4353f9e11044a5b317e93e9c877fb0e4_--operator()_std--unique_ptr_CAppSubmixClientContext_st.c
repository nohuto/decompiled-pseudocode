/*
 * XREFs of _lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800CFF3C
 * Callers:
 *     ?OnRenderStreamCountChanged@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180017420 (-OnRenderStreamCountChanged@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x1800D18D0 (-EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV-$unique_ptr@VCAppSubmixClie.c)
 *     ?EnsureProcessSubmixNotInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x1800D1978 (-EnsureProcessSubmixNotInSubmixContext@CProcessSubmixManager@@AEAAJAEBV-$unique_ptr@VCAppSubmixC.c)
 */

__int64 __fastcall lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        __int64 **a1,
        __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // r8

  v4 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)**a1 + 240LL))(**a1) == 0;
  v6 = **a1;
  if ( v4 )
    return CProcessSubmixManager::EnsureProcessSubmixNotInSubmixContext(v5, a2, v6);
  else
    return CProcessSubmixManager::EnsureProcessSubmixInSubmixContext(v5, a2, v6);
}
