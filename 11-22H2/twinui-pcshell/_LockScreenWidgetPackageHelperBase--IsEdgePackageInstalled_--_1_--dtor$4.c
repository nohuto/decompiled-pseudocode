/*
 * XREFs of _LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor$4 @ 0x18023EFAD
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~0x10u;
    winrt::hstring::~hstring((void **)(a2 + 104));
  }
}
