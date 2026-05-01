/*
 * XREFs of _lambda_4d6a380c2bab4ae2f41af78280fc3735_::operator() @ 0x1801D78FC
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::InternalResumeRT @ 0x1801D9D20 (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc_ea_1801D9D20.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180046C78 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180108390 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895@@@details@wil@@QEAA_NXZ @ 0x1801E7E18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWith.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@AEBV01@@Z @ 0x1805D8274 (--0LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@AEBV01@@Z.c)
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1805D84F0 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_4d6a380c2bab4ae2f41af78280fc3735_::operator()(_BYTE *a1, __int64 a2)
{
  HWND v4; // r14
  LSTATUS ValueW; // eax
  bool v6; // sf
  const WCHAR *v7; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, void **); // rdi
  int v10; // eax
  const WCHAR *lpFile; // rcx
  const WCHAR *v12; // rax
  DWORD pcbData[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *ppv; // [rsp+48h] [rbp-B8h] BYREF
  void *v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v17[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  __int64 v20; // [rsp+110h] [rbp+10h]
  _BYTE v21[48]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD *v22; // [rsp+150h] [rbp+50h]
  _WORD pvData[264]; // [rsp+260h] [rbp+160h] BYREF

  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::LauncherTipContextMenuExecuteCommand(
    (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v21,
    (const struct LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)(a1 + 8));
  if ( *v22 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v17,
      (struct wil::details::IFailureCallback *)v21,
      (const struct wil::details::StoredCallContextInfo *)(v22 + 10));
  }
  else
  {
    memset(v17, 0, sizeof(v17));
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
  }
  v4 = (HWND)SHCreateWorkerWindowW(DefWindowProcW, -3LL, 0LL);
  v15[0] = 0LL;
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.hwnd = v4;
  pExecInfo.fMask = 256;
  if ( *(_QWORD *)a1 && (*(int (__fastcall **)(_QWORD, void **))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, &ppv) >= 0 )
  {
    pExecInfo.hIcon = ppv;
    pExecInfo.fMask |= 0x200000u;
  }
  if ( (*(_DWORD *)(a2 + 104) & 0x100) != 0 )
  {
    pcbData[0] = 520;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"SOFTWARE\\Microsoft\\PowerShell\\3",
               L"ConsoleHostShortcutTarget",
               2u,
               0LL,
               pvData,
               pcbData);
    v6 = ValueW < 0;
    if ( ValueW )
    {
      pvData[0] = 0;
      if ( ValueW > 0 )
        v6 = 1;
    }
    if ( !v6 )
    {
      v7 = pvData;
LABEL_25:
      pExecInfo.lpFile = v7;
      goto LABEL_26;
    }
  }
  if ( (*(_DWORD *)(a2 + 104) & 0x800) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 104) & 4) != 0 )
      v7 = *(const WCHAR **)(a2 + 56);
    else
      v7 = *(const WCHAR **)(a2 + 32);
    goto LABEL_25;
  }
  pExecInfo.lpFile = L"wt.exe";
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::GetImpl'::`2'::impl) )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    if ( SHGetKnownFolderItem(
           &FOLDERID_LocalAppData,
           KF_FLAG_DEFAULT,
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           &ppv) >= 0 )
    {
      *(_QWORD *)pcbData = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)pcbData);
      if ( SHCreateItemFromRelativeName(
             (IShellItem *)ppv,
             L"Microsoft\\WindowsApps\\wt.exe",
             0LL,
             &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
             (void **)pcbData) >= 0 )
      {
        v8 = *(_QWORD *)pcbData;
        v9 = *(__int64 (__fastcall **)(__int64, __int64, void **))(**(_QWORD **)pcbData + 40LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          v15,
          0LL);
        v10 = v9(v8, 2147844096LL, v15);
        lpFile = pExecInfo.lpFile;
        if ( v10 >= 0 )
          lpFile = (const WCHAR *)v15[0];
        pExecInfo.lpFile = lpFile;
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)pcbData);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  }
LABEL_26:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_38521895>::GetImpl'::`2'::impl)
    || (v12 = L"runas", !a1[328]) )
  {
    v12 = *(const WCHAR **)(a2 + 80);
  }
  pExecInfo.lpVerb = v12;
  pExecInfo.nShow = 10;
  ShellExecuteExW(&pExecInfo);
  if ( v4 )
    DestroyWindow(v4);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v21,
    0);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(v15);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v21);
}
