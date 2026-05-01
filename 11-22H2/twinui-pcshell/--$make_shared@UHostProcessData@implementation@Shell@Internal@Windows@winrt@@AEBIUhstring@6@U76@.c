/*
 * XREFs of ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x18027FC68
 * Callers:
 *     ?GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBI@Z @ 0x18027FF10 (-GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0AEBIUhstring@winrt@@U01@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x18027F228 (--$-0AEBIUhstring@winrt@@U01@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@-$_Ref_count_obj2@UHostProcessData@imp.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int const &,winrt::hstring,winrt::hstring,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
        _QWORD *a1,
        const unsigned int *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
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
