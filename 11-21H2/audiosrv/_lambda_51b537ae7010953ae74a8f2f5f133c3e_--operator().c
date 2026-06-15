/*
 * XREFs of _lambda_51b537ae7010953ae74a8f2f5f133c3e_::operator() @ 0x1800FE60C
 * Callers:
 *     wil::details::lambda_call__lambda_51b537ae7010953ae74a8f2f5f133c3e___::_lambda_call__lambda_51b537ae7010953ae74a8f2f5f133c3e___ @ 0x1800FE460 (wil--details--lambda_call__lambda_51b537ae7010953ae74a8f2f5f133c3e___--_lambda_call__lambda_51b5.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101728 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FC730 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_51b537ae7010953ae74a8f2f5f133c3e_::operator()(_QWORD **a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  DeviceGraphStore::GetAllStreamGroups((__int64)&v4);
  v2 = (__int64 *)*((_QWORD *)&v4 + 1);
  v3 = (__int64 *)v4;
  if ( (_QWORD)v4 != *((_QWORD *)&v4 + 1) )
  {
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 368LL))(*v3, **a1);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)&v4 + 1);
    v3 = (__int64 *)v4;
  }
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v3, v2);
    std::_Deallocate<16,0>((void *)v4, (v5 - v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
