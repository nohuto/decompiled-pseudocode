/*
 * XREFs of ?GetTransferXYFocusToSoftwareKeyboard@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x180200FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetTransferXYFocusToSoftwareKeyboard(
        TextInputStateAdapter *this,
        unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 248LL))(
           *((_QWORD *)this + 4),
           a2);
}
