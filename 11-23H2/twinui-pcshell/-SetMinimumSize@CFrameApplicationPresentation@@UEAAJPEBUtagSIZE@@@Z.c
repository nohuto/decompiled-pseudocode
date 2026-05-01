/*
 * XREFs of ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180072780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::SetMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  this[19] = *a2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_33958d0dde9f83a94f3b5da467006c79___(this, this);
}
