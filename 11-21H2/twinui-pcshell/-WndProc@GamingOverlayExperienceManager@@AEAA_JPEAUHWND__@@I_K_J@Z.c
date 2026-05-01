/*
 * XREFs of ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x18033B324
 * Callers:
 *     ?StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18033A4A0 (-StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x180327624 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAAEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x180327710 (--$_Emplace_back_with_unused_capacity@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager.c)
 *     ??$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@QEAAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU2@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18032779C (--$_Emplace_reallocate@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$.c)
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x18032A100 (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18033CE98 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_Uhash_.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall GamingOverlayExperienceManager::WndProc(
        GamingOverlayExperienceManager *this,
        HWND a2,
        UINT a3,
        HWND a4,
        LPARAM lParam)
{
  DWORD idThread; // esi
  __int64 v11; // rbx
  DWORD *v12; // rdi
  const char *v13; // r9
  const char *v14; // r9
  bool v15; // dl
  void *v16; // rbx
  const char *idProcess; // [rsp+20h] [rbp-F8h]
  HWINEVENTHOOK v18; // [rsp+40h] [rbp-D8h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-B8h]
  __int64 v22[2]; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+88h] [rbp-90h]
  bool v25; // [rsp+90h] [rbp-88h]
  struct tagRECT Rect; // [rsp+98h] [rbp-80h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+A8h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v18 = (HWINEVENTHOOK)a4;
  if ( a3 == 1025 )
  {
    dwProcessId = 0;
    idThread = GetWindowThreadProcessId(a4, &dwProcessId);
    if ( idThread )
    {
      v20 = 0LL;
      v11 = 0LL;
      v21 = 0LL;
      v12 = (DWORD *)&unk_1806D8440;
      try
      {
        while ( v12 != (DWORD *)&unk_1806D8458 )
        {
          v18 = SetWinEventHook(
                  *v12,
                  *v12,
                  0LL,
                  (WINEVENTPROC)GamingOverlayExperienceManager::StaticWinEventProc,
                  dwProcessId,
                  idThread,
                  0);
          if ( v18 )
          {
            v22[0] = (__int64)this;
            if ( *((_QWORD *)&v20 + 1) == v11 )
              std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::_Emplace_reallocate<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
                (__int64 *)&v20,
                *((__int64 *)&v20 + 1),
                (__int64 *)&v18,
                v22);
            else
              std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::_Emplace_back_with_unused_capacity<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
                (__int64)&v20,
                (__int64 *)&v18,
                v22);
            v11 = v21;
          }
          else
          {
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x345,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
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
            (void *)0x351,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            v14);
        v15 = wndpl.rcNormalPosition.left == Rect.left
           && wndpl.rcNormalPosition.top == Rect.top
           && wndpl.rcNormalPosition.right == Rect.right
           && wndpl.rcNormalPosition.bottom == Rect.bottom;
        v23 = v20;
        v24 = v11;
        v20 = 0LL;
        v21 = 0LL;
        v25 = v15;
        v18 = (HWINEVENTHOOK)a4;
        std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::emplace<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext>(
          (float *)this + 122,
          (__int64)v22,
          (unsigned __int8 *)&v18,
          (__int64)&v23);
        v16 = (void *)v23;
        if ( (_QWORD)v23 )
        {
          std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
            v23,
            *((__int64 *)&v23 + 1));
          std::_Deallocate<16,0>(v16, (v24 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtExceptionMsg(
          retaddr,
          (unsigned __int16 *)0x359,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          "Exception in WM_HOOKWINEVENT handler",
          idProcess);
        return 0LL;
      }
      return 0LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x339,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80070057LL);
    return DefWindowProcW(a2, a3, (WPARAM)a4, lParam);
  }
  if ( a3 != 1026 )
    return DefWindowProcW(a2, a3, (WPARAM)a4, lParam);
  std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::erase(
    (char *)this + 488,
    &v18);
  return 0LL;
}
