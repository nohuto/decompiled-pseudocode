/*
 * XREFs of DbgkpLkmdIsMemoryBlockPresentFromCallback @ 0x14093B050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdIsMemoryBlockPresentFromCallback(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 16440))(a1 + 0x4000);
}
