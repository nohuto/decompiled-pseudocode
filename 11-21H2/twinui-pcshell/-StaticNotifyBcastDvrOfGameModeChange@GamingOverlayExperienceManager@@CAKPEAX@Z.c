/*
 * XREFs of ?StaticNotifyBcastDvrOfGameModeChange@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x18033A220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@ABI@@UIXamlExplorerHostChildWindowStatics@89Internal@Windows@ABI@@UIXamlExplorerHostComponent@89Internal@Windows@ABI@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18013FB90.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0BCastDVRNotifyGameModeChangeThreadParams@GamingOverlayExperienceManager@@QEAA@AEBU01@@Z @ 0x18032B898 (--0BCastDVRNotifyGameModeChangeThreadParams@GamingOverlayExperienceManager@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::StaticNotifyBcastDvrOfGameModeChange(
        struct GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams *a1)
{
  void *v1; // r11
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 )
  {
    GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams::BCastDVRNotifyGameModeChangeThreadParams(
      (GamingOverlayExperienceManager::BCastDVRNotifyGameModeChangeThreadParams *)v10,
      a1);
    operator delete(v1);
    v2 = v10[0];
    if ( !v10[0] )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F2,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)0x80004003LL);
      goto LABEL_11;
    }
    v13 = 0LL;
    v3 = *(_QWORD *)(v10[0] + 328LL);
    v4 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    v5 = v4(v3, &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217, &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217, &v13);
    v7 = v5;
    if ( v5 >= 0 )
    {
      LOBYTE(v6) = v11;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 88LL))(v13, v10[1], v6);
      v7 = v5;
      if ( v5 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
LABEL_11:
        if ( v2 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release(v2);
        return 0LL;
      }
      v8 = 1530LL;
    }
    else
    {
      v8 = 1528LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release(v2);
    return v7;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x5EB,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)0x80004003LL);
  return 0LL;
}
