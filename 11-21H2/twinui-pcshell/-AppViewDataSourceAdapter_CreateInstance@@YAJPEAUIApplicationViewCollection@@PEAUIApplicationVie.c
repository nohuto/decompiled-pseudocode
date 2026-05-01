/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180453CCC
 * Callers:
 *     _lambda_0361bfdb57f0c2eeee46865918d0f50e_::operator() @ 0x18041FFB0 (_lambda_0361bfdb57f0c2eeee46865918d0f50e_--operator().c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180602D80 (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18002EC40 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800506DC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourc.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x1801ADED4 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@$$QEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180453040 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4DesktopSwitcherDataSourceScopeOptions@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter_CreateInstance(
        struct IApplicationViewCollection *a1,
        struct IApplicationViewIconLoader *a2,
        struct IImmersiveShellHookService *a3,
        struct IInspectable *a4,
        struct IAppViewDataSourceAdapter **a5)
{
  struct IAppViewDataSourceAdapter **v5; // rbx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v11; // [rsp+38h] [rbp-20h] BYREF
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v12; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IApplicationViewCollection *v14; // [rsp+60h] [rbp+8h] BYREF
  struct IApplicationViewIconLoader *v15; // [rsp+68h] [rbp+10h] BYREF
  struct IImmersiveShellHookService *v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // [rsp+78h] [rbp+20h] BYREF

  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  v5 = a5;
  *a5 = 0LL;
  try
  {
    wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(&v11, &v17);
    v12 = v11;
    LODWORD(a5) = 1;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *>(
      &v10,
      (int *)&a5,
      &v14,
      &v15,
      &v16,
      &v12);
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>>(
           v10,
           (__int64)&GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1,
           v5);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F0,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v6,
        v9);
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(&v10);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x1F3,
                    (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                    v7);
    return (unsigned int)a5;
  }
  return result;
}
