/*
 * XREFs of ??$make_self@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180089160
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800892C0 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

_QWORD *__fastcall winrt::make_self<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,>(_QWORD *a1)
{
  _DWORD *v2; // rbx
  _QWORD *result; // rax

  v2 = operator new(0x98uLL);
  memset_0(v2 + 2, 0, 0x90uLL);
  *(_QWORD *)v2 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v2[4] = 1;
  *((_BYTE *)v2 + 24) = 0;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  v2[12] = 0;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 8) = 0LL;
  *((_BYTE *)v2 + 72) = 0;
  *((_QWORD *)v2 + 10) = 0LL;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *((_QWORD *)v2 + 13) = 0LL;
  *((_QWORD *)v2 + 14) = 0LL;
  *((_QWORD *)v2 + 15) = 0LL;
  *((_QWORD *)v2 + 16) = 0LL;
  *((_QWORD *)v2 + 17) = 0LL;
  *((_QWORD *)v2 + 18) = 0LL;
  *(_QWORD *)v2 = &SnapLayoutProvider::`vftable'{for `winrt::impl::producers_base<SnapLayoutProvider,std::tuple<IInspectable>>'};
  *((_QWORD *)v2 + 1) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,IInspectable>'};
  result = a1;
  *a1 = v2;
  return result;
}
