/*
 * XREFs of ?GetChannelVolumeLevel@CVolumeStrip@@UEAAJIPEAM@Z @ 0x1800D0200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelVolumeLevel(CVolumeStrip *this, __int64 a2, float *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, float *))(**((_QWORD **)this + 20) + 136LL))(
           *((_QWORD *)this + 20),
           a2,
           a3);
}
