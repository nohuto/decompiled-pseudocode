/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x14053C174
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14093AA68 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14093B36C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 16448))(a1 + 0x4000);
}
