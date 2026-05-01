/*
 * XREFs of _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$5 @ 0x18020F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 224) + 104LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD *)(a2 + 112));
}
