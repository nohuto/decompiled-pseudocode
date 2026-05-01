/*
 * XREFs of ??$?0AEBIUhstring@winrt@@U01@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x18027F228
 * Callers:
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x18027FC68 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@.c)
 * Callees:
 *     ??0HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBIAEBUhstring@5@10AEB_N22222@Z @ 0x180280B18 (--0HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBIAEBUhstring@5@10AEB_N22.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>(
        __int64 a1,
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
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::`vftable';
  LOBYTE(a11) = *a11 != 0;
  LOBYTE(a10) = *a10 != 0;
  LOBYTE(a9) = *a9 != 0;
  LOBYTE(a8) = *a8 != 0;
  LOBYTE(a7) = *a7 != 0;
  LOBYTE(a6) = *a6 != 0;
  LODWORD(a5) = *a5;
  winrt::Windows::Internal::Shell::implementation::HostProcessData::HostProcessData(
    (winrt::Windows::Internal::Shell::implementation::HostProcessData *)(a1 + 16),
    a2,
    a3,
    a4,
    (const unsigned int *)&a5,
    (const bool *)&a6,
    (const bool *)&a7,
    (const bool *)&a8,
    (const bool *)&a9,
    (const bool *)&a10,
    (const bool *)&a11);
  return a1;
}
