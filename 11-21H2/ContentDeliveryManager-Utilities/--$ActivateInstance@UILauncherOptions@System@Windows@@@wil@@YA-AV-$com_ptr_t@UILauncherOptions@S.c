/*
 * XREFs of ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180074654
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18007937C (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall wil::ActivateInstance<Windows::System::ILauncherOptions>(_QWORD *a1, __int64 a2, unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  const WCHAR *v9; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = L"Windows.System.LauncherOptions";
  v8 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, a3);
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, &v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1695LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5,
      v8);
  *a1 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v8)(v8, &GUID_bafa21d8_b071_4cd8_853e_341203e557d3, a1);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6,
      v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
