/*
 * XREFs of ??R_lambda_e618d2e1a4350f330cc93ddf3d982686_@@QEBA@XZ @ 0x180250390
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180251C60 (-Run@-$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1803D4BA8 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x18069F978 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A7300 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_e618d2e1a4350f330cc93ddf3d982686_::operator()(__int64 a1)
{
  bool *v2; // r8
  const char *v3; // r9
  __int64 result; // rax
  int CanPinToTaskbar; // eax
  int v6[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  TaskbarPinHelper *v9; // [rsp+60h] [rbp+8h] BYREF

  std::wstring::operator std::basic_string_view<unsigned short>(**(_QWORD **)(a1 + 8) + 24LL, v6);
  v7 = 0LL;
  try
  {
    TryGetAppsFolderItem();
    result = (__int64)v9;
    if ( v9 )
    {
      CanPinToTaskbar = TaskbarPinHelper::CanPinToTaskbar(v9, *(struct IShellItem **)(a1 + 16), v2);
      if ( CanPinToTaskbar < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2C9,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)(unsigned int)CanPinToTaskbar,
          v6[0]);
      result = (__int64)v9;
    }
    if ( result )
      result = winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v9);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x2CC,
             (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
             v3);
  }
  return result;
}
