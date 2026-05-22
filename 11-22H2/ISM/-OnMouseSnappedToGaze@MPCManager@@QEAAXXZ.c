/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x1800C2C64
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F4CD0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x1800C1BF8 (-MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ.c)
 */

void __fastcall MPCManager::OnMouseSnappedToGaze(MPCManager *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCManager_OnMouseSnappedToGaze_(v3);
  }
  v4 = **((_QWORD **)this + 9);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 40) + 40LL))(*(_QWORD *)(v4 + 40));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v5);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v7);
    v4 = v7;
  }
}
