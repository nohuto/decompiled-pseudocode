/*
 * XREFs of ?CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1801140E0
 * Callers:
 *     ?CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1801142C4 (-CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180114628 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x18002B3B8 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___::_lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___ @ 0x1800667FC (wil--details--lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___--_lambda_call__lambda_6b2b.c)
 *     ?NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z @ 0x180066A50 (-NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUSaDeviceParams@@@Z @ 0x180115FD0 (-GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@P.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBtAudioResourceManager::CreateHfpRenderSaDeviceWithDefaultParameters(
        CBtAudioResourceManager *this,
        struct ISaDeviceProxy **a2)
{
  int v4; // eax
  CBtAudioResourceManager *v5; // rcx
  int DefaultHfpRenderSaDeviceParams; // ebx
  SaDeviceParams *v7; // rcx
  unsigned int v8; // edx
  int v9; // eax
  struct CEndpointCharacteristics *v11; // [rsp+50h] [rbp+7h] BYREF
  SaDeviceParams *v12; // [rsp+58h] [rbp+Fh] BYREF
  unsigned int v13[2]; // [rsp+60h] [rbp+17h] BYREF
  struct SaDeviceParams *v14; // [rsp+68h] [rbp+1Fh] BYREF
  char v15; // [rsp+70h] [rbp+27h]
  __int128 v16; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         *((_QWORD *)this + 5),
         0LL,
         0LL,
         &v11);
  DefaultHfpRenderSaDeviceParams = v4;
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    *(_QWORD *)v13 = &v12;
    v14 = 0LL;
    v15 = 1;
    DefaultHfpRenderSaDeviceParams = CBtAudioResourceManager::GetDefaultHfpRenderSaDeviceParams(v5, v11, &v14);
    if ( v15 )
    {
      v7 = **(SaDeviceParams ***)v13;
      **(_QWORD **)v13 = v14;
      if ( v7 )
        SaDeviceParams::`scalar deleting destructor'(v7);
    }
    if ( DefaultHfpRenderSaDeviceParams >= 0 )
    {
      CBtAudioResourceManager::NotifyStreamChange(this, 1);
      *(_QWORD *)v13 = this;
      LOBYTE(v14) = 1;
      v16 = 0LL;
      v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, _QWORD, _DWORD, __int128 *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
             g_DeviceGraphManager,
             v11,
             v12,
             0LL,
             0,
             &v16,
             0LL,
             0LL,
             a2);
      DefaultHfpRenderSaDeviceParams = v9;
      if ( v9 >= 0 )
      {
        LOBYTE(v14) = 0;
        DefaultHfpRenderSaDeviceParams = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x229,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)v9);
      }
      wil::details::lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___::_lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___((__int64)v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)DefaultHfpRenderSaDeviceParams);
    }
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v12, v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  return (unsigned int)DefaultHfpRenderSaDeviceParams;
}
