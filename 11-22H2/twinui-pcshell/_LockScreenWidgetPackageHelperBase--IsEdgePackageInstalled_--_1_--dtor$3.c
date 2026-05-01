/*
 * XREFs of _LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor$3 @ 0x18023EF86
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~8u;
    winrt::hstring::~hstring((void **)(a2 + 112));
  }
}
