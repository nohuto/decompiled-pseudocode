/*
 * XREFs of ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101728
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180100778 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISa.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101924 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIS.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DFDF8 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _lambda_51b537ae7010953ae74a8f2f5f133c3e_::operator() @ 0x1800FE60C (_lambda_51b537ae7010953ae74a8f2f5f133c3e_--operator().c)
 *     WPP_SF_P @ 0x180102834 (WPP_SF_P.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForExclusive(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct ISaDeviceResourceManager *a3,
        struct SaDeviceParams *a4,
        unsigned int a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7,
        struct CAudioSessionManager *a8,
        struct ISaDeviceProxy **a9)
{
  char v10; // di
  int v11; // ebx
  unsigned int v12; // esi
  struct ISaDeviceProxy **v13; // r14
  struct SaDeviceResourceParams *v14; // r15
  enum _AUDCLNT_SHAREMODE v15; // r12d
  void **v17; // [rsp+50h] [rbp-20h] BYREF
  void *v18; // [rsp+58h] [rbp-18h] BYREF
  char v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  void *v21; // [rsp+C0h] [rbp+50h] BYREF
  struct SaDeviceParams *v22; // [rsp+C8h] [rbp+58h]

  v22 = a4;
  v21 = 0LL;
  v17 = &v21;
  v18 = 0LL;
  v10 = 1;
  v19 = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)a2 + 2) + 40LL))(*((_QWORD *)a2 + 2), &v18);
  if ( v19 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v17,
      v18);
  if ( v11 >= 0 )
  {
    v17 = &v21;
    LOBYTE(v18) = 1;
    v11 = -2147467259;
    v12 = 0;
    v13 = a9;
    v14 = a7;
    v15 = a6;
    while ( v12 < 6 )
    {
      Sleep(10 * ((v12 >> 1) + 1));
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids, v12 + 1);
      }
      v11 = CAudioSessionManager::Disconnect((__int64)a8, 5u, 1);
      if ( v11 >= 0 )
        v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
                g_DeviceGraphManager,
                a2,
                v22,
                a5,
                v15,
                v14,
                0LL,
                0LL,
                v13);
      ++v12;
      if ( v11 >= 0 )
      {
        v10 = 0;
        v11 = 0;
        goto LABEL_16;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x888,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_16:
    if ( v10 )
    {
      LOBYTE(v18) = 0;
      lambda_51b537ae7010953ae74a8f2f5f133c3e_::operator()(&v17);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v21);
  return (unsigned int)v11;
}
