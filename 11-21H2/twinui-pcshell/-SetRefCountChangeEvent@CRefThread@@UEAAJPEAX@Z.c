/*
 * XREFs of ?SetRefCountChangeEvent@CRefThread@@UEAAJPEAX@Z @ 0x1801832B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefThread::SetRefCountChangeEvent(CRefThread *this, void *a2)
{
  *((_QWORD *)this + 3) = a2;
  return 0LL;
}
