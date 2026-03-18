/*
 * XREFs of ValidateHwnd @ 0x1C002CAE0
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C00D8880 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL, 0LL);
}
