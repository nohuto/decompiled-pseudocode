/*
 * XREFs of ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18003CE4C
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180125580 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180036928 (--$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRT.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180037020 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x180125744 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopP.c)
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180125C90 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_OnViewGainedForeground(__int64 **this, struct IApplicationView *a2)
{
  char v4; // r15
  int IsViewManaged; // eax
  struct IApplicationView *v6; // rdx
  unsigned int v7; // ebx
  char v8; // r14
  char v9; // si
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  char v12; // bl
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 **v15; // rbx
  unsigned __int64 v16; // r9
  char v18; // bl
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  void (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+A8h] [rbp+48h] BYREF
  int v27; // [rsp+B0h] [rbp+50h] BYREF
  HWND WindowForView; // [rsp+B8h] [rbp+58h] BYREF

  v26 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  v4 = 0;
  v27 = 0;
  IsViewManaged = CDesktopPositioner::_IsViewManaged((CDesktopPositioner *)this, a2, (bool *)&v27);
  v7 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !(_BYTE)v27 )
      return 0LL;
    v8 = 0;
    v9 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v6);
    if ( (!WindowForView
       || (std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Find_lower_bound<HWND__ *>(
             this + 47,
             &v23,
             &WindowForView),
           *(_BYTE *)(v24 + 25))
       || v11 < *(_QWORD *)(v24 + 32)
       || (__int64 *)v24 == this[47]
       || (v18 = *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                         this + 47,
                                         (__int64)&v22,
                                         (unsigned __int64 *)&WindowForView,
                                         v10)
                          + 40LL),
           v8 = *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                        this + 47,
                                        (__int64)&v22,
                                        (unsigned __int64 *)&WindowForView,
                                        v19)
                         + 41LL),
           v9 = *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                        this + 47,
                                        (__int64)&v22,
                                        (unsigned __int64 *)&WindowForView,
                                        v20)
                         + 42LL),
           !v18))
      && (v4 = 1, *wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(&v22, &v26)) )
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
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x962,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v13,
            v22);
          v15 = this + 47;
        }
        else
        {
          v15 = this + 47;
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  this + 47,
                                  (__int64)&v22,
                                  (unsigned __int64 *)&WindowForView,
                                  v14)
                   + 40LL) = 1;
        }
        if ( v8 )
        {
          DwmpEndTransitionRequest(93LL);
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v15,
                                  (__int64)&v22,
                                  (unsigned __int64 *)&WindowForView,
                                  v21)
                   + 41LL) = 0;
        }
        if ( v9 )
        {
          v23 = AnimationClock_TabSwitch;
          LOBYTE(v24) = 1;
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v15,
                                  (__int64)&v22,
                                  (unsigned __int64 *)&WindowForView,
                                  v16)
                   + 42LL) = 0;
          v22 = AnimationClock_TabSwitch;
          DwmpEndAnimationClock(&v22);
        }
        return 0LL;
      }
    }
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v22);
    if ( v12 )
      DwmpTransitionWindow(WindowForView, 93LL);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x948,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)IsViewManaged,
    v22);
  return v7;
}
