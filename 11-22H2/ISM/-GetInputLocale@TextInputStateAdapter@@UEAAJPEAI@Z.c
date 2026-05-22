/*
 * XREFs of ?GetInputLocale@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x180200C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputLocale(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2);
}
