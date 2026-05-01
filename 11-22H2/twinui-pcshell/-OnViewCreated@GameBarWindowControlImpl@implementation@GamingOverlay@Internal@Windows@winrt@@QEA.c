/*
 * XREFs of ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1804106DC
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180403968 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@?$root_implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAA?AU?$weak_ref@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802D37E4 (--$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@w.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18040ED34 (--$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040F4D0 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180411D20 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180411F2C (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewCreated(
        RTL_SRWLOCK *this,
        struct IApplicationFrameWrapper **a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 (*v5)(void); // rbx
  struct IApplicationFrameWrapper **v6; // r12
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  struct IApplicationFrameWrapper *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rax
  signed int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // ebx
  const char *v31; // r9
  const char *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v36[24]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v37; // [rsp+40h] [rbp-78h] BYREF
  __int128 v38; // [rsp+48h] [rbp-70h] BYREF
  __int128 v39; // [rsp+58h] [rbp-60h] BYREF
  __int64 v40; // [rsp+68h] [rbp-50h]
  RTL_SRWLOCK *v41; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v43; // [rsp+C0h] [rbp+8h] BYREF
  _BYTE *v44; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v45; // [rsp+D8h] [rbp+20h] BYREF

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  v41 = v4;
  v5 = *(__int64 (**)(void))(*(_QWORD *)this[4].Ptr + 24LL);
  v6 = (struct IApplicationFrameWrapper **)&this[5];
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&this[5]);
  try
  {
    v7 = v5();
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( a2 )
      {
        v11 = *v6;
        if ( *v6 )
        {
          *a2 = v11;
          (*(void (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        else
        {
          *a2 = 0LL;
        }
      }
      v45 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)*v6 + 32LL))(*v6, &v45);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64))(*(_QWORD *)v45 + 72LL))(
                v45,
                L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
                1LL);
        v15 = v14;
        if ( v14 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)*v6 + 120LL))(
                  *v6,
                  1LL);
          v17 = v16;
          if ( v16 >= 0 )
          {
            v18 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)*v6 + 48LL))(
                    *v6,
                    4LL);
            v19 = v18;
            if ( v18 >= 0 )
            {
              v20 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, PVOID))(*(_QWORD *)*v6 + 104LL))(
                      *v6,
                      this[3].Ptr);
              v21 = v20;
              if ( v20 >= 0 )
              {
                v22 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)*v6 + 128LL))(
                        *v6,
                        0LL);
                v23 = v22;
                if ( v22 >= 0 )
                {
                  winrt::impl::as<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
                    &v43,
                    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))this[3].Ptr);
                  *(_QWORD *)&v38 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnClientWindowReadyForPresentationChanged;
                  DWORD2(v38) = 0;
                  winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::get_weak<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>(
                    (volatile signed __int64 *)this,
                    v35);
                  v24 = *(_QWORD *)v35;
                  *(_QWORD *)v35 = 0LL;
                  *(_QWORD *)v36 = v24;
                  *(_OWORD *)&v36[8] = v38;
                  v44 = v36;
                  v25 = operator new(0x28uLL);
                  v26 = *(_QWORD *)v36;
                  *(_QWORD *)v36 = 0LL;
                  v25[1] = v26;
                  *((_OWORD *)v25 + 1) = *(_OWORD *)&v36[8];
                  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
                  *((_DWORD *)v25 + 8) = 1;
                  *v25 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>,_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_>::`vftable';
                  *(_QWORD *)&v38 = v25;
                  if ( *(_QWORD *)v36 )
                    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)v36);
                  if ( *(_QWORD *)v35 )
                    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)v35);
                  v44 = 0LL;
                  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _BYTE **))(*(_QWORD *)v43 + 80LL))(v43, v25, &v44);
                  if ( v27 < 0 )
                    winrt::throw_hresult(v27);
                  this[21].Ptr = v44;
                  v28 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 24LL))(v45, &v37);
                  v30 = v28;
                  if ( v28 >= 0 )
                  {
                    if ( v37 )
                    {
                      LODWORD(v44) = 1;
                      LODWORD(v39) = 24;
                      *((_QWORD *)&v39 + 1) = &v44;
                      LODWORD(v40) = 4;
                      if ( !(unsigned int)SetWindowCompositionAttribute(v37, &v39) )
                        wil::details::in1diag3::_Log_GetLastError(
                          retaddr,
                          (void *)0x131,
                          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                          v31);
                      *(_DWORD *)v36 = 25;
                      *(_QWORD *)&v36[8] = &v44;
                      *(_DWORD *)&v36[16] = 4;
                      v39 = *(_OWORD *)v36;
                      v40 = *(_QWORD *)&v36[16];
                      if ( !(unsigned int)SetWindowCompositionAttribute(v37, &v39) )
                        wil::details::in1diag3::_Log_GetLastError(
                          retaddr,
                          (void *)0x13C,
                          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                          v32);
                    }
                    LOBYTE(v29) = v43;
                    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(
                      (__int64)this,
                      v29);
                    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(
                      this,
                      v33,
                      1LL);
                    if ( BYTE1(this[13].Ptr) && LOBYTE(this[13].Ptr) )
                    {
                      LOBYTE(v34) = v43;
                      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(
                        this,
                        v34);
                    }
                    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v38);
                    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v43);
                    if ( v45 )
                      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
                    if ( v4 )
                      ReleaseSRWLockExclusive(v4);
                    result = 0LL;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x126,
                      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                      (const char *)(unsigned int)v28);
                    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v38);
                    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v43);
                    if ( v45 )
                      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
                    if ( v4 )
                      ReleaseSRWLockExclusive(v4);
                    result = v30;
                  }
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x118,
                    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                    (const char *)(unsigned int)v22);
                  if ( v45 )
                    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
                  if ( v4 )
                    ReleaseSRWLockExclusive(v4);
                  result = v23;
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x115,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                  (const char *)(unsigned int)v20);
                if ( v45 )
                  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
                if ( v4 )
                  ReleaseSRWLockExclusive(v4);
                result = v21;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x112,
                (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                (const char *)(unsigned int)v18);
              if ( v45 )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
              if ( v4 )
                ReleaseSRWLockExclusive(v4);
              result = v19;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x10F,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
              (const char *)(unsigned int)v16);
            if ( v45 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
            if ( v4 )
              ReleaseSRWLockExclusive(v4);
            result = v17;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x10C,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
            (const char *)(unsigned int)v14);
          if ( v45 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
          if ( v4 )
            ReleaseSRWLockExclusive(v4);
          result = v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFC,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)v12);
        if ( v45 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v45);
        if ( v4 )
          ReleaseSRWLockExclusive(v4);
        result = v13;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF3,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v7);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      result = v8;
    }
  }
  catch ( ... )
  {
    LODWORD(v43) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x14B,
                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
                     v9);
    return (unsigned int)v43;
  }
  return result;
}
