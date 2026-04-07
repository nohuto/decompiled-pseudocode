/*
 * XREFs of ?StopAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5444
 * Callers:
 *     ?Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003FDCC (-Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800134C8 (-reset@-$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180014410 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180014600 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C8A9C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_UIntegral_to_string@GI@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@I@Z @ 0x1800F2448 (--$_UIntegral_to_string@GI@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@I.c)
 *     ?AcquireAnimationEngine@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEBA?AV?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800F3940 (-AcquireAnimationEngine@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5680 (-UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transit.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StopAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  CAnimationEngine *v2; // rcx
  unsigned int v3; // edx
  unsigned int v4; // edx
  _QWORD *v5; // r14
  __int64 v6; // r8
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, int *, __int128 *, _QWORD, _QWORD, const wchar_t *, _QWORD *, int); // rbx
  _QWORD *v9; // r8
  CAnimationEngine *v10; // [rsp+50h] [rbp-39h] BYREF
  __int128 v11; // [rsp+60h] [rbp-29h] BYREF
  __int64 v12; // [rsp+70h] [rbp-19h]
  int v13; // [rsp+78h] [rbp-11h]
  _QWORD v14[4]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v15; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+2Fh]

  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UnregisterGlobalTimeChanged(this);
  *((_BYTE *)this + 78) = 0;
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::AcquireAnimationEngine(
    (__int64)this,
    &v10);
  v2 = v10;
  if ( v10 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v10,
      (struct IAnimationListener *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v3 = *((_DWORD *)this + 16);
    if ( v3 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v10, v3);
      *((_DWORD *)this + 16) = -1;
    }
    v4 = *((_DWORD *)this + 17);
    v2 = v10;
    if ( v4 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v10, v4);
      *((_DWORD *)this + 17) = -1;
      v2 = v10;
    }
  }
  v5 = (_QWORD *)((char *)this + 96);
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v6 + 88LL))(*((_QWORD *)this + 12), &v15) >= 0 )
    {
      v7 = *v5;
      v8 = *(void (__fastcall **)(__int64, int *, __int128 *, _QWORD, _QWORD, const wchar_t *, _QWORD *, int))(*(_QWORD *)*v5 + 200LL);
      std::_UIntegral_to_string<unsigned short,unsigned int>((char *)v14, *((_DWORD *)this + 26));
      v9 = v14;
      if ( v14[3] >= 8uLL )
        v9 = (_QWORD *)v14[0];
      v11 = v15;
      v12 = v16;
      v13 = v17;
      v8(v7, &dword_180141868, &v11, 0LL, 0LL, L"Rejuv Screen Rotation", v9, 1100);
      std::wstring::_Tidy_deallocate((__int64)v14);
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 40LL))(*v5);
    wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset((__int64 *)this + 12);
    *((_DWORD *)this + 26) = 0;
    v2 = v10;
  }
  if ( v2 )
    CAnimationEngine::Release(v2);
}
