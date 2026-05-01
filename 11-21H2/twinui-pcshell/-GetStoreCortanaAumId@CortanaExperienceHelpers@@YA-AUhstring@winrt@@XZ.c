/*
 * XREFs of ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180387584
 * Callers:
 *     _lambda_84f420e9fd48b9ac970d52d3a20d74fc_::operator() @ 0x180198004 (_lambda_84f420e9fd48b9ac970d52d3a20d74fc_--operator().c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180386E74 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x180387BF0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1803882E4 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ @ 0x180387BA8 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ.c)
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18038862C (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 *__fastcall CortanaExperienceHelpers::GetStoreCortanaAumId(volatile signed __int32 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  volatile signed __int32 **v5; // rcx
  char v6; // bl
  volatile signed __int32 *v7; // rax
  char v8; // bl
  volatile signed __int32 *v10; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = a1;
  if ( CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement((CortanaExperienceHelpers::Testing *)a1) )
  {
    winrt::hstring::hstring((winrt::hstring *)&v11, L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m!App");
    v5 = &v11;
    v6 = 9;
  }
  else
  {
    CortanaExperienceHelpers::TryGetCortanaAumid(&v10);
    v5 = &v10;
    v6 = 18;
  }
  v7 = *v5;
  *v5 = 0LL;
  *(_QWORD *)a1 = v7;
  v8 = v6 | 4;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10, v2, v3, v4);
  }
  if ( (v8 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11, v2, v3, v4);
  return a1;
}
