/*
 * XREFs of ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U76@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180279150
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAIAEAUhstring@winrt@@U01@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180278E3C (--$-0AEAIAEAUhstring@winrt@@U01@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@-$_Ref_count_obj2@UHostProces.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int &,winrt::hstring &,winrt::hstring,unsigned int &,bool &,bool &,bool &,bool &,bool &,bool &>(
        _QWORD *a1,
        const unsigned int *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4,
        const unsigned int *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  __int64 v15; // rax
  void *v17; // [rsp+80h] [rbp+8h]

  v17 = operator new(0x38uLL);
  v15 = std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>(
          (__int64)v17,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11);
  *a1 = v15 + 16;
  a1[1] = v15;
  return a1;
}
