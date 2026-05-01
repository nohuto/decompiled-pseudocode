/*
 * XREFs of ?RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180148F8C
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4@Z @ 0x1801A0C20 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP84@EAAJ24@_E@Z @ 0x18014905C (--$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedS.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ @ 0x180161E0C (-InternalRelease@-$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::RegisterTouchKeyboardEventHandlers(
        UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  UndockedSearchAppExperienceManager *v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  *(_QWORD *)v6 = &UndockedSearchAppExperienceManager::InputHostHiding;
  v6[2] = 0;
  v7 = *(_OWORD *)v6;
  *(_QWORD *)v6 = &UndockedSearchAppExperienceManager::InputHostShowing;
  v6[2] = 0;
  v10 = this;
  v2 = ((__int64 (__fastcall *)(__int64 *, UndockedSearchAppExperienceManager **, int *, __int128 *))___MakeAndInitialize_VIInputHostLayoutChangesHandler_Shell_Internal_Windows__V1234_PEAVUndockedSearchAppExperienceManager__P85_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__11__EP85_EAAJ02__E_Details_WRL_Microsoft__YAJV__ComPtrRef_V__ComPtr_VIInputHostLayoutChangesHandler_Shell_Internal_Windows___WRL_Microsoft___012___QEAPEAVUndockedSearchAppExperienceManager____QEAP84_EAAJPEAUHWND____PEAUtagRECT__W4IHM_DISPLAY_MODE__33__E__QEAP84_EAAJ24__E_Z)(
         &v9,
         &v10,
         v6,
         &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 2659LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_4;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 10) + 24LL))(
         *((_QWORD *)this + 10),
         (v9 + 8) & -(__int64)(v9 != 0),
         (char *)this + 208);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 2660LL;
    goto LABEL_7;
  }
  v3 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v9);
  return v3;
}
