/*
 * XREFs of _CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID_::_1_::dtor$5 @ 0x1802B635E
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 92) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 92) &= ~1u;
    winrt::hstring::~hstring((void **)(a2 + 112));
  }
}
