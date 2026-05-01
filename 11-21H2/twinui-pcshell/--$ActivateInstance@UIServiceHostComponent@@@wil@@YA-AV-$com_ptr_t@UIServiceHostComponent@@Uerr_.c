/*
 * XREFs of ??$ActivateInstance@UIServiceHostComponent@@@wil@@YA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18014689C
 * Callers:
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x18014682C (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$query@UIServiceHostComponent@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@1@XZ @ 0x180190F50 (--$query@UIServiceHostComponent@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::ActivateInstance<IServiceHostComponent>(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = L"Windows.Internal.Shell.BlueLightReduction.BlueLightReductionManager";
  v7[0] = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v9, &v8, a3);
  v5 = RoActivateInstance(*(_QWORD *)(v4 + 24), v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x69F,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5,
      v7[0]);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IServiceHostComponent>(v7, a1);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v7);
  return a1;
}
