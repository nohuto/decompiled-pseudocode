/*
 * XREFs of ?GetSystemVisual@CApplicationFrameWrapper@@UEAAJPEAW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1802FFC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetSystemVisual(
        CApplicationFrameWrapper *this,
        enum FRAME_SYSTEM_VISUAL *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum FRAME_SYSTEM_VISUAL *))(**((_QWORD **)this + 13) + 64LL))(
           *((_QWORD *)this + 13),
           a2);
}
