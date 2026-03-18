/*
 * XREFs of ZwCreateMutant @ 0x14041C460
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140B752A8 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
