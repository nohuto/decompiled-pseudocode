/*
 * XREFs of sub_1407635D4 @ 0x1407635D4
 * Callers:
 *     sub_140762A5C @ 0x140762A5C (sub_140762A5C.c)
 *     WbHeapExecuteCall @ 0x140762E00 (WbHeapExecuteCall.c)
 *     WbGetWarbirdThread @ 0x140763394 (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x1407E1190 (WbFreeWarbirdProcess.c)
 *     sub_1407E9B8C @ 0x1407E9B8C (sub_1407E9B8C.c)
 * Callees:
 *     sub_1407EA044 @ 0x1407EA044 (sub_1407EA044.c)
 */

signed __int64 __fastcall sub_1407635D4(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1407EA044();
  }
  return v2;
}
