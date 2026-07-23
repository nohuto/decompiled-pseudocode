/*
 * XREFs of sub_140742230 @ 0x140742230
 * Callers:
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140717EE4 @ 0x140717EE4 (sub_140717EE4.c)
 *     sub_1407181CC @ 0x1407181CC (sub_1407181CC.c)
 */

NTSTATUS __fastcall sub_140742230(__int64 a1, __int64 a2, int a3)
{
  __int128 v4; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-50h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-48h] BYREF
  int v8[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v9; // [rsp+50h] [rbp-30h]
  __int128 v10; // [rsp+60h] [rbp-20h]

  plsnFlush.ullOffset = 0LL;
  plsnLastFlushed.ullOffset = 0LL;
  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  v8[0] = 0;
  v8[3] = 0;
  v10 = 0LL;
  v8[1] = 48;
  v4 = *(_OWORD *)(a2 + 88);
  v8[2] = a3;
  v9 = v4;
  v8[0] = sub_1407181CC((__int64)v8, 0x30u);
  result = sub_140717EE4(a1, (__int64)v8, 0x30u, 2, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
