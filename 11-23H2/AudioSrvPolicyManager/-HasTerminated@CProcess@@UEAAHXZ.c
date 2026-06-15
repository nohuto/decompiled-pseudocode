/*
 * XREFs of ?HasTerminated@CProcess@@UEAAHXZ @ 0x18000AA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CProcess::HasTerminated(CProcess *this)
{
  return *((_DWORD *)this + 104) != 0;
}
