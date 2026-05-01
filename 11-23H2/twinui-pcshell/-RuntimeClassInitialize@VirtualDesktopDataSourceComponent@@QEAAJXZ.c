/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x18013DCD0
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18013F3EC (--$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x18013DFDC (--$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18013EE74 (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A219C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopD.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B99AC (-InternalRelease@-$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall VirtualDesktopDataSourceComponent::RuntimeClassInitialize(VirtualDesktopDataSourceComponent *this)
{
  __int64 *v1; // rsi
  int v3; // eax
  int Instance; // ebx
  const struct _GUID *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = (__int64 *)((char *)this + 144);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  *v1 = 0LL;
  v9[0] = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSource,VirtualDesktopDataSource,>(v9);
  Instance = v3;
  if ( v3 < 0 )
  {
    v7 = 120LL;
  }
  else
  {
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>>(
           v9[0],
           &GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc,
           v1);
    Instance = v3;
    if ( v3 >= 0 )
      goto LABEL_3;
    v7 = 121LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
    (const char *)(unsigned int)v3);
LABEL_3:
  Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(v9);
  if ( Instance < 0 )
  {
    v8 = 35LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  Instance = VirtualDesktopController_CreateInstance(v5, (void **)this + 19);
  if ( Instance < 0 )
  {
    v8 = 36LL;
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
               (__int64)&v10,
               2uLL);
  if ( Instance < 0 )
  {
    v8 = 43LL;
    goto LABEL_13;
  }
  return (unsigned int)Instance;
}
