/*
 * XREFs of ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800F7A8C
 * Callers:
 *     ?PreTransition@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F8360 (-PreTransition@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002FA40 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?BeginRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800F7878 (-BeginRect@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisua.c)
 *     ?CreateAndInsertSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUTopLevelWindow3DWrapper@Transitions@Udwm@3@@Z @ 0x1800F7D14 (-CreateAndInsertSnapshotVisual@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Tra.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CaptureVisuals(
        __int64 a1,
        int a2)
{
  signed int v4; // eax
  __int64 v5; // rdi
  __int64 *v6; // rbx
  signed int v7; // eax
  __int64 v8; // rdx
  signed int v9; // eax
  signed int v10; // eax
  char result; // al
  __int64 *inserted; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  signed int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  char v18; // [rsp+38h] [rbp-8h]
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF

  v17 = a1;
  v18 = 1;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 64LL))(*(_QWORD *)(a1 + 24), &v19);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  v5 = v19;
  v6 = (__int64 *)(a1 + 32);
  if ( (__int64 *)(a1 + 32) == &v19 )
  {
    if ( v19 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  }
  else
  {
    if ( *v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 32));
    *v6 = v5;
  }
  if ( a2 == 2 )
  {
    LOBYTE(v19) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v6 + 48LL))(*v6, &v19);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    if ( (_BYTE)v19 )
      goto LABEL_14;
  }
  if ( a2 == 3 )
  {
    LOBYTE(v19) = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v6 + 64LL))(*v6, &v19);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    if ( (_BYTE)v19 )
    {
LABEL_14:
      LOBYTE(v8) = a2 == 2;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v6 + 72LL))(*v6, v8);
      if ( v10 < 0 )
        winrt::throw_hresult(v10);
      if ( v6 != &v19 )
      {
        if ( *v6 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 32));
        *v6 = 0LL;
      }
    }
  }
  v19 = 0LL;
  result = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 32), &v19);
  if ( !result )
  {
    inserted = (__int64 *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::CreateAndInsertSnapshotVisual(
                            a1 + 24,
                            &v19,
                            a1 + 32);
    v13 = (_QWORD *)(a1 + 40);
    if ( (__int64 *)(a1 + 40) != inserted )
    {
      if ( *v13 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 40));
      v14 = *inserted;
      *inserted = 0LL;
      *v13 = v14;
    }
    if ( v19 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
    v16 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v6 + 136LL))(*v6, &v16);
    if ( v15 < 0 )
      winrt::throw_hresult(v15);
    *(_OWORD *)(a1 + 76) = v16;
    return winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::BeginRect(
             (__int64 **)(a1 + 40),
             (__int128 *)(a1 + 76));
  }
  return result;
}
