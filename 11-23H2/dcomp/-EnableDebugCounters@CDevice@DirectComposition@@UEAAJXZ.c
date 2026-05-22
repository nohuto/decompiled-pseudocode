/*
 * XREFs of ?EnableDebugCounters@CDevice@DirectComposition@@UEAAJXZ @ 0x1800F1BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::EnableDebugCounters(DirectComposition::CDevice *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 112LL))(*((_QWORD *)this + 14), 1LL);
}
