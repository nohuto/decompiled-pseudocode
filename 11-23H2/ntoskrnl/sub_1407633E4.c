/*
 * XREFs of sub_1407633E4 @ 0x1407633E4
 * Callers:
 *     sub_14076286C @ 0x14076286C (sub_14076286C.c)
 *     WbHeapExecuteCall @ 0x140762C10 (WbHeapExecuteCall.c)
 *     WbGetWarbirdThread @ 0x1407631A4 (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x1407E0EC0 (WbFreeWarbirdProcess.c)
 *     sub_1407E98BC @ 0x1407E98BC (sub_1407E98BC.c)
 * Callees:
 *     sub_1407E9D74 @ 0x1407E9D74 (sub_1407E9D74.c)
 */

signed __int64 __fastcall sub_1407633E4(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1407E9D74();
  }
  return v2;
}
