/*
 * XREFs of ZwCreateMutant @ 0x14041BDA0
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140B76138 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
