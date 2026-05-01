/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId_::_1_::dtor$0 @ 0x180569E18
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    std::wstring::~wstring(*(void ***)(a2 + 56));
  }
}
