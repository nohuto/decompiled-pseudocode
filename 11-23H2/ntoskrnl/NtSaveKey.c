/*
 * XREFs of NtSaveKey @ 0x140A0EBB0
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140A0EBD0 (NtSaveKeyEx.c)
 */

__int64 __fastcall NtSaveKey(__int64 a1, __int64 a2)
{
  return NtSaveKeyEx(a1, a2, 1LL);
}
