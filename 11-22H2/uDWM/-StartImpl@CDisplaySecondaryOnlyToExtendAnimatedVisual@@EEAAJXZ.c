/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180047CA4 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18005B788 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7524 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct tagPOINT **v7; // r14
  int PrimaryDisplay; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  CDWMDisplay *v11; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  struct tagPOINT *v13; // rax
  CVisual *v14; // rcx
  LONG x; // eax
  int updated; // edi
  __int64 v17; // rdx
  CDWMDisplay *v18; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( *((_QWORD *)this + 42) - *((_QWORD *)this + 41) < 8uLL )
  {
    v4 = -2147418113;
    v5 = 47LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)v4);
    return v4;
  }
  v19 = 0LL;
  GetDesktopID(1LL, &v19, a3);
  v20.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v20.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99) + v20.left;
  v20.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v20.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100) + v20.top;
  v7 = (struct tagPOINT **)((char *)this + 440);
  if ( !*((_QWORD *)this + 55) )
  {
    *v7 = 0LL;
    v4 = CDisplayAnimatedVisual::CaptureAndAddVisual(
           this,
           v19,
           &v20,
           &v20,
           (struct CAnimatedTransitionVisual **)this + 55);
    if ( (v4 & 0x80000000) != 0 )
    {
      v5 = 57LL;
      goto LABEL_3;
    }
  }
  v18 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)this + 40), &v18);
  v4 = PrimaryDisplay;
  if ( PrimaryDisplay < 0 )
  {
    v9 = (unsigned int)PrimaryDisplay;
    v10 = 64LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)v9);
LABEL_22:
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v18);
    return v4;
  }
  v11 = v18;
  MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
                                  *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 18),
                                  v18);
  if ( !MatchedPhysicalDisplayNoRef )
  {
    v4 = -2147467259;
    v9 = 2147500037LL;
    v10 = 72LL;
    goto LABEL_12;
  }
  *(_OWORD *)((char *)this + 500) = *(_OWORD *)((char *)MatchedPhysicalDisplayNoRef + 56);
  CAnimatedTransitionVisual::SetBeginRect(*v7, (const struct tagRECT *)((char *)this + 500));
  v13 = *v7;
  *(_OWORD *)&v13[109].x = *(_OWORD *)((char *)this + 500);
  v14 = (CVisual *)&v13[1];
  x = v13[12].x;
  if ( (x & 0x1000) == 0 )
  {
    *((_DWORD *)v14 + 22) = x | 0x1000;
    CVisual::PropagateDirtyChildren(v14);
  }
  updated = CDisplayAnimatedVisual::ScheduleAnimation(
              (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 288),
              (struct CAnimatedTransitionVisual *)*v7,
              (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
              *((unsigned int *)this + 88),
              *((_DWORD *)this + 90),
              (unsigned int *)this + 118);
  if ( updated < 0 )
  {
    v17 = 86LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    v4 = updated;
    goto LABEL_22;
  }
  *((_BYTE *)this + 434) = 1;
  updated = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  if ( updated < 0 )
  {
    v17 = 88LL;
    goto LABEL_21;
  }
  updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
  if ( updated < 0 )
  {
    v17 = 91LL;
    goto LABEL_21;
  }
  *(_OWORD *)((char *)this + 484) = *(_OWORD *)(**((_QWORD **)this + 41) + 56LL);
  if ( v11 )
    CDWMDisplay::Release(v11);
  return 0LL;
}
