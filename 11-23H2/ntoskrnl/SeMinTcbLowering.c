/*
 * XREFs of SeMinTcbLowering @ 0x140B96C00
 * Callers:
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 SeMinTcbLowering()
{
  if ( (SeCiDebugOptions & 4) != 0 )
    return 1LL;
  if ( KdpBootedNodebug )
    return 0LL;
  return ((unsigned int)SeCiDebugOptions >> 1) & 1;
}
