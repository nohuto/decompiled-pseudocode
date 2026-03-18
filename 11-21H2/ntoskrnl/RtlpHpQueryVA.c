/*
 * XREFs of RtlpHpQueryVA @ 0x140362864
 * Callers:
 *     RtlpHpSegSegmentInitialize @ 0x140242028 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402491D0 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14024EFA8 (RtlpHpSegMgrVaCtxInitialize.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     RtlpHpGetOwnerHeap @ 0x140366CB0 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140367E68 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrRelease @ 0x14036843C (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegContextInitialize @ 0x14036F8F8 (RtlpHpSegContextInitialize.c)
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1403628D8 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int128 *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 HeapManager; // rax
  __int64 v7; // r10
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v9 = *a2;
  HeapManager = RtlpHpEnvGetHeapManager(&v9);
  RtlpHpVaMgrCtxQuery(HeapManager + 88, v7, &v10);
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = DWORD2(v11);
  return v10;
}
