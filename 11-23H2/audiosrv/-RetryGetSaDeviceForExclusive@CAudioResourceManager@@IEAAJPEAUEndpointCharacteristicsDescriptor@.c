/*
 * XREFs of ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DC8B8
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DB668 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DCAB8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     wil::details::lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___::_lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___ @ 0x1800D8610 (wil--details--lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___--_lambda_call__lambda_f0b6.c)
 *     WPP_SF_P @ 0x1800DDD3C (WPP_SF_P.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForExclusive(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct ISaDeviceResourceManager *a3,
        struct SaDeviceParams *a4,
        unsigned int a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7,
        struct CAudioSessionManager *a8,
        struct ISaDeviceProxy **a9)
{
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // ebx
  struct ISaDeviceProxy **v14; // rsi
  struct SaDeviceResourceParams *v15; // r14
  enum _AUDCLNT_SHAREMODE v16; // r15d
  __int64 v17; // r8
  void **p_pv; // [rsp+50h] [rbp-20h] BYREF
  void *v20; // [rsp+58h] [rbp-18h] BYREF
  char v21; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  LPVOID pv; // [rsp+B0h] [rbp+40h] BYREF

  v11 = 0;
  pv = 0LL;
  v12 = *(_QWORD *)a2;
  p_pv = &pv;
  v20 = 0LL;
  v21 = 1;
  v13 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v12 + 40) + 40LL))(*(_QWORD *)(v12 + 40), &v20);
  if ( v21 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      p_pv,
      v20);
  if ( v13 >= 0 )
  {
    p_pv = &pv;
    LOBYTE(v20) = 1;
    v13 = -2147467259;
    v14 = a9;
    v15 = a7;
    v16 = a6;
    do
    {
      if ( v11 >= 6 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8F4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v13);
        wil::details::lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___::_lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___((__int64)&p_pv);
        goto LABEL_18;
      }
      Sleep(10 * ((v11 >> 1) + 1));
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, v17, v11 + 1);
      }
      v13 = CAudioSessionManager::Disconnect(a8, 5, 1);
      if ( v13 >= 0 )
        v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
                g_DeviceGraphManager,
                a2,
                a4,
                a5,
                v16,
                v15,
                0LL,
                0LL,
                v14);
      ++v11;
    }
    while ( v13 < 0 );
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_18:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    return (unsigned int)v13;
  }
}
