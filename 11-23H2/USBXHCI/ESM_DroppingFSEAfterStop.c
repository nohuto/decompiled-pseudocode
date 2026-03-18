/*
 * XREFs of ESM_DroppingFSEAfterStop @ 0x1C000D990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_DroppingFSEAfterStop(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 32LL), 0x40u);
  return 29LL;
}
