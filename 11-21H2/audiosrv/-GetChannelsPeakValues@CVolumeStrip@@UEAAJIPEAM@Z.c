/*
 * XREFs of ?GetChannelsPeakValues@CVolumeStrip@@UEAAJIPEAM@Z @ 0x1800D0260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelsPeakValues(CVolumeStrip *this, __int64 a2, float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 22) + 88LL))(
           *((_QWORD *)this + 22),
           a2,
           a3);
}
