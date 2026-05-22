/*
 * XREFs of ??0BatchController@Composition@UI@Windows@@QEAA@XZ @ 0x180040368
 * Callers:
 *     ??0CompositorCommon@Composition@UI@Windows@@IEAA@XZ @ 0x1800400D0 (--0CompositorCommon@Composition@UI@Windows@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

Windows::UI::Composition::BatchController *__fastcall Windows::UI::Composition::BatchController::BatchController(
        Windows::UI::Composition::BatchController *this)
{
  Windows::UI::Composition::BatchController *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = GetCurrentThreadId();
  result = this;
  *((_BYTE *)this + 68) = 0;
  return result;
}
