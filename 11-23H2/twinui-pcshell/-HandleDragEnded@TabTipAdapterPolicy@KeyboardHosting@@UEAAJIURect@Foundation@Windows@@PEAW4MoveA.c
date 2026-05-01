/*
 * XREFs of ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180532900
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1800986A0 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18014AF7C (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1802DE572 (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ShouldSaveLastFloatingPosition @ 0x1802DE9C4 (ShouldSaveLastFloatingPosition.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@11$$QEAI2@Z @ 0x180530664 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEAU123@II@TouchKeyboardExperienceTe.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180534758 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x180534C18 (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDragEnded(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        _DWORD *a4,
        RTL_SRWLOCK *a5,
        __int64 a6,
        _DWORD *a7)
{
  struct Windows::Foundation::Rect *v9; // rsi
  _DWORD *v10; // r12
  RTL_SRWLOCK *v11; // r14
  HMONITOR CurrentMonitor; // rax
  HMONITOR v13; // rdi
  KeyboardHosting::MonitorInformation *v14; // rcx
  KeyboardHosting::MonitorInformation *v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  __int128 v19; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v20[2]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v21; // [rsp+68h] [rbp-11h]
  __int128 v22; // [rsp+78h] [rbp-1h]
  unsigned int v23; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+47h]
  unsigned int v25; // [rsp+D0h] [rbp+57h] BYREF

  v25 = a2;
  v9 = (struct Windows::Foundation::Rect *)a6;
  *(_OWORD *)a6 = *a3;
  *a4 = 0;
  LODWORD(a5->Ptr) = 0;
  v10 = a7;
  *a7 = 0;
  v11 = (RTL_SRWLOCK *)(a1 + 536);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 536));
  a5 = v11;
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    (_QWORD *)(a1 + 472),
    &a6,
    &v25);
  if ( a6 != *(_QWORD *)(a1 + 480) )
  {
    v20[0] = *(_OWORD *)(a6 + 20);
    v20[1] = *(_OWORD *)(a6 + 36);
    v21 = *(_OWORD *)(a6 + 52);
    v22 = *(_OWORD *)(a6 + 68);
    v23 = *(_DWORD *)(a6 + 84);
    v19 = *(_OWORD *)v9;
    CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v23, &v19);
    v13 = CurrentMonitor;
    v14 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
    if ( *(HMONITOR *)(a1 + 232) != CurrentMonitor )
    {
      *(_QWORD *)v14 = CurrentMonitor;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v14);
    }
    if ( *(_BYTE *)(a1 + 596) )
    {
      v15 = (KeyboardHosting::MonitorInformation *)(a1 + 312);
      if ( *(HMONITOR *)(a1 + 312) != v13 )
      {
        *(_QWORD *)v15 = v13;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v15);
      }
    }
    *v10 = 3;
    if ( ShouldSaveLastFloatingPosition((__int64)v20 + 4) )
    {
      a6 = *(_QWORD *)v9;
      v16 = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
              (KeyboardHosting::TabTipAdapterPolicy *)a1,
              (const struct Windows::Foundation::Point *)&a6,
              a2);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B2,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_17;
      }
      if ( *(_BYTE *)(a1 + 596) )
        KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (const struct Windows::Foundation::Point *)&a6);
    }
    if ( DWORD1(v20[0]) == 2 && WORD6(v21) )
    {
      *(_DWORD *)(a1 + 548) = *(_DWORD *)v9;
      *(_DWORD *)(a1 + 552) = *((_DWORD *)v9 + 1);
      *(_BYTE *)(a1 + 556) = 1;
      *(_DWORD *)(a1 + 592) = a2;
    }
    *(_BYTE *)(a1 + 544) = 1;
  }
  LODWORD(a6) = *v10;
  LODWORD(a5) = *(_DWORD *)(a1 + 272);
  TouchKeyboardExperienceTelemetryLogger::HandleDragEnded<unsigned int &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned int,unsigned int>(
    &v25,
    v9,
    (struct Windows::Foundation::Rect *)(a1 + 176),
    (struct Windows::Foundation::Rect *)(a1 + 240),
    (unsigned int *)&a5,
    (unsigned int *)&a6);
  v17 = 0;
LABEL_17:
  if ( v11 )
    ReleaseSRWLockShared(v11);
  return v17;
}
