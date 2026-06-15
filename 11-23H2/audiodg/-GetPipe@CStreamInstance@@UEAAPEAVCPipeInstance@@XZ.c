/*
 * XREFs of ?GetPipe@CStreamInstance@@UEAAPEAVCPipeInstance@@XZ @ 0x140026430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CPipeInstance *__fastcall CStreamInstance::GetPipe(CStreamInstance *this)
{
  return (struct CPipeInstance *)*((_QWORD *)this + 10);
}
