/*
 * XREFs of ?IsInteractive@CProcess@@UEAAHXZ @ 0x180018460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::IsInteractive(CProcess *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 28) + 208LL) != 0;
}
