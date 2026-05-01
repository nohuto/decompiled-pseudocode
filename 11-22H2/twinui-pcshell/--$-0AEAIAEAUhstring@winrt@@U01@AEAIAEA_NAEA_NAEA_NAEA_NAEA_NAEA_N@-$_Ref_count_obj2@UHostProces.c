/*
 * XREFs of ??$?0AEAIAEAUhstring@winrt@@U01@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180278E3C
 * Callers:
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U76@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180279150 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U.c)
 * Callees:
 *     ??0HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBIAEBUhstring@5@10AEB_N22222@Z @ 0x180280B18 (--0HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBIAEBUhstring@5@10AEB_N22.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>(
        __int64 a1,
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
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::HostProcessData>::`vftable';
  winrt::Windows::Internal::Shell::implementation::HostProcessData::HostProcessData(
    (winrt::Windows::Internal::Shell::implementation::HostProcessData *)(a1 + 16),
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
  return a1;
}
