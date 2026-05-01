/*
 * XREFs of ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x180472B68
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1804648DC (-SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180471300 (-GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV-$ComPtr@U-$IVect.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(
        KeyboardHosting::TabTipAdapter *this,
        __m128i *a2,
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
                           *((unsigned int *)this + 132),
                           a2,
                           &v10);
  v6 = OcclusionsVectorView;
  if ( OcclusionsVectorView >= 0 )
  {
    OcclusionsVectorView = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 5) + 144LL))(
                             *((_QWORD *)this + 5),
                             v10,
                             v3);
    v6 = OcclusionsVectorView;
    if ( OcclusionsVectorView >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 2219LL;
  }
  else
  {
    v7 = 2218LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)OcclusionsVectorView);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v6;
}
