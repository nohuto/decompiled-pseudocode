/*
 * XREFs of ?GetHardwareKeyboardOrientation@TextInputStateAdapter@@UEAAJPEAW4Orientations@@@Z @ 0x180200B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetHardwareKeyboardOrientation(
        TextInputStateAdapter *this,
        enum Orientations *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum Orientations *))(**((_QWORD **)this + 4) + 200LL))(
           *((_QWORD *)this + 4),
           a2);
}
