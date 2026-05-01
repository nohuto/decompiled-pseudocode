/*
 * XREFs of ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18033B0E4
 * Callers:
 *     ?StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18033A460 (-StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x18018779C (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@Ga_ea_18018779C.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$InvokeAll@PEAVGamingOverlayExperienceManager@@_K@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGamingOverlayExperienceManager@@_K@Z @ 0x180326754 (--$InvokeAll@PEAVGamingOverlayExperienceManager@@_K@-$EventSource@U-$ITypedEventHandler@PEAUIGam.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1803283D0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@.c)
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033A860 (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall GamingOverlayExperienceManager::WinEventProc(
        GamingOverlayExperienceManager *this,
        HWINEVENTHOOK a2,
        int a3,
        HWND a4)
{
  const char *v6; // r9
  const char *v7; // r9
  char v8; // bl
  char v9; // si
  __int64 appended; // rax
  char v11; // al
  int v12; // eax
  int v13; // eax
  unsigned __int8 v14[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+30h] [rbp-68h]
  struct tagRECT Rect; // [rsp+38h] [rbp-60h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a3 != 32779 )
    goto LABEL_17;
  memset(&wndpl, 0, sizeof(wndpl));
  wndpl.length = 44;
  if ( !GetWindowPlacement(a4, &wndpl) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x304,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      v6);
  Rect = 0LL;
  if ( !GetWindowRect(a4, &Rect) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x307,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
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
  *(_QWORD *)v14 = a4;
  appended = std::_Fnv1a_append_bytes((__int64)retaddr, v14, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Find_last<unsigned __int64>(
    (_QWORD *)this + 61,
    &v15,
    v14,
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
            (__int64)this + 456,
            (__int64)this,
            (__int64)a4);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x31D,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 552));
    *(_QWORD *)v14 = (char *)this + 552;
    if ( !Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)this + 57)
      && *((_QWORD *)this + 60) )
    {
      v13 = GamingOverlayExperienceManager::StopWorkerWindowMessageThread(this, 0);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x327,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v14);
  }
}
