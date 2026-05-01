/*
 * XREFs of _Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x180279CC3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 256) + 128LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD *)(a2 + 144));
}
