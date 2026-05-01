/*
 * XREFs of HampIpcChannelObjectCompareObjectsForTree @ 0x180008A60
 * Callers:
 *     HamIpcChannelAddCallback @ 0x180002750 (HamIpcChannelAddCallback.c)
 *     HamCreateActivityEx @ 0x1800054D0 (HamCreateActivityEx.c)
 *     RmpClientRegisterActivityHostCallbacks @ 0x180009450 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientAcquireResourceSet @ 0x180009680 (RmpClientAcquireResourceSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectCompareObjectsForTree(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 40) + 64LL))();
}
