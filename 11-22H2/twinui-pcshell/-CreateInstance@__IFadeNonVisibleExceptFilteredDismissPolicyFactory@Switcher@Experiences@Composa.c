/*
 * XREFs of ?CreateInstance@__IFadeNonVisibleExceptFilteredDismissPolicyFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVFadeNonVisibleExceptFilteredDismissPolicy@2345@PE$AAUIFilterAnimatable@2345@@Z @ 0x18006A23C
 * Callers:
 *     ??0FadeNonVisibleExceptFilteredDismissPolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIFilterAnimatable@1234@@Z @ 0x18006A13C (--0FadeNonVisibleExceptFilteredDismissPolicy@Switcher@Experiences@ComposableShell@WindowsInterna.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IFadeNonVisibleExceptFilteredDismissPolicyFactory::CreateInstance(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, &v5);
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    JUMPOUT(0x18006A2A7LL);
  }
  v3 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}
