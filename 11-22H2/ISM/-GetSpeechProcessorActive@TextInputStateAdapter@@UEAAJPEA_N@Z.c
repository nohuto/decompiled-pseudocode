/*
 * XREFs of ?GetSpeechProcessorActive@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x180200F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetSpeechProcessorActive(TextInputStateAdapter *this, bool *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, bool *))(**((_QWORD **)this + 4) + 328LL))(*((_QWORD *)this + 4), a2);
}
