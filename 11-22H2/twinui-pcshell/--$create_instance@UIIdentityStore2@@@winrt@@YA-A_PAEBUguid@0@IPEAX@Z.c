/*
 * XREFs of ??$create_instance@UIIdentityStore2@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1801B53E8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x18025A570 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_18025A570.c)
 * Callees:
 *     ??$capture@UIIdentityStore2@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIIdentityStore2@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1801B5424 (--$capture@UIIdentityStore2@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-AU.c)
 */

__int64 __fastcall winrt::create_instance<IIdentityStore2>(__int64 a1, __int64 a2)
{
  int v4[4]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v4[0] = 1;
  ___capture_UIIdentityStore2__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIIdentityStore2___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
    a1,
    a2,
    a2,
    v5,
    v4);
  return a1;
}
