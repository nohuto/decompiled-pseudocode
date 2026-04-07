/*
 * XREFs of ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010AF40
 * Callers:
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18010B300 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F4054 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionManagerNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180108918 (--$as@UITransitionManagerNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Window.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010922C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?PostTransition@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@@Z @ 0x18010B9C0 (-PostTransition@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Ud.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWindowList::IsInWindowResizeChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        int a4,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a5)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  char *v11; // r15
  int SyncedWindowData; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, __int64 *, __int64 *); // rdi
  __int64 v17; // rbx
  __int64 (__fastcall ***v19)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = v9;
  if ( v9 && (*(_BYTE *)(v9 + 678) & 4) != 0 )
    a3 = 0;
  if ( ((a5 - 4) & 0xFFFFFFFB) != 0 )
  {
LABEL_17:
    if ( v10 )
      goto LABEL_18;
LABEL_27:
    v13 = 0;
    goto LABEL_28;
  }
  if ( !a3 )
  {
    if ( !v9 )
      goto LABEL_27;
    if ( (*(_BYTE *)(v9 + 677) & 0x20) == 0 )
      goto LABEL_18;
  }
  v11 = (char *)this + 704;
  if ( *((_QWORD *)this + 88)
    || (SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, (struct CWindowData **)this + 88),
        v13 = SyncedWindowData,
        SyncedWindowData >= 0) )
  {
    v15 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 )
    {
      if ( ((*(_BYTE *)(v15 + 677) & 0x20) != 0) == a3 && v10 )
      {
LABEL_18:
        if ( (*(_DWORD *)(v10 + 680) & 0xFFF) == 0x5E )
        {
          if ( *((_BYTE *)this + 696) )
          {
            winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v22);
            a5 = IMDT_TOUCH|IMDT_MOUSE;
            winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::PostTransition(
              &v22,
              &a5);
            if ( v22 )
              winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
            *(_DWORD *)(v10 + 680) &= 0x2000000u;
            *(_DWORD *)(v10 + 680) |= 0xFFFu;
            *((_BYTE *)this + 696) = 0;
          }
          else
          {
            *((_BYTE *)this + 696) = 1;
            winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent((__int64)&v19);
            v16 = v19;
            winrt::impl::as<Udwm::Transitions::ITransitionManagerNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
              &v22,
              v19);
            v17 = v22;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v22 + 48LL))(v22, *(_QWORD *)(v10 + 448), 6LL);
            if ( v17 )
              winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v22);
            if ( v16 )
              winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
          }
        }
        goto LABEL_27;
      }
      *(_BYTE *)(v15 + 677) = (32 * a3) | *(_BYTE *)(v15 + 677) & 0xDF;
      *(_DWORD *)(*(_QWORD *)v11 + 784LL) = a4;
      SyncedWindowData = CWindowList::ApplyWindowResizeStateTransition(this);
      v13 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v14 = 3311LL;
        goto LABEL_16;
      }
    }
    goto LABEL_17;
  }
  v14 = 3297LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)SyncedWindowData);
LABEL_28:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v13;
}
