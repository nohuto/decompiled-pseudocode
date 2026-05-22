/*
 * XREFs of ?GetHardwareKeyboardDeployed@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x180200A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetHardwareKeyboardDeployed(TextInputStateAdapter *this, bool *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, bool *))(**((_QWORD **)this + 4) + 224LL))(*((_QWORD *)this + 4), a2);
}
