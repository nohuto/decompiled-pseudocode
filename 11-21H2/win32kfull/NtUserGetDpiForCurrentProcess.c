/*
 * XREFs of NtUserGetDpiForCurrentProcess @ 0x1C0115050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetDpiForCurrentProcess(__int64 a1)
{
  return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
}
