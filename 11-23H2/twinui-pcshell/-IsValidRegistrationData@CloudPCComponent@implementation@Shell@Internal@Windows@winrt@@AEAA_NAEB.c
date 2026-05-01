/*
 * XREFs of ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x180706F84
 * Callers:
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801ADAC0 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UAppInfo@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1806FC2A4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppInfo@ApplicationMo.c)
 *     ?GetProviderAppInfo@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x180706970 (-GetProviderAppInfo@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AU-$IVectorView@UAppIn.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsValidRegistrationData(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::hstring *a2)
{
  int v3; // esi
  unsigned int v4; // r14d
  struct IUnknown *v5; // rdx
  int v6; // r12d
  int v7; // esi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, void **); // rdi
  void **v10; // rax
  signed int v11; // eax
  unsigned int v12; // esi
  signed int v13; // eax
  __int64 v14; // r8
  char v15; // bl
  winrt::hstring *v17; // rax
  const WCHAR *v18; // rax
  int v19; // eax
  bool v20; // sf
  void *v21; // [rsp+60h] [rbp+40h] BYREF
  __int64 v22; // [rsp+70h] [rbp+50h] BYREF
  __int64 v23; // [rsp+78h] [rbp+58h] BYREF

  HIDWORD(v21) = HIDWORD(this);
  v3 = 0;
  LODWORD(v21) = 0;
  winrt::Windows::Internal::Shell::implementation::Utils::GetProviderAppInfo((winrt *)&v23);
  v4 = 0;
  v6 = winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>,winrt::Windows::ApplicationModel::AppInfo>::Size(&v23);
  while ( v4 != v6 )
  {
    v22 = 0LL;
    v7 = v3 | 2;
    LODWORD(v21) = v7;
    v8 = v23;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v23 + 48LL);
    v10 = winrt::put_abi((winrt *)&v22, v5);
    v11 = v9(v8, v4, v10);
    if ( v11 < 0 )
      winrt::throw_hresult(v11);
    v12 = v7 & 0xFFFFFFFC | 1;
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v22 + 72LL))(v22, &v21);
    if ( v13 < 0 )
      winrt::throw_hresult(v13);
    v3 = v12 | 4;
    v15 = winrt::operator==((__int64)a2, (__int64)&v21, v14);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v21);
    if ( v15 )
    {
      if ( v22 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
      if ( v23 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
      return 1;
    }
    if ( v22 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    ++v4;
  }
  if ( v23 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
  v17 = (winrt::hstring *)winrt::operator+((__int64)&v21, (__int64)&c_remoteSystemAvailabilityRegPath, (__int64)a2);
  v18 = winrt::hstring::c_str(v17);
  v19 = RegDeleteTreeW(HKEY_CURRENT_USER, v18);
  v20 = v19 < 0;
  if ( v19 > 0 )
  {
    v19 = (unsigned __int16)v19 | 0x80070000;
    v20 = v19 < 0;
  }
  if ( v20 )
    winrt::throw_hresult(v19);
  winrt::hstring::~hstring(&v21);
  return 0;
}
