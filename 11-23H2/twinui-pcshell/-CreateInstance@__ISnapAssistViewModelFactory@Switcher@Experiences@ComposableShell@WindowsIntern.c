/*
 * XREFs of ?CreateInstance@__ISnapAssistViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSnapAssistViewModel@2345@PE$AAVSwitchItemListViewModel@2345@W4SnapAssistInvokeFlags@2345@@Z @ 0x18076B4A4
 * Callers:
 *     ??0SnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@W4SnapAssistInvokeFlags@1234@@Z @ 0x18076A050 (--0SnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitch.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistViewModelFactory::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, a3, &v6);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  v4 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v4;
}
