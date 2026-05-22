/*
 * XREFs of ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x18009D518
 * Callers:
 *     ?ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z @ 0x180098AA0 (-ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z @ 0x18009E910 (-MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800A0E5C (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 */

__int64 __fastcall MPCHolographicInputManager::ForcePrimaryInputType(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  ISMTracing *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 48LL))(**(_QWORD **)(a1 + 3600)) != a2 )
  {
    v4 = *(_QWORD **)(a1 + 3304);
    v5 = *(_QWORD **)(a1 + 3312);
    while ( v4 != v5 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 48LL))(*v4) == a2
        && !(unsigned __int8)MPCHolographicInputManager::TrySetProviderAsPrimary((MPCHolographicInputManager *)a1) )
      {
        v7 = -2147467259;
        v8 = 1117LL;
        goto LABEL_10;
      }
      ++v4;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 48LL))(**(_QWORD **)(a1 + 3600)) != a2 )
    {
      v7 = -2147024809;
      v8 = 1121LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)v7);
      return v7;
    }
    if ( ISMTracing::IsEnabled(v6) )
    {
      wil::details::static_lazy<ISMTracing>::get(v10, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCHolographicInputManager_ForcedPrimary_(v11, a2);
    }
  }
  return 0LL;
}
