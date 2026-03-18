/*
 * XREFs of NtUserInitAnsiOem @ 0x1C011D8F0
 * Callers:
 *     <none>
 * Callees:
 *     InitAnsiOem @ 0x1C011D940 (InitAnsiOem.c)
 */

__int64 __fastcall NtUserInitAnsiOem(__int64 a1, __int64 a2)
{
  __int64 inited; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  inited = (int)InitAnsiOem(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return inited;
}
