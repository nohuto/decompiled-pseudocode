/*
 * XREFs of ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18045B814
 * Callers:
 *     _lambda_b659f5b0e258593167d98b7926edc38b_::operator() @ 0x1801E5210 (_lambda_b659f5b0e258593167d98b7926edc38b_--operator().c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x18045BDA0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z @ 0x18045BD04 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z.c)
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18045C544 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 *__fastcall CortanaExperienceHelpers::GetStoreCortanaAumId(
        volatile signed __int32 *a1,
        bool *a2)
{
  int IsTestAppConfiguredAsReplacement; // eax
  volatile signed __int32 **v4; // rcx
  char v5; // bl
  volatile signed __int32 *v6; // rax
  char v7; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  volatile signed __int32 *v10; // [rsp+40h] [rbp+10h] BYREF
  volatile signed __int32 *v11; // [rsp+48h] [rbp+18h] BYREF

  v10 = a1;
  LOBYTE(v10) = 0;
  IsTestAppConfiguredAsReplacement = CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(
                                       (CortanaExperienceHelpers::Testing *)&v10,
                                       a2);
  if ( IsTestAppConfiguredAsReplacement < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25,
      (int)"shellcommon\\internal\\shell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
      (const char *)(unsigned int)IsTestAppConfiguredAsReplacement);
  if ( (_BYTE)v10 )
  {
    winrt::hstring::hstring((winrt::hstring *)&v11, L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m!App");
    v4 = &v11;
    v5 = 9;
    v6 = v11;
  }
  else
  {
    CortanaExperienceHelpers::TryGetCortanaAumid(&v10);
    v4 = &v10;
    v5 = 18;
    v6 = v10;
  }
  *v4 = 0LL;
  *(_QWORD *)a1 = v6;
  v7 = v5 | 4;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
  if ( (v7 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
  return a1;
}
