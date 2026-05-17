/*
 * XREFs of RtlpHpQueryVA @ 0x180058CE8
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegContextInitialize @ 0x180054F9C (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x180055BD4 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrRelease @ 0x180058608 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180120620 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x180120770 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1801207CC (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x180058C48 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  RtlpHpVaMgrCtxQuery((__int64)&unk_18017B768, a1, (__int64)v7);
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v8;
  return v7[0];
}
