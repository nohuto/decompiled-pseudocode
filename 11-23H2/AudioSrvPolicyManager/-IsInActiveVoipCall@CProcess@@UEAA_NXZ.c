/*
 * XREFs of ?IsInActiveVoipCall@CProcess@@UEAA_NXZ @ 0x180027740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CProcess::IsInActiveVoipCall(CProcess *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 28) + 208LL) & 0x10) != 0;
}
