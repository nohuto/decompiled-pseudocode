/*
 * XREFs of ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F7000
 * Callers:
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F60CC (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F6550 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x180045580 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___::_lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___ @ 0x1800F5450 (wil--details--lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___--_lambda_call__lambda_2549.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F86A8 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800F9840 (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters(
        CBtAudioResourceManagerBase *this,
        struct ISaDeviceProxy **a2)
{
  int v4; // eax
  int DefaultSecondaryProfileRenderSaDeviceParams; // ebx
  SaDeviceParams *v6; // rax
  unsigned int v7; // edx
  int v8; // eax
  SaDeviceParams *v10; // [rsp+50h] [rbp-9h] BYREF
  unsigned int v11[2]; // [rsp+58h] [rbp-1h] BYREF
  struct SaDeviceParams *v12; // [rsp+60h] [rbp+7h] BYREF
  char v13; // [rsp+68h] [rbp+Fh]
  int v14[4]; // [rsp+70h] [rbp+17h] BYREF
  std::_Ref_count_base *v15; // [rsp+80h] [rbp+27h]
  __int128 v16; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                       + 40LL))(
         g_pEndpointCharacteristicsCache,
         *((_QWORD *)this + 6),
         0LL,
         0LL,
         v14);
  DefaultSecondaryProfileRenderSaDeviceParams = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v4);
LABEL_11:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v14);
    return (unsigned int)DefaultSecondaryProfileRenderSaDeviceParams;
  }
  v10 = 0LL;
  *(_QWORD *)v11 = &v10;
  v12 = 0LL;
  v13 = 1;
  DefaultSecondaryProfileRenderSaDeviceParams = CBtAudioResourceManagerBase::GetDefaultSecondaryProfileRenderSaDeviceParams(
                                                  this,
                                                  (struct EndpointCharacteristicsDescriptor *)v14,
                                                  &v12);
  if ( v13 )
  {
    v6 = **(SaDeviceParams ***)v11;
    **(_QWORD **)v11 = v12;
    if ( v6 )
      SaDeviceParams::`scalar deleting destructor'(v6);
  }
  if ( DefaultSecondaryProfileRenderSaDeviceParams < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)DefaultSecondaryProfileRenderSaDeviceParams);
LABEL_10:
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v10, v7);
    goto LABEL_11;
  }
  CBtAudioResourceManagerBase::NotifyStreamChange(this, 1);
  *(_QWORD *)v11 = this;
  LOBYTE(v12) = 1;
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, int *, SaDeviceParams *, _QWORD, _DWORD, __int128 *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)this + 152LL))(
         this,
         v14,
         v10,
         0LL,
         0,
         &v16,
         0LL,
         0LL,
         a2);
  DefaultSecondaryProfileRenderSaDeviceParams = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v8);
    wil::details::lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___::_lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___((__int64)v11);
    goto LABEL_10;
  }
  if ( v10 )
    SaDeviceParams::`scalar deleting destructor'(v10);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v14);
  return 0LL;
}
