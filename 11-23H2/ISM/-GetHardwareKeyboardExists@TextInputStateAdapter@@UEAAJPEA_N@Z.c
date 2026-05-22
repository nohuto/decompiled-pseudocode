/*
 * XREFs of ?GetHardwareKeyboardExists@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x1801F3D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetHardwareKeyboardExists(TextInputStateAdapter *this, bool *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, bool *))(**((_QWORD **)this + 4) + 192LL))(*((_QWORD *)this + 4), a2);
}
