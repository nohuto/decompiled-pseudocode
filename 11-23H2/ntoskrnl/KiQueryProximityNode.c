/*
 * XREFs of KiQueryProximityNode @ 0x140570F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 KiQueryProximityNode()
{
  return ((__int64 (*)(void))KiNumaQueryProximityNode)();
}
