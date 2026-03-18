/*
 * XREFs of DbgkpLkmdSnapThread @ 0x14053BFF4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14093A868 (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeEnumerateQueueApc @ 0x140573030 (KeEnumerateQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14093AE74 (DbgkpLkmdLaunchSnapApc.c)
 */

__int64 __fastcall DbgkpLkmdSnapThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KeEnumerateQueueApc(a3, DbgkpLkmdEnumApcOrDpcDataCallback, a1, 0LL);
  return DbgkpLkmdLaunchSnapApc(a1, a2, a3, a4);
}
