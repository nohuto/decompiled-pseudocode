/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18003DE64 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18003EAB0 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18005BB70 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  struct tagPOINT **v5; // r14
  int PrimaryDisplay; // eax
  unsigned int v7; // edi
  CDWMDisplay *v8; // rbx
  __int64 v9; // rdx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  __int64 v11; // r9
  struct tagPOINT *v12; // rcx
  unsigned __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  struct CDWMDisplay *v14; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( *((_QWORD *)this + 42) - *((_QWORD *)this + 41) < 8uLL )
  {
    v2 = -2147418113;
    v3 = 47LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v13 = 0LL;
  GetDesktopID(1LL, &v13);
  v15.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
  v15.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95) + v15.left;
  v15.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 94);
  v15.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96) + v15.top;
  v5 = (struct tagPOINT **)((char *)this + 440);
  if ( !*((_QWORD *)this + 55) )
  {
    *v5 = 0LL;
    v2 = CDisplayAnimatedVisual::CaptureAndAddVisual(
           this,
           v13,
           &v15,
           &v15,
           (struct CAnimatedTransitionVisual **)this + 55);
    if ( v2 < 0 )
    {
      v3 = 57LL;
      goto LABEL_3;
    }
  }
  v14 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)this + 40), &v14);
  v7 = PrimaryDisplay;
  v8 = v14;
  if ( PrimaryDisplay < 0 )
  {
    v9 = 64LL;
LABEL_17:
    v11 = (unsigned int)PrimaryDisplay;
    goto LABEL_18;
  }
  MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(
                                  *((CDWMDisplaySet **)CDesktopManager::s_pDesktopManagerInstance + 17),
                                  v14);
  if ( MatchedPhysicalDisplayNoRef )
  {
    *(_OWORD *)((char *)this + 500) = *(_OWORD *)((char *)MatchedPhysicalDisplayNoRef + 56);
    CAnimatedTransitionVisual::SetBeginRect(*v5, (const struct tagRECT *)((char *)this + 500));
    v12 = *v5;
    *(_OWORD *)&v12[109].x = *(_OWORD *)((char *)this + 500);
    CVisual::SetDirtyFlags((CVisual *)&v12[1], 4096);
    PrimaryDisplay = CDisplayAnimatedVisual::ScheduleAnimation(
                       (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 288),
                       (struct CAnimatedTransitionVisual *)*v5,
                       (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
                       *((unsigned int *)this + 88),
                       *((_DWORD *)this + 90),
                       (unsigned int *)this + 118);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      *((_BYTE *)this + 434) = 1;
      PrimaryDisplay = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
      v7 = PrimaryDisplay;
      if ( PrimaryDisplay >= 0 )
      {
        PrimaryDisplay = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52));
        v7 = PrimaryDisplay;
        if ( PrimaryDisplay >= 0 )
        {
          *(_OWORD *)((char *)this + 484) = *(_OWORD *)(**((_QWORD **)this + 41) + 56LL);
          v7 = 0;
          goto LABEL_20;
        }
        v9 = 91LL;
      }
      else
      {
        v9 = 88LL;
      }
    }
    else
    {
      v9 = 86LL;
    }
    goto LABEL_17;
  }
  v7 = -2147467259;
  v11 = 2147500037LL;
  v9 = 72LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)v11);
LABEL_20:
  if ( v8 )
    CDWMDisplay::Release(v8);
  return v7;
}
