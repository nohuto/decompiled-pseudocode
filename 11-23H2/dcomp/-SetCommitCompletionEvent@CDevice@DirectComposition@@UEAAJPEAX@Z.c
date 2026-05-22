/*
 * XREFs of ?SetCommitCompletionEvent@CDevice@DirectComposition@@UEAAJPEAX@Z @ 0x18008DC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::SetCommitCompletionEvent(DirectComposition::CDevice *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 15) + 40LL))(
           *((_QWORD *)this + 15),
           a2,
           1LL);
}
