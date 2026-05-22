/*
 * XREFs of ?GetInputPaneTryShow@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801F3FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputPaneTryShow(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 144LL))(
           *((_QWORD *)this + 4),
           a2);
}
