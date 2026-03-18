/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x14053BC24
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14093A868 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14093B16C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 16448))(a1 + 0x4000);
}
