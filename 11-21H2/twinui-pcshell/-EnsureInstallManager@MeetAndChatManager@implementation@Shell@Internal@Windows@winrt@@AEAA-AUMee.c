/*
 * XREFs of ?EnsureInstallManager@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUMeetAndChatInstallManager@MeetAndChat@3456@XZ @ 0x1805C1278
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@23@XZ @ 0x1805BF128 (--$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActiv.c)
 *     ??$call@P6A?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1805BF91C (--$call@P6A-AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@AEBUIActivatio.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureInstallManager(
        RTL_SRWLOCK *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rsi
  PVOID Ptr; // rax
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  PVOID v7; // rax
  RTL_SRWLOCK *v9[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall *v12)(__int64, __int64); // [rsp+68h] [rbp+38h] BYREF

  v4 = a1 + 14;
  AcquireSRWLockShared(a1 + 14);
  v11 = v4;
  Ptr = a1[27].Ptr;
  if ( Ptr )
  {
    *(_QWORD *)a2 = Ptr;
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    v9[1] = (RTL_SRWLOCK *)&qword_1807B6DD8;
    _InterlockedIncrement64(&qword_1807B6DD8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager>(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory>,
        &v10);
      _InterlockedDecrement64(&qword_1807B6DD8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1807B6DD8);
      v12 = _lambda_3ea6d66b8f4bee0c4c71a46825e5cf7e_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        v6,
        (__int64)&v10,
        (void (__fastcall **)(__int64, __int64 *))&v12);
    }
    wil::AcquireSRWLockExclusive(v9, v4);
    v7 = a1[27].Ptr;
    if ( !v7 )
    {
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&a1[27],
        (winrt::Windows::Foundation::IUnknown *)&v10);
      v7 = a1[27].Ptr;
    }
    *(_QWORD *)a2 = v7;
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v9);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  }
  return a2;
}
