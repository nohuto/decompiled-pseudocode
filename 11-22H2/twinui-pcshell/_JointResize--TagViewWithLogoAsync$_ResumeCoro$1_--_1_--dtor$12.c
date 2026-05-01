/*
 * XREFs of _JointResize::TagViewWithLogoAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x180214394
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall JointResize::TagViewWithLogoAsync__ResumeCoro_1_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 56) + 216LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD *)(a2 + 224));
}
