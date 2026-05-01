/*
 * XREFs of _SnapFlyoutHost::InternalHideAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801C0980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::InternalHideAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 144) + 24LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 56));
}
