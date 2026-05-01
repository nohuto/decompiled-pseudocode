/*
 * XREFs of ?CreateDesktopTaskViewDismissAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1800637EC
 * Callers:
 *     ?CreateDesktopTaskViewDismissAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1800636E4 (-CreateDesktopTaskViewDismissAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experie.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewAnimationProviderFactoryStatics::CreateDesktopTaskViewDismissAnimationProvider(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *a1;
  v7 = *a3;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *))(v3 + 80))(a1, a2, &v7, &v8);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    JUMPOUT(0x180063866LL);
  }
  v5 = __abi_winrt_ptr_ctor(v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v5;
}
