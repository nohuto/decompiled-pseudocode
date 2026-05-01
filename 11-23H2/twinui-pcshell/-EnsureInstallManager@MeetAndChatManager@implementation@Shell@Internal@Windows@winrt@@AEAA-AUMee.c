/*
 * XREFs of ?EnsureInstallManager@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUMeetAndChatInstallManager@MeetAndChat@3456@XZ @ 0x1806B1904
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@23@XZ @ 0x1806AF29C (--$ActivateInstance@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@IActiv.c)
 *     ??$call@P6A?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1806AFA30 (--$call@P6A-AUMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@AEBUIActivatio.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureInstallManager(
        RTL_SRWLOCK *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  PVOID Ptr; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v9)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+60h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+68h] [rbp+20h]

  v4 = a1 + 14;
  AcquireSRWLockShared(a1 + 14);
  Ptr = a1[29].Ptr;
  if ( Ptr )
  {
    *(_QWORD *)a2 = Ptr;
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
    if ( v4 )
      ReleaseSRWLockShared(v4);
  }
  else
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    v10 = &qword_1809920A8;
    _InterlockedIncrement64(&qword_1809920A8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory> )
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager>(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory>,
        &v8);
      _InterlockedDecrement64(&qword_1809920A8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1809920A8);
      v9 = _lambda_3ea6d66b8f4bee0c4c71a46825e5cf7e_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        v5,
        (__int64)&v8,
        (void (__fastcall **)(__int64, __int64 *))&v9);
    }
    AcquireSRWLockExclusive(v4);
    if ( !a1[29].Ptr )
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&a1[29],
        (winrt::Windows::Foundation::IUnknown *)&v8);
    *(RTL_SRWLOCK *)a2 = a1[29];
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  return a2;
}
