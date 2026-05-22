/*
 * XREFs of ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB56C
 * Callers:
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800CFA60 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800D0020 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801EC850 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801EF0A8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801F0F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801F7120 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Find_lower_bound@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BA984 (--$_Find_lower_bound@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@-$_T.c)
 *     ??$_Try_emplace@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@_N@1@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BAA9C (--$_Try_emplace@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@$$V@-$m.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800BAC64 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?IsInjecting@MPCGestureHandler@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB508 (-IsInjecting@MPCGestureHandler@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCGestureHandlerManager::IsInjecting(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v3; // r10
  char IsInjecting; // bl
  __int64 v5; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v10; // [rsp+58h] [rbp+10h]

  v10 = a2;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Find_lower_bound<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>(
    (__int64 *)(a1 + 24),
    (__int64)v7,
    a2);
  IsInjecting = 0;
  if ( !*(_BYTE *)(v8 + 25) && *a2 >= *(_QWORD *)(v8 + 32) && v8 != *v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &,>(
                                  v3,
                                  (__int64)v7,
                                  a2)
                   + 40LL);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
      &v9,
      *a2);
    IsInjecting = MPCGestureHandler::IsInjecting(v5, &v9);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)a2);
  return IsInjecting;
}
