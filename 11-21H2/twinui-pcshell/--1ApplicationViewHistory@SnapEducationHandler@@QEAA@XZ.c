/*
 * XREFs of ??1ApplicationViewHistory@SnapEducationHandler@@QEAA@XZ @ 0x1805919F4
 * Callers:
 *     _SnapEducationHandler::WindowFocusChanged_::_1_::dtor$9 @ 0x180220109 (_SnapEducationHandler--WindowFocusChanged_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall SnapEducationHandler::ApplicationViewHistory::~ApplicationViewHistory(
        SnapEducationHandler::ApplicationViewHistory *this)
{
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::~deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>((__int64 *)this + 2);
}
