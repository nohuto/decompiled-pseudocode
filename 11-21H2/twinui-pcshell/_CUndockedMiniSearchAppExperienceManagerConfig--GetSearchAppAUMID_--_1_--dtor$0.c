/*
 * XREFs of _CUndockedMiniSearchAppExperienceManagerConfig::GetSearchAppAUMID_::_1_::dtor$0 @ 0x18022350B
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall CUndockedMiniSearchAppExperienceManagerConfig::GetSearchAppAUMID_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::hstring::~hstring(*(volatile signed __int32 ***)(a2 + 152), a2, a3, a4);
  }
}
