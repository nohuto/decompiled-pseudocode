/*
 * XREFs of ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC
 * Callers:
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x1800D63E0 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801ADAC0 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x180705B84 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x180705DAC (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?PackageFamilyName@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180697754 (-PackageFamilyName@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallIt.c)
 *     ?NotifyDisplayInfoChanged@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@0@Z @ 0x180715F24 (-NotifyDisplayInfoChanged@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAX.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?DisplayName@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180725CFC (-DisplayName@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Interna.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180725D50 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@URegistrationData@Shell@Inter.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180725E7C (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@URegistrationData@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
        const struct winrt::Windows::Internal::Shell::RegistrationData *a1,
        const bool *a2)
{
  int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  int v15; // edi
  __int64 v16; // rcx
  __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r8
  char v20; // bl
  signed int v21; // eax
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  __int64 *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r8
  char v27; // bl
  signed int v28; // eax
  winrt::impl **v29; // rbx
  winrt::impl **v30; // rax
  signed int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-30h] BYREF
  volatile signed __int32 *v33; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v34; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v35; // [rsp+38h] [rbp-18h] BYREF
  volatile signed __int32 *v36; // [rsp+40h] [rbp-10h] BYREF
  RTL_SRWLOCK *v37; // [rsp+48h] [rbp-8h] BYREF
  volatile signed __int32 *v38; // [rsp+90h] [rbp+40h] BYREF
  volatile signed __int32 *v39; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  LODWORD(v38) = 0;
  AcquireSRWLockExclusive(&winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_lock);
  v37 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_lock;
  v5 = 0;
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::Size(v6) )
  {
    while ( 1 )
    {
      v7 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
             (__int64 *)a1,
             &v36);
      v8 = v4 | 1;
      LODWORD(v38) = v8;
      v10 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
              v9,
              &v32,
              v5);
      v8 |= 2u;
      LODWORD(v38) = v8;
      v11 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
              v10,
              &v35);
      v4 = v8 | 4;
      LODWORD(v38) = v4;
      if ( !(unsigned __int8)winrt::operator==((__int64)v11, (__int64)v7, v12) )
        goto LABEL_5;
      v14 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::PackageFamilyName(
              (__int64 *)a1,
              &v34);
      v15 = v4 | 8;
      LODWORD(v38) = v15;
      v17 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
              v16,
              &v39,
              v5);
      v15 |= 0x10u;
      LODWORD(v38) = v15;
      v18 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::PackageFamilyName(
              v17,
              &v33);
      v4 = v15 | 0x20;
      if ( (unsigned __int8)winrt::operator==((__int64)v18, (__int64)v14, v19) )
        v20 = 1;
      else
LABEL_5:
        v20 = 0;
      if ( (v4 & 0x20) != 0 )
      {
        v4 &= ~0x20u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
      }
      if ( (v4 & 0x10) != 0 )
      {
        v4 &= ~0x10u;
        if ( v39 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
      }
      if ( (v4 & 8) != 0 )
      {
        v4 &= ~8u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
      }
      if ( (v4 & 4) != 0 )
      {
        v4 &= ~4u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
      }
      if ( (v4 & 2) != 0 )
      {
        v4 &= ~2u;
        if ( v32 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v36);
      }
      if ( v20 )
        break;
      if ( ++v5 >= (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::Size(v13) )
        goto LABEL_22;
    }
    if ( *a2 )
    {
      v22 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::DisplayName(
              (__int64 *)a1,
              &v36);
      v24 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
              v23,
              &v38,
              v5);
      v25 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::DisplayName(
              v24,
              &v39);
      v27 = winrt::operator==((__int64)v25, (__int64)v22, v26);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
      if ( v38 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v38);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v36);
      if ( !v27 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                                 + 80LL))(
                winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
                v5,
                *(_QWORD *)a1);
        if ( v28 < 0 )
          winrt::throw_hresult(v28);
        v29 = (winrt::impl **)winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::DisplayName(
                                (__int64 *)a1,
                                &v39);
        v30 = (winrt::impl **)winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
                                (__int64 *)a1,
                                &v38);
        winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::NotifyDisplayInfoChanged(v30, v29);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
      }
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                       + 96LL))(
              winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
              v5);
      if ( v31 < 0 )
        winrt::throw_hresult(v31);
    }
  }
  else
  {
LABEL_22:
    if ( *a2 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                       + 104LL))(
              winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
              *(_QWORD *)a1);
      if ( v21 < 0 )
        winrt::throw_hresult(v21);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v37);
}
