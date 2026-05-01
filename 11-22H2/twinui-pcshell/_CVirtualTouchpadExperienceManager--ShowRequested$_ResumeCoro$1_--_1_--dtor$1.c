/*
 * XREFs of _CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801E42FE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 96) + 32LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(_QWORD *)(a2 + 64));
}
