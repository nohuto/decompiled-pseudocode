/*
 * XREFs of ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804091D4
 * Callers:
 *     ?StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1804083A0 (-StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803F49FC (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x1803F7810 (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 *     ??$emplace_back@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@QEAA?A_TAEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1803F799C (--$emplace_back@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$OwnedHW.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18040AB90 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_Uhash_.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall GamingOverlayExperienceManager::WndProc(
        GamingOverlayExperienceManager *this,
        HWND a2,
        UINT a3,
        HWND a4,
        LPARAM lParam)
{
  DWORD idThread; // r14d
  __int64 v11; // rdi
  DWORD *v12; // rbx
  const char *v13; // r9
  const char *v14; // r9
  bool v15; // r8
  __int128 v16; // rax
  void *v17; // rbx
  const char *idProcess; // [rsp+20h] [rbp-F8h]
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-D8h] BYREF
  HWINEVENTHOOK v20; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-B8h]
  __int128 v23; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-A0h]
  bool v25; // [rsp+80h] [rbp-98h]
  __int64 v26[2]; // [rsp+88h] [rbp-90h] BYREF
  struct tagRECT Rect; // [rsp+98h] [rbp-80h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+A8h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  *(_QWORD *)dwProcessId = a4;
  if ( a3 == 1025 )
  {
    dwProcessId[0] = 0;
    idThread = GetWindowThreadProcessId(a4, dwProcessId);
    if ( idThread )
    {
      v21 = 0LL;
      v11 = 0LL;
      v22 = 0LL;
      v12 = (DWORD *)&unk_18088A4D0;
      try
      {
        while ( v12 != (DWORD *)&unk_18088A4E8 )
        {
          v20 = SetWinEventHook(
                  *v12,
                  *v12,
                  0LL,
                  (WINEVENTPROC)GamingOverlayExperienceManager::StaticWinEventProc,
                  dwProcessId[0],
                  idThread,
                  0);
          if ( v20 )
          {
            v26[0] = (__int64)this;
            std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::emplace_back<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
              (__int64 *)&v21,
              (__int64 *)&v20,
              v26);
            v11 = v22;
          }
          else
          {
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x35A,
              (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              v13);
          }
          ++v12;
        }
        memset(&wndpl, 0, sizeof(wndpl));
        wndpl.length = 44;
        GetWindowPlacement(a2, &wndpl);
        Rect = 0LL;
        if ( !GetWindowRect(a2, &Rect) )
          wil::details::in1diag3::_Throw_GetLastError(
            retaddr,
            (void *)0x366,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            v14);
        v15 = wndpl.rcNormalPosition.left == Rect.left
           && wndpl.rcNormalPosition.top == Rect.top
           && wndpl.rcNormalPosition.right == Rect.right
           && wndpl.rcNormalPosition.bottom == Rect.bottom;
        v22 = 0LL;
        v16 = v21;
        v21 = 0uLL;
        v23 = v16;
        v24 = v11;
        v25 = v15;
        v20 = (HWINEVENTHOOK)a4;
        std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::emplace<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext>(
          (float *)this + 132,
          (__int64)v26,
          (unsigned __int8 *)&v20,
          (__int64 *)&v23);
        v17 = (void *)v23;
        if ( (_QWORD)v23 )
        {
          std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
            v23,
            *((__int64 *)&v23 + 1));
          std::_Deallocate<16,0>(v17, (v24 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtExceptionMsg(
          retaddr,
          (unsigned __int16 *)0x36E,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          "Exception in WM_HOOKWINEVENT handler",
          idProcess);
        return 0LL;
      }
      return 0LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34E,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80070057LL);
    return DefWindowProcW(a2, a3, (WPARAM)a4, lParam);
  }
  if ( a3 != 1026 )
    return DefWindowProcW(a2, a3, (WPARAM)a4, lParam);
  std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::erase(
    (char *)this + 528,
    dwProcessId);
  return 0LL;
}
