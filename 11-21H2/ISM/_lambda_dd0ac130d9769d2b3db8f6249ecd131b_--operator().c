/*
 * XREFs of _lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator() @ 0x18009D048
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_dd0ac130d9769d2b3db8f6249ecd131b__void_IMPCInputProviderBase___::_Do_call @ 0x1800A16F0 (std--_Func_impl_no_alloc__lambda_dd0ac130d9769d2b3db8f6249ecd131b__void_IMPCInputPr_ea_1800A16F0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x18009CA4C (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x18009E560 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 */

__int64 __fastcall lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator()(_QWORD *a1, struct IMPCInputProviderBase *a2)
{
  MPCHolographicInputManager *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(
    a2,
    *a1,
    *a1 + 3720LL);
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 3728LL);
  v7 = *(_QWORD *)(*a1 + 3720LL);
  if ( v7 != v6 )
  {
    do
    {
      if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v4, a2) )
        v8 = 1;
      else
        v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 328LL))(a2);
      v9 = *a1 + 3696LL;
      *(_DWORD *)(v7 + 176) = v8;
      std::vector<PointData3D>::emplace_back<PointData3D const &>(v9, (_OWORD *)v7);
      v7 += 184LL;
    }
    while ( v7 != v6 );
    v5 = *a1;
  }
  result = *(_QWORD *)(v5 + 3720);
  *(_QWORD *)(v5 + 3728) = result;
  return result;
}
