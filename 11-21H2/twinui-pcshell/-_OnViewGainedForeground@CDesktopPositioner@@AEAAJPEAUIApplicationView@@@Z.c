/*
 * XREFs of ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800994B0
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800998E0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180036F74 (--$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRT.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180098E54 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x180099674 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopP.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180109160 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_OnViewGainedForeground(CDesktopPositioner *this, struct IApplicationView *a2)
{
  char v4; // si
  int IsViewManaged; // eax
  struct IApplicationView *v6; // rdx
  unsigned int v7; // ebx
  char v8; // r12
  char v9; // r13
  unsigned __int64 v10; // r10
  char v11; // bl
  char v12; // bl
  int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  void (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+A8h] [rbp+48h] BYREF
  __int64 WindowForView; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+58h] BYREF

  v19 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  v4 = 0;
  LODWORD(WindowForView) = 0;
  IsViewManaged = CDesktopPositioner::_IsViewManaged(this, a2, (bool *)&WindowForView);
  v7 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !(_BYTE)WindowForView )
      return 0LL;
    v8 = 0;
    v9 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
                      v6);
    if ( (!WindowForView
       || (std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Find_lower_bound<HWND__ *>(
             (char *)this + 328,
             &v16,
             &WindowForView),
           *(_BYTE *)(v17 + 25))
       || v10 < *(_QWORD *)(v17 + 32)
       || v17 == *((_QWORD *)this + 41)
       || (v11 = *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                         (char *)this + 328,
                                         &v15,
                                         &WindowForView)
                          + 40LL),
           v8 = *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                        (char *)this + 328,
                                        &v15,
                                        &WindowForView)
                         + 41LL),
           v9 = *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                        (char *)this + 328,
                                        &v15,
                                        &WindowForView)
                         + 42LL),
           !v11))
      && (v4 = 1, *wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(&v21, &v19)) )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( (v4 & 1) == 0 )
      {
LABEL_11:
        v13 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7DE,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v13,
            v15);
        else
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  (char *)this + 328,
                                  &v15,
                                  &WindowForView)
                   + 40LL) = 1;
        if ( v8 )
        {
          DwmpEndTransitionRequest(93LL);
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  (char *)this + 328,
                                  &v15,
                                  &WindowForView)
                   + 41LL) = 0;
        }
        if ( v9 )
        {
          v16 = AnimationClock_TabSwitch;
          LOBYTE(v17) = 1;
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  (char *)this + 328,
                                  &v15,
                                  &WindowForView)
                   + 42LL) = 0;
          v15 = AnimationClock_TabSwitch;
          DwmpEndAnimationClock(&v15);
        }
        return 0LL;
      }
    }
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v21);
    if ( v12 )
      DwmpTransitionWindow(WindowForView, 93LL);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C4,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)IsViewManaged);
  return v7;
}
