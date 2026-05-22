/*
 * XREFs of ?GetChannelHandle@CDevice@DirectComposition@@UEAAIXZ @ 0x1800F1E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::GetChannelHandle(DirectComposition::CDevice *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 8LL))(*((_QWORD *)this + 11));
}
