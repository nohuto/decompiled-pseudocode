/*
 * XREFs of _lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator() @ 0x1800B446C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_dd0ac130d9769d2b3db8f6249ecd131b__void_IMPCInputProviderBase___::_Do_call @ 0x1800B8D80 (std--_Func_impl_no_alloc__lambda_dd0ac130d9769d2b3db8f6249ecd131b__void_IMPCInputPr_ea_1800B8D80.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA?A_TAEBUPointData3D@@@Z @ 0x1800B3FD0 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800B5790 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 */

__int64 __fastcall lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator()(_QWORD *a1, struct IMPCInputProviderBase *a2)
{
  MPCHolographicInputManager *v4; // rcx
  __int64 v5; // rbp
  __int64 i; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
    a2,
    *a1,
    *a1 + 3720LL);
  v5 = *(_QWORD *)(*a1 + 3728LL);
  for ( i = *(_QWORD *)(*a1 + 3720LL); i != v5; i += 184LL )
  {
    if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v4, a2) )
      v7 = 1;
    else
      v7 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 328LL))(a2);
    v8 = *a1 + 3696LL;
    *(_DWORD *)(i + 176) = v7;
    std::vector<PointData3D>::emplace_back<PointData3D const &>(v8, (_OWORD *)i);
  }
  result = *(_QWORD *)(*a1 + 3720LL);
  *(_QWORD *)(*a1 + 3728LL) = result;
  return result;
}
