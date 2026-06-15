/*
 * XREFs of ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180008CE0
 * Callers:
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180002560 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E68C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18013FE5C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x180140588 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180014F90 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800FDB20 (-FreeNode@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@AEAAXPEAVCN.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800FDE48 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D03C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x18013E5F8 (-AddHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?RemoveHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUIPolicyRule@@XZ @ 0x18013FD80 (-RemoveHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUI.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY08_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180140AF0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
        DynamicAudioEndpointManager *this,
        bool (*const a2)[9])
{
  int v2; // r13d
  int v3; // ebp
  __int64 v4; // r15
  char *v5; // r14
  __int64 v6; // rsi
  __int64 *v7; // rbx
  __int64 v9; // r12
  int v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  __int128 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  ATL::CAtlPlex *v15[2]; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+20h] BYREF

  v2 = (int)this;
  v13 = 0LL;
  v14 = 0LL;
  *(_OWORD *)v15 = 0LL;
  v16 = 10;
  v3 = 0;
  v4 = 0LL;
  v5 = (char *)this + 56;
  do
  {
    v6 = 0LL;
    v7 = (__int64 *)v5;
    do
    {
      v18 = *v7;
      while ( v18 )
      {
        v9 = *(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                          this,
                          &v18);
        v19 = v9;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9) - 2 <= 1 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead(&v13, &v19);
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 120LL))(v9);
          if ( !(unsigned __int8)DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
                                   v2,
                                   v10,
                                   v3,
                                   v11,
                                   (__int64)a2,
                                   (__int64)&v13)
            || (ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveHead(&v13),
                v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 120LL))(v9),
                v12 > 8) )
          {
            ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(&v13);
            return 0;
          }
          if ( (*a2)[v4 + (int)v12] )
            (*a2)[v4 + v6] = 1;
        }
      }
      ++v6;
      v7 += 6;
    }
    while ( v6 < 9 );
    ++v3;
    v4 += 9LL;
    v5 += 432;
  }
  while ( v3 < 2 );
  while ( v14 )
  {
    if ( !(_QWORD)v13 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v13 = *(_QWORD *)v13;
    ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::FreeNode(&v13);
  }
  v13 = 0LL;
  v15[1] = 0LL;
  if ( v15[0] )
    ATL::CAtlPlex::FreeDataChain(v15[0]);
  return 1;
}
