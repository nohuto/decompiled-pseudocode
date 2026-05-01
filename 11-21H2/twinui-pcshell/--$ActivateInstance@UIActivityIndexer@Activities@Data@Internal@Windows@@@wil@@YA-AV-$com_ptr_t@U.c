/*
 * XREFs of ??$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIActivityIndexer@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800A9450
 * Callers:
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A93A0 (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$query@UIActivityIndexer@Activities@Data@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActivityIndexer@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A844C (--$query@UIActivityIndexer@Activities@Data@Internal@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_ex.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::ActivateInstance<Windows::Internal::Data::Activities::IActivityIndexer>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = L"Windows.Internal.Data.Activities.ActivityIndexer";
  v7[0] = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v9, &v8, a3);
  v5 = RoActivateInstance(*(_QWORD *)(v4 + 24), v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x69F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5,
      v7[0]);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Data::Activities::IActivityIndexer>(
    v7,
    a1);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v7);
  return a1;
}
