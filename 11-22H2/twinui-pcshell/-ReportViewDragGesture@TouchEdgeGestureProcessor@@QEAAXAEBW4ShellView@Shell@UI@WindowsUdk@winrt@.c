/*
 * XREFs of ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x180655930
 * Callers:
 *     _lambda_81777c60ccc5db889236df1644364211_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const__winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs_const__ @ 0x18064C4FC (_lambda_81777c60ccc5db889236df1644364211_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?AnimationData@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180417E34 (-AnimationData@-$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationP.c)
 *     ?AnimationProperties@?$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureReportedArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180654074 (-AnimationProperties@-$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGest.c)
 *     ?EdgeAnimationRelationshipManager@?$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806543A0 (-EdgeAnimationRelationshipManager@-$consume_Windows_Internal_Shell_Animations_IShellAnimationCoo.c)
 *     ?IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180655074 (-IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGestureProcessor::ReportViewDragGesture(
        TouchEdgeGestureProcessor *this,
        const enum winrt::WindowsUdk::UI::Shell::ShellView *a2,
        const struct winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs *a3)
{
  signed int v6; // eax
  int v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int128 *v10; // rax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, __int128 *, __int64); // r11
  signed int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF

  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 56LL))(*(_QWORD *)a3, &v14);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = -TouchEdgeGestureProcessor::IsBottomGesture(this, (const struct winrt::Windows::Foundation::Point *)&v14);
  v8 = winrt::impl::consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::EdgeAnimationRelationshipManager(
         (__int64 *)this + 14,
         v16);
  v9 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs<winrt::WindowsUdk::UI::Shell::IShellViewGestureReportedArgs>::AnimationProperties(
         (__int64 *)a3,
         &v15);
  v10 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
          v9,
          &v18);
  v11 = *v8;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, __int64))(*(_QWORD *)*v8 + 56LL);
  v17 = *v10;
  v13 = v12(v11, (unsigned int)(v7 + 4), *(unsigned int *)a2, &v17, v14);
  if ( v13 < 0 )
    winrt::throw_hresult(v13);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( v16[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v16);
}
