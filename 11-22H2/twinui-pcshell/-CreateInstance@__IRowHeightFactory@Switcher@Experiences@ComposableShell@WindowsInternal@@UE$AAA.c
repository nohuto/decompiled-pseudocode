/*
 * XREFs of ?CreateInstance@__IRowHeightFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVRowHeight@2345@N@Z @ 0x180069F54
 * Callers:
 *     ??0RowHeight@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@N@Z @ 0x180069E4C (--0RowHeight@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@N@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IRowHeightFactory::CreateInstance(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 56LL))(a1, a2, &v5);
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    JUMPOUT(0x180069FBFLL);
  }
  v3 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}
