/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x1800B0040
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800ADAFC (--$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800B0168 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopC.c)
 *     ??$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopController@@@Z @ 0x1800B02C8 (--$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0FC8 (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CAC0 (-InternalRelease@-$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall VirtualDesktopDataSourceComponent::RuntimeClassInitialize(VirtualDesktopDataSourceComponent *this)
{
  void **v1; // r14
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  void *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  Instance = VirtualDesktopDataSource_CreateInstance(v3, v1);
  if ( Instance < 0 )
  {
    v7 = 35LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  v9[0] = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease(v9);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopController,VirtualDesktopController,>(v9);
  Instance = v5;
  if ( v5 < 0 )
  {
    v8 = 81LL;
  }
  else
  {
    v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>>(
           v9[0],
           &GUID_0e5cbed4_2860_48f0_a7bb_38614ac683ad,
           (char *)this + 152);
    Instance = v5;
    if ( v5 >= 0 )
      goto LABEL_4;
    v8 = 82LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v5);
LABEL_4:
  Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease(v9);
  if ( Instance < 0 )
  {
    v7 = 36LL;
    goto LABEL_13;
  }
  v11 = *v1;
  v12 = 0LL;
  v14 = *((_QWORD *)this + 19);
  v10 = *(_OWORD *)&SID_VirtualDesktopDataSource.Revision;
  v15 = 0LL;
  v13 = *(_OWORD *)&SID_VirtualDesktopController.Revision;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (VirtualDesktopDataSourceComponent *)((char *)this + 40),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v10,
               2u);
  if ( Instance < 0 )
  {
    v7 = 43LL;
    goto LABEL_13;
  }
  return (unsigned int)Instance;
}
