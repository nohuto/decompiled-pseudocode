/*
 * XREFs of ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180035780
 * Callers:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180002480 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x180035330 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180141F80 (-GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180014F90 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180035920 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D03C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?Find@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEBAPEAU__POSITION@@PEBGPEAU3@@Z @ 0x18013F13C (-Find@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x18013F2B0 (-GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z.c)
 *     ?NewNode@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@PEBGPEAV312@1@Z @ 0x18013F8E4 (-NewNode@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 *     ?RemoveAll@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x18013FCF0 (-RemoveAll@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElement.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        _BYTE *a5,
        struct IMMDevice **a6)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  __int64 v11; // rcx
  _BYTE *v12; // r12
  _QWORD *v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  void *v17; // r11
  int DefaultEndpoint; // ebx
  __int64 v20; // rbx
  __int64 v21; // rax
  void *v22; // r11
  int (__fastcall *v23)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, LPVOID *); // rbx
  unsigned __int16 *v24; // rbx
  unsigned int DeviceFromDeviceId; // esi
  ATL::CAtlPlex *v26; // rsi
  __int64 v27; // rax
  unsigned __int16 *v28; // [rsp+40h] [rbp-39h] BYREF
  __int64 v29; // [rsp+48h] [rbp-31h] BYREF
  __int64 v30; // [rsp+50h] [rbp-29h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h]
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+60h] [rbp-19h]
  __int128 v33; // [rsp+68h] [rbp-11h] BYREF
  __int64 v34; // [rsp+78h] [rbp-1h]
  ATL::CAtlPlex *v35[2]; // [rsp+80h] [rbp+7h]
  int v36; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  LPVOID pv; // [rsp+D0h] [rbp+57h] BYREF

  v6 = a4;
  v7 = a3;
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v32 = v10;
  v33 = 0LL;
  v34 = 0LL;
  *(_OWORD *)v35 = 0LL;
  v36 = 10;
  v28 = 0LL;
  if ( (unsigned int)v6 > 8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
    ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v33);
    if ( !v10 )
      return 2147942487LL;
LABEL_49:
    LeaveCriticalSection(v10);
    return 2147942487LL;
  }
  if ( (unsigned int)v7 > 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
    ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v33);
    if ( !v10 )
      return 2147942487LL;
    goto LABEL_49;
  }
  v11 = *(_QWORD *)(a1 + 48 * (v6 + 9 * v7) + 56);
  v29 = v11;
  v12 = a5;
  if ( v11 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                         v11,
                         &v29);
      v31 = v20;
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, &v30) >= 0 )
        break;
      v23 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, LPVOID *))(*(_QWORD *)v20 + 24LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      if ( v23(v31, a2, (unsigned int)v7, (unsigned int)v6, v12, &pv) < 0 )
        goto LABEL_24;
      v22 = pv;
      if ( pv
        && !ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
              &v33,
              pv) )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v28,
          v22);
        v24 = v28;
        if ( v28 )
          goto LABEL_33;
        goto LABEL_4;
      }
LABEL_25:
      if ( v22 )
        CoTaskMemFree(v22);
      if ( !v29 )
        goto LABEL_4;
    }
    v21 = ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::NewNode(
            &v33,
            v30,
            *((_QWORD *)&v33 + 1));
    v11 = *((_QWORD *)&v33 + 1);
    if ( *((_QWORD *)&v33 + 1) )
      **((_QWORD **)&v33 + 1) = v21;
    else
      *(_QWORD *)&v33 = v21;
    *((_QWORD *)&v33 + 1) = v21;
LABEL_24:
    v22 = pv;
    goto LABEL_25;
  }
LABEL_4:
  v13 = *(_QWORD **)(a1 + 920);
  if ( !v13 )
    goto LABEL_10;
  while ( 1 )
  {
    v14 = (__int64 *)v13[2];
    v13 = (_QWORD *)*v13;
    pv = 0LL;
    v15 = *v14;
    pv = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _BYTE *, LPVOID *))(v15 + 24))(
            v14,
            a2,
            (unsigned int)v7,
            (unsigned int)v6,
            v12,
            &pv);
    v17 = pv;
    if ( v16 >= 0
      && pv
      && !ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
            &v33,
            pv) )
    {
      break;
    }
    if ( v17 )
      CoTaskMemFree(v17);
    if ( !v13 )
      goto LABEL_10;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v28,
    v17);
  v24 = v28;
  if ( v28 )
  {
LABEL_33:
    DeviceFromDeviceId = DynamicAudioEndpointManager::GetDeviceFromDeviceId(v24, a6);
    CoTaskMemFree(v24);
    ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v33);
    if ( v10 )
      LeaveCriticalSection(v10);
    return DeviceFromDeviceId;
  }
  else
  {
LABEL_10:
    DefaultEndpoint = CDefaultDeviceManager::GetDefaultEndpoint(v11, v7, v6, (unsigned int)&v33, (__int64)a6);
    if ( DefaultEndpoint >= 0 && v12 )
      *v12 = 0;
    if ( v34 )
    {
      do
      {
        v26 = (ATL::CAtlPlex *)v33;
        if ( !(_QWORD)v33 )
          ATL::AtlThrowImpl(-2147467259);
        *(_QWORD *)&v33 = *(_QWORD *)v33;
        ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)v26 + 2) - 24LL));
        *(ATL::CAtlPlex **)v26 = v35[1];
        v35[1] = v26;
        v27 = --v34;
        if ( !v34 )
        {
          ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v33);
          v27 = v34;
        }
      }
      while ( v27 );
    }
    v33 = 0LL;
    v35[1] = 0LL;
    if ( v35[0] )
    {
      ATL::CAtlPlex::FreeDataChain((ATL::CAtlPlex **)v35[0]);
      v35[0] = 0LL;
    }
    if ( v10 )
      LeaveCriticalSection(v10);
    return (unsigned int)DefaultEndpoint;
  }
}
