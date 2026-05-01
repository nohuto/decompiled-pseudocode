/*
 * XREFs of ?InstallForCurrentUserAsync@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallManager@UIMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@3@XZ @ 0x1805CCC6C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallManager<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallManager>::InstallForCurrentUserAsync(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
