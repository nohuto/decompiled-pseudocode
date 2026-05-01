/*
 * XREFs of _MiniSearchAppPositionerConfig::MiniSearchAppPositionerConfig_::_1_::dtor$2 @ 0x180216CDD
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall MiniSearchAppPositionerConfig::MiniSearchAppPositionerConfig_::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (*(_DWORD *)(a2 + 136) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 136) &= ~1u;
    winrt::hstring::~hstring((volatile signed __int32 **)(a2 + 152), a2, a3, a4);
  }
}
