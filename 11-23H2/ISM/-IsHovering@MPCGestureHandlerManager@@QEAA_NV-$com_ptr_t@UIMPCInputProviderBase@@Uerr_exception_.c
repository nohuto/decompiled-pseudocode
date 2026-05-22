/*
 * XREFs of ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A8B50
 * Callers:
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800BF470 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801DF620 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801E3DF0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801EA3F0 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_lower_bound@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A8098 (--$_Find_lower_bound@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@-$_T.c)
 *     ??$_Try_emplace@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@_N@1@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A81B0 (--$_Try_emplace@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@$$V@-$m.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800A8378 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18011D35C (-IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall MPCGestureHandlerManager::IsHovering(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v3; // r10
  bool IsHoveringForDeviceId; // bl
  __int64 v5; // rbx
  unsigned int v6; // eax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v11; // [rsp+58h] [rbp+10h]
  __int64 *v12; // [rsp+60h] [rbp+18h]

  v11 = a2;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Find_lower_bound<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>(
    (__int64 *)(a1 + 24),
    (__int64)v8,
    a2);
  IsHoveringForDeviceId = 0;
  if ( !*(_BYTE *)(v9 + 25) && *a2 >= *(_QWORD *)(v9 + 32) && v9 != *v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &,>(
                                  v3,
                                  (__int64)v8,
                                  a2)
                   + 40LL);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
      &v10,
      *a2);
    v12 = &v10;
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
    IsHoveringForDeviceId = ManipulationInjector::IsHoveringForDeviceId((ManipulationInjector *)(v5 + 80), v6);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v10);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)a2);
  return IsHoveringForDeviceId;
}
