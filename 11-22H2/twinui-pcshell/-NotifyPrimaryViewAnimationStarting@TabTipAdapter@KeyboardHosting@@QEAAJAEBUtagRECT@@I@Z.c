/*
 * XREFs of ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x180525490
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180515E7C (-SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1802DD43C (-GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV-$ComPtr@U-$IVect.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(
        KeyboardHosting::TabTipAdapter *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  int OcclusionsVectorView; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v10 = 0LL;
  OcclusionsVectorView = KeyboardHosting::TabTipAdapter::GetOcclusionsVectorView(
                           (__int64)this,
                           *((unsigned int *)this + 120),
                           &a2->left,
                           &v10);
  v6 = OcclusionsVectorView;
  if ( OcclusionsVectorView >= 0 )
  {
    OcclusionsVectorView = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 144LL))(
                             *((_QWORD *)this + 6),
                             v10,
                             v3);
    v6 = OcclusionsVectorView;
    if ( OcclusionsVectorView >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 1929LL;
  }
  else
  {
    v7 = 1928LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)OcclusionsVectorView);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v6;
}
