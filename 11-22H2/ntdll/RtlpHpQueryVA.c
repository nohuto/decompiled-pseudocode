/*
 * XREFs of RtlpHpQueryVA @ 0x18006475C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1800471E0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrRelease @ 0x180065774 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegContextInitialize @ 0x1800662F0 (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x180067138 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1801226A8 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1801227F4 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180122850 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1800647B0 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  RtlpHpVaMgrCtxQuery(&unk_180185A08, a1, v7);
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v8;
  return v7[0];
}
