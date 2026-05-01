/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x180008680
 * Callers:
 *     HamCloseActivity @ 0x180005290 (HamCloseActivity.c)
 *     HampIpcChannelWnfCallback @ 0x180007080 (HampIpcChannelWnfCallback.c)
 *     HampIpcChannelFindCallbackContextByPayload @ 0x180009AF0 (HampIpcChannelFindCallbackContextByPayload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL))();
}
