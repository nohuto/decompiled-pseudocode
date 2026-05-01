/*
 * XREFs of ?InternalResumeRT@CRunnableTask@@UEAAJXZ @ 0x1801C4BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::InternalResumeRT(CRunnableTask *this)
{
  *((_DWORD *)this + 11) = 4;
  return 0LL;
}
