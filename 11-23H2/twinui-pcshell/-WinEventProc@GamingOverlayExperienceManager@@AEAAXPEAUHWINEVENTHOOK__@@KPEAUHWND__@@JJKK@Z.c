/*
 * XREFs of ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180408F94
 * Callers:
 *     ?StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180408360 (-StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1802D2DC4 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x1802D3140 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@I.c)
 *     ??$InvokeAll@PEAVGamingOverlayExperienceManager@@_K@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGamingOverlayExperienceManager@@_K@Z @ 0x1803F3EB8 (--$InvokeAll@PEAVGamingOverlayExperienceManager@@_K@-$EventSource@U-$ITypedEventHandler@PEAUIGam.c)
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1804087C0 (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall GamingOverlayExperienceManager::WinEventProc(
        GamingOverlayExperienceManager *this,
        HWINEVENTHOOK a2,
        int a3,
        struct _RTL_CRITICAL_SECTION *a4)
{
  const char *v6; // r9
  const char *v7; // r9
  char v8; // bl
  char v9; // si
  __int64 appended; // rax
  char v11; // al
  int v12; // eax
  int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+30h] [rbp-68h]
  struct tagRECT Rect; // [rsp+38h] [rbp-60h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a3 != 32779 )
    goto LABEL_17;
  memset(&wndpl, 0, sizeof(wndpl));
  wndpl.length = 44;
  if ( !GetWindowPlacement((HWND)a4, &wndpl) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x319,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      v6);
  Rect = 0LL;
  if ( !GetWindowRect((HWND)a4, &Rect) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x31C,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      v7);
  if ( wndpl.rcNormalPosition.left == Rect.left
    && wndpl.rcNormalPosition.top == Rect.top
    && wndpl.rcNormalPosition.right == Rect.right
    && wndpl.rcNormalPosition.bottom == Rect.bottom )
  {
    v8 = 1;
    v9 = 1;
  }
  else
  {
    v9 = 0;
    v8 = 1;
  }
  lpCriticalSection = a4;
  appended = std::_Fnv1a_append_bytes((__int64)retaddr, (const unsigned __int8 *const)&lpCriticalSection, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
    (_QWORD *)this + 66,
    &v15,
    &lpCriticalSection,
    appended);
  if ( !v16 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    return;
  }
  v11 = *(_BYTE *)(v16 + 48);
  *(_BYTE *)(v16 + 48) = v9;
  if ( v9 && v9 == v11 )
    v8 = 0;
  if ( v8 )
  {
LABEL_17:
    v12 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<GamingOverlayExperienceManager *,unsigned __int64>(
            (__int64)this + 496,
            (__int64)this,
            (__int64)a4);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x332,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 592));
    if ( !Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)this + 62) )
    {
      if ( *((_QWORD *)this + 65) )
      {
        v13 = GamingOverlayExperienceManager::StopWorkerWindowMessageThread(this, 0);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x33C,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
      }
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
