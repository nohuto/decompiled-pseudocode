/*
 * XREFs of ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY08_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180140AF0
 * Callers:
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180008CE0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY08_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180140AF0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D03C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x18013E5F8 (-AddHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?RemoveHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUIPolicyRule@@XZ @ 0x18013FD80 (-RemoveHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUI.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY08_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180140AF0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 */

char __fastcall DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // r15d
  _QWORD *i; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  int v20; // [rsp+70h] [rbp+8h]

  v20 = a1;
  if ( a4 > 8 || a3 > 1 )
    return 0;
  v8 = 9LL * (int)a3;
  v9 = v8 + (int)a4;
  v10 = *(_QWORD *)(a1 + 48 * v9 + 56);
  v18 = (_QWORD *)v10;
  if ( v10 )
  {
    do
    {
      v11 = *ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
               v10,
               &v18);
      v19 = v11;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) - 2 <= 1 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11) && (!v12 || a2 == v12) )
        {
          for ( i = (_QWORD *)*a6; i; i = (_QWORD *)*i )
          {
            if ( i[2] == v11 )
              return 0;
          }
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
          v16 = v14;
          v10 = (unsigned int)(v14 - 1);
          if ( (unsigned int)v10 <= 7 )
          {
            ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead(a6, (__int64)&v19, v15);
            if ( !(unsigned __int8)DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
                                     v20,
                                     a2,
                                     a3,
                                     v16,
                                     a5,
                                     (__int64)a6) )
              return 0;
            ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveHead(a6);
            v10 = v16 + v8;
            if ( *(_BYTE *)(v16 + v8 + a5) )
              *(_BYTE *)(v9 + a5) = 1;
          }
        }
      }
    }
    while ( v18 );
  }
  return 1;
}
