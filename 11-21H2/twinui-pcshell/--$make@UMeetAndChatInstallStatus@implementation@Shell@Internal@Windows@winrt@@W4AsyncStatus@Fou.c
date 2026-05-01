/*
 * XREFs of ??$make@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@W4AsyncStatus@Foundation@56@AEAUMeetAndChatInstallProgress@MeetAndChat@3456@AEAUMeetAndChatInstallResult@MeetAndChat@3456@@winrt@@YA?AUMeetAndChatInstallStatus@Shell@Internal@Windows@0@$$QEAW4AsyncStatus@Foundation@40@AEAUMeetAndChatInstallProgress@MeetAndChat@2340@AEAUMeetAndChatInstallResult@82340@@Z @ 0x1805BFD40
 * Callers:
 *     ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1805CF334 (-TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUMeet.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,enum winrt::Windows::Foundation::AsyncStatus,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress &,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult &>(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v8; // rsi
  int v9; // r10d

  v8 = operator new(0x30uLL);
  v9 = *a2;
  v8[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,winrt::Windows::Internal::Shell::IMeetAndChatInstallStatus>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v8[1] = 1LL;
  *((_DWORD *)v8 + 6) = v9;
  *v8 = &winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus::`vftable';
  *(_QWORD *)((char *)v8 + 28) = *(_QWORD *)a3;
  *((_DWORD *)v8 + 9) = *(_DWORD *)(a3 + 8);
  v8[5] = *a4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(v8 + 5));
  *a1 = v8 + 2;
  *v8 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus>::`vftable';
  return a1;
}
