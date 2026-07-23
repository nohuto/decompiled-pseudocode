/*
 * XREFs of RtlpHpQueryVA @ 0x140315BA8
 * Callers:
 *     ExGetHeapFromVA @ 0x1402AC680 (ExGetHeapFromVA.c)
 *     RtlpHpSegMgrRelease @ 0x140315558 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140315970 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegSegmentInitialize @ 0x140315AF8 (RtlpHpSegSegmentInitialize.c)
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     RtlpHpLargeAlloc @ 0x14032432C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140356348 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14035BCF8 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x1403891E0 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x14024FB50 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&unk_140C71158, a1, (__int64)&v7);
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = DWORD2(v8);
  return v7;
}
