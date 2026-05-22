/*
 * XREFs of ?WaitForCommitCompletion@CDevice@DirectComposition@@UEAAJXZ @ 0x18008DB80
 * Callers:
 *     ?WaitForCommitCompletion@CDevice@DirectComposition@@W7EAAJXZ @ 0x1800A9050 (-WaitForCommitCompletion@CDevice@DirectComposition@@W7EAAJXZ.c)
 *     ?WaitForCommitCompletion@CDevice@DirectComposition@@WBA@EAAJXZ @ 0x1800A9070 (-WaitForCommitCompletion@CDevice@DirectComposition@@WBA@EAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::WaitForCommitCompletion(DirectComposition::CDevice *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 32LL))(*((_QWORD *)this + 20), 1LL);
}
