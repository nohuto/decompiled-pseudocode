/*
 * XREFs of ?GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x180065EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetChannelCount(CVolumeStrip *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 20) + 88LL))(
           *((_QWORD *)this + 20),
           a2);
}
