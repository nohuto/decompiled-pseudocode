/*
 * XREFs of ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE4E4
 * Callers:
 *     ?_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z @ 0x1806DF9E4 (-_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BCDCC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114C48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18015434C (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     swprintf_s @ 0x1801C7694 (swprintf_s.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@XZ @ 0x1802EA024 (--$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA-AV-$ComPtr@V-$CR.c)
 *     ??$LauncherTipContextMenuDefaultConsole@_N@LauncherTipContextMenuTelemetry@@SAX$$QEA_N@Z @ 0x1806C9784 (--$LauncherTipContextMenuDefaultConsole@_N@LauncherTipContextMenuTelemetry@@SAX$$QEA_N@Z.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 *     ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x1806C9AB8 (--$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@-$vector@ULTCMITEM@CLauncherTipCon.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x1806C9D58 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z @ 0x1806C9E78 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z.c)
 *     ??$_InsertAt@AEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@_K@Z @ 0x1806CA0B0 (--$_InsertAt@AEBV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@.c)
 *     ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1806CB808 (--0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC2AC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x1806CDD00 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?ShouldPowershellReplaceCmd@@YA_NXZ @ 0x1806CEA84 (-ShouldPowershellReplaceCmd@@YA_NXZ.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1806CF3C4 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ @ 0x1806DDDE8 (-_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@KV?$allocator@K@std@@@std@@AEAAX_K@Z @ 0x1806DE05C (-_Clear_and_reserve_geometric@-$vector@KV-$allocator@K@std@@@std@@AEAAX_K@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std@@XZ @ 0x1806DFCB8 (-ensure_data@-$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=1
__int64 __fastcall CLauncherTipContextMenu::_EnumerateAndBuildMenu(CLauncherTipContextMenu *this)
{
  _QWORD *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  signed int hwnd; // r14d
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, __int64, __int64 *); // rdi
  IShellItem *v11; // rbx
  HRESULT (__stdcall *GetDisplayName)(IShellItem *, SIGDN, LPWSTR *); // rdi
  unsigned int i; // edi
  char *v14; // r8
  __int64 v15; // rdx
  _BYTE *v16; // rdx
  unsigned int v17; // edi
  int v18; // eax
  _BYTE *v19; // rdx
  PCZZWSTR pFrom; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int *v28; // rdi
  int *v29; // rsi
  int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // r13
  __int64 v33; // rdi
  size_t v34; // rsi
  unsigned __int64 v35; // rdx
  char *v36; // rbx
  unsigned __int64 j; // rdi
  const unsigned __int16 **v38; // rbx
  _DWORD *v39; // rsi
  int v40; // edx
  int v41; // edx
  __int64 v42; // r8
  HMENU PopupMenu; // rax
  UINT_PTR v44; // rdi
  unsigned __int16 *v45; // rbx
  HMENU v46; // rax
  __int64 v47; // r8
  const WCHAR *v48; // rsi
  _QWORD *v49; // r13
  _QWORD *v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned __int16 v54; // [rsp+30h] [rbp-548h] BYREF
  void *v55; // [rsp+38h] [rbp-540h] BYREF
  IShellItem *v56; // [rsp+40h] [rbp-538h] BYREF
  void *Src; // [rsp+48h] [rbp-530h] BYREF
  struct IShellItem *ppv; // [rsp+50h] [rbp-528h] BYREF
  IShellItem *psiParent; // [rsp+58h] [rbp-520h] BYREF
  __int128 v60; // [rsp+60h] [rbp-518h] BYREF
  __int64 v61; // [rsp+70h] [rbp-508h]
  __int128 v62; // [rsp+78h] [rbp-500h] BYREF
  __int64 v63; // [rsp+88h] [rbp-4F0h]
  __int64 v64; // [rsp+90h] [rbp-4E8h] BYREF
  std::_Ref_count_base *v65; // [rsp+98h] [rbp-4E0h]
  __int64 v66; // [rsp+A0h] [rbp-4D8h]
  _DWORD *v67; // [rsp+A8h] [rbp-4D0h] BYREF
  unsigned __int16 *v68; // [rsp+B0h] [rbp-4C8h] BYREF
  std::_Ref_count_base *v69[2]; // [rsp+B8h] [rbp-4C0h] BYREF
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+C8h] [rbp-4B0h] BYREF
  std::_Ref_count_base *v71; // [rsp+100h] [rbp-478h]
  __int64 v72; // [rsp+108h] [rbp-470h] BYREF
  std::_Ref_count_base *v73; // [rsp+110h] [rbp-468h]
  _BYTE v74[528]; // [rsp+120h] [rbp-458h] BYREF
  wchar_t Buffer[264]; // [rsp+330h] [rbp-248h] BYREF

  *(_OWORD *)v69 = 0LL;
  v2 = (_QWORD *)tip::tip_test<_tip_WinXMenuEnumerationTest>::ensure_data(v69);
  tip::details::test_common_data<0>::start(*v2 + 8LL, &v60);
  FileOp.hwnd = (HWND)&tip::test_watcher<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)&FileOp.wFunc,
    (struct wil::details::IFailureCallback *)&FileOp,
    0LL,
    v69[0] != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &FileOp.lpszProgressTitle,
    v69);
  if ( v69[1] )
    std::_Ref_count_base::_Decref(v69[1]);
  v3 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         &v60,
         &FileOp.lpszProgressTitle);
  v6 = *v3;
  *v3 = *((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = v6;
  v7 = v3[1];
  v3[1] = *((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = v7;
  if ( *((_QWORD *)&v60 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v60 + 1));
  if ( v71 )
    std::_Ref_count_base::_Decref(v71);
  if ( *(_DWORD *)&FileOp.fFlags )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&FileOp.wFunc);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  *((_BYTE *)this + 345) = 0;
  if ( (char *)this + 346 <= (char *)this + 349 )
    memset_0((char *)this + 346, 0, (char *)this + 349 >= (char *)this + 346 ? 3 : 0);
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  hwnd = SHGetKnownFolderItem(
           &FOLDERID_LocalAppData,
           KF_FLAG_DEFAULT,
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           (void **)&psiParent);
  if ( hwnd >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    hwnd = SHCreateItemFromRelativeName(
             psiParent,
             L"Microsoft\\Windows\\WinX",
             0LL,
             &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
             (void **)&ppv);
    if ( hwnd == -2147024894 )
    {
      v56 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v56);
      hwnd = SHGetKnownFolderItem(
               &FOLDERID_UserProfiles,
               KF_FLAG_DEFAULT,
               0LL,
               &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
               (void **)&v56);
      if ( hwnd >= 0 )
      {
        v55 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v55);
        hwnd = SHCreateItemFromRelativeName(
                 v56,
                 L"Default\\AppData\\Local\\Microsoft\\Windows\\WinX",
                 0LL,
                 &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                 &v55);
        if ( hwnd >= 0 )
        {
          v64 = 0LL;
          v65 = 0LL;
          v66 = 0LL;
          v9 = v55;
          v10 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v55 + 40LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v64);
          v65 = (std::_Ref_count_base *)-1LL;
          v66 = -1LL;
          hwnd = v10(v9, 2147844096LL, &v64);
          if ( hwnd >= 0 )
          {
            memset_0(v74, 0, 0x208uLL);
            if ( (unsigned int)_o_wcscpy_s(v74, 260LL, v64) )
            {
              hwnd = -2147467259;
            }
            else
            {
              v60 = 0uLL;
              v61 = 0LL;
              v11 = psiParent;
              GetDisplayName = psiParent->lpVtbl->GetDisplayName;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v60);
              *((_QWORD *)&v60 + 1) = -1LL;
              v61 = -1LL;
              hwnd = ((__int64 (__fastcall *)(IShellItem *, __int64, __int128 *))GetDisplayName)(
                       v11,
                       2147844096LL,
                       &v60);
              if ( hwnd >= 0 )
              {
                memset_0(Buffer, 0, 0x208uLL);
                if ( swprintf_s(Buffer, 0x104uLL, L"%s\\%s", (_QWORD)v60, L"Microsoft\\Windows\\WinX") <= 0
                  || (*(_OWORD *)&FileOp.hwnd = 0LL,
                      memset(&FileOp.fFlags, 0, 24),
                      FileOp.wFunc = 2,
                      FileOp.pFrom = (PCZZWSTR)v74,
                      FileOp.pTo = Buffer,
                      FileOp.fFlags = 2564,
                      SHFileOperationW(&FileOp)) )
                {
                  hwnd = -2147467259;
                }
                else
                {
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
                  hwnd = SHCreateItemFromRelativeName(
                           psiParent,
                           L"Microsoft\\Windows\\WinX",
                           0LL,
                           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                           (void **)&ppv);
                }
              }
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v60);
            }
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v64);
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v55);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v56);
    }
    *((_QWORD *)this + 46) = *((_QWORD *)this + 45);
    for ( i = 0; i < 0x11; ++i )
    {
      v14 = (char *)&CLauncherTipContextMenu::c_rgItemMap + 12 * i;
      v15 = *((_QWORD *)this + 46);
      if ( v15 == *((_QWORD *)this + 47) )
      {
        std::vector<CLauncherTipContextMenu::LTCMITEM>::_Emplace_reallocate<CLauncherTipContextMenu::LTCMITEM const &>(
          (const void **)this + 45,
          (_BYTE *)v15,
          (__int64)v14);
      }
      else
      {
        *(_QWORD *)v15 = *(_QWORD *)v14;
        *(_DWORD *)(v15 + 8) = *((_DWORD *)v14 + 2);
        *((_QWORD *)this + 46) += 12LL;
      }
    }
    v16 = (_BYTE *)*((_QWORD *)this + 48);
    *((_QWORD *)this + 49) = v16;
    LODWORD(v56) = 0;
    if ( v16 == *((_BYTE **)this + 50) )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((const void **)this + 48, v16, &v56);
    }
    else
    {
      *(_DWORD *)v16 = 0;
      *((_QWORD *)this + 49) += 4LL;
    }
    v17 = 0;
    if ( hwnd >= 0 )
    {
      CShallowContainerIterator::CShallowContainerIterator((CShallowContainerIterator *)&FileOp, ppv, 32);
      hwnd = (signed int)FileOp.hwnd;
      if ( SLODWORD(FileOp.hwnd) >= 0 )
      {
        Src = 0LL;
        while ( hwnd >= 0 )
        {
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Src);
          if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)&FileOp, (struct IShellItem2 **)&Src) )
            break;
          if ( *((_QWORD *)this + 23) )
          {
            CLauncherTipContextMenu::_AddSeparator(this);
            v18 = *((_DWORD *)this + 46);
            LODWORD(v55) = v18;
            v19 = (_BYTE *)*((_QWORD *)this + 49);
            if ( v19 == *((_BYTE **)this + 50) )
            {
              std::vector<unsigned int>::_Emplace_reallocate<unsigned int>((const void **)this + 48, v19, &v55);
            }
            else
            {
              *(_DWORD *)v19 = v18;
              *((_QWORD *)this + 49) += 4LL;
            }
            ++v17;
          }
          hwnd = CLauncherTipContextMenu::_AddFolderLinksToCommands(this, (struct IShellItem *)Src, 0, v17);
          if ( hwnd >= 0 )
            hwnd = *((_BYTE *)this + 322) != 0 ? 0x80004004 : 0;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Src);
      }
      pFrom = FileOp.pFrom;
      FileOp.pFrom = 0LL;
      if ( pFrom )
        (*(void (__fastcall **)(PCZZWSTR))(*(_QWORD *)pFrom + 16LL))(pFrom);
      SafeRelease<IShellItem>((__int64 *)&FileOp.wFunc);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    if ( hwnd >= 0 )
      CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile(this);
  }
  v21 = *((_QWORD *)this + 45);
  v22 = *((_QWORD *)this + 46);
  v23 = (_QWORD *)tip::tip_test<_tip_WinXMenuEnumerationTest>::ensure_data((char *)this + 408);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v72,
    v23);
  v24 = v72;
  tip::details::test_common_data<0>::begin_update(v72 + 8);
  v27 = v24 + 185;
  if ( !v24 )
    v27 = 9LL;
  *(_BYTE *)v27 = v21 == v22;
  if ( v24 )
  {
    tip::details::test_common_data<0>::end_update(v24 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v72);
  }
  if ( v73 )
    std::_Ref_count_base::_Decref(v73);
  v28 = (int *)*((_QWORD *)this + 45);
  v29 = (int *)*((_QWORD *)this + 46);
  if ( v28 != v29 )
  {
    v62 = 0LL;
    v63 = 0LL;
    while ( v28 != v29 )
    {
      v30 = *v28;
      LODWORD(v55) = *v28;
      if ( *((_QWORD *)&v62 + 1) == v63 )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long>((const void **)&v62, *((_BYTE **)&v62 + 1), &v55);
      }
      else
      {
        **((_DWORD **)&v62 + 1) = v30;
        *((_QWORD *)&v62 + 1) += 4LL;
      }
      v28 += 3;
    }
    v31 = (_QWORD *)tip::tip_test<_tip_WinXMenuEnumerationTest>::ensure_data((char *)this + 408);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v64,
      v31);
    v32 = v64;
    tip::details::test_common_data<0>::begin_update(v64 + 8);
    v33 = v32 + 192;
    if ( !v32 )
      v33 = 16LL;
    if ( (__int128 *)v33 != &v62 )
    {
      Src = (void *)v62;
      v34 = *((_QWORD *)&v62 + 1) - v62;
      v35 = (__int64)(*((_QWORD *)&v62 + 1) - v62) >> 2;
      if ( v35 > (__int64)(*(_QWORD *)(v33 + 16) - *(_QWORD *)v33) >> 2 )
        std::vector<unsigned long>::_Clear_and_reserve_geometric((void **)v33, v35);
      v36 = *(char **)v33;
      memmove_0(*(void **)v33, Src, v34);
      *(_QWORD *)(v33 + 8) = &v36[v34];
    }
    if ( v32 )
    {
      tip::details::test_common_data<0>::end_update(v32 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v64);
    }
    if ( v65 )
      std::_Ref_count_base::_Decref(v65);
    if ( (_QWORD)v62 )
      std::_Deallocate<16,0>((void *)v62, (v63 - v62) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    1u,
    v25,
    v26);
  *((_QWORD *)this + 46) = *((_QWORD *)this + 45);
  *((_QWORD *)this + 49) = *((_QWORD *)this + 48);
  for ( j = 0LL; j < *((_QWORD *)this + 23); ++j )
  {
    Src = *(void **)(*((_QWORD *)this + 22) + 8 * j);
    v38 = (const unsigned __int16 **)Src;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Src);
    if ( ((_DWORD)v38[14] & 0x100) != 0 )
    {
      CreateRefCountedObj<CLauncherTipContextMenu::LauncherTipMenuCommand,>((__int64 *)&v67);
      v39 = v67;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        (__int64)(v67 + 22),
        v38[11],
        0xFFFFFFFFFFFFFFFFuLL);
      v40 = *((_DWORD *)v38 + 28);
      v39[28] = 2562;
      v41 = v40 & 1;
      v39[28] = v41 | 0xA02;
      if ( Windows::Internal::ResourceString::FindAndSize(
             &_ImageBase,
             v41 + 10960,
             v42,
             (const unsigned __int16 **)&v68,
             &v54) )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)(v39 + 4),
          v68,
          v54);
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_InsertAt<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
        (_QWORD *)this + 22,
        (__int64 *)&v67,
        j++);
      v67 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 16LL))(v39);
    }
    (*((void (__fastcall **)(const unsigned __int16 **))*v38 + 2))(v38);
  }
  if ( hwnd >= 0 )
  {
    PopupMenu = CreatePopupMenu();
    *((_QWORD *)this + 41) = PopupMenu;
    if ( PopupMenu )
    {
      hwnd = 0;
    }
    else
    {
      hwnd = ResultFromKnownLastError();
      if ( hwnd < 0 )
        goto LABEL_105;
    }
    v44 = *((_QWORD *)this + 23);
    if ( v44 )
    {
      while ( v44 )
      {
        v68 = *(unsigned __int16 **)(*((_QWORD *)this + 22) + 8 * v44 - 8);
        v45 = v68;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v68);
        AppendMenuW(*((HMENU *)this + 41), *((_BYTE *)v45 + 8) != 0 ? 0x800 : 0, v44, *((LPCWSTR *)v45 + 2));
        if ( v44 == 2 )
        {
          v46 = CreatePopupMenu();
          *((_QWORD *)this + 42) = v46;
          hwnd = v46 ? 0 : ResultFromKnownLastError();
          if ( hwnd >= 0 )
          {
            v48 = 0LL;
            v62 = 0uLL;
            v63 = 0LL;
            hwnd = -2147467259;
            if ( Windows::Internal::ResourceString::FindAndSize(
                   &_ImageBase,
                   0x2AB2u,
                   v47,
                   (const unsigned __int16 **)v69,
                   (unsigned __int16 *)&v56) )
            {
              hwnd = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                       (__int64)&v62,
                       (const unsigned __int16 *)v69[0],
                       (unsigned __int16)v56);
              v48 = (const WCHAR *)v62;
            }
            if ( hwnd >= 0 )
              AppendMenuW(*((HMENU *)this + 41), 0x10u, *((unsigned int *)this + 84), v48);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v62);
          }
        }
        (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v45 + 16LL))(v45);
        --v44;
      }
      if ( ShouldPowershellReplaceCmd() )
      {
        LOBYTE(v54) = *((_BYTE *)this + 345) == 0;
        LauncherTipContextMenuTelemetry::LauncherTipContextMenuDefaultConsole<bool>((unsigned __int8 *)&v54);
      }
    }
  }
LABEL_105:
  v49 = (_QWORD *)((char *)this + 408);
  v50 = (_QWORD *)tip::tip_test<_tip_WinXMenuEnumerationTest>::ensure_data((char *)this + 408);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v60,
    v50);
  v51 = v60;
  tip::details::test_common_data<0>::begin_update(v60 + 8);
  v52 = v51 + 216;
  if ( !v51 )
    v52 = 40LL;
  *(_DWORD *)v52 = hwnd;
  if ( v51 )
  {
    tip::details::test_common_data<0>::end_update(v51 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v60);
  }
  if ( *((_QWORD *)&v60 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v60 + 1));
  if ( *v49 )
    tip::details::test_common_data<0>::complete(*v49 + 8LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  return (unsigned int)hwnd;
}
