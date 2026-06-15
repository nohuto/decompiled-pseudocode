/*
 * XREFs of ?GetPeakValue@CVolumeStrip@@UEAAJPEAM@Z @ 0x180083DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetPeakValue(CVolumeStrip *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 22) + 72LL))(*((_QWORD *)this + 22), a2);
}
