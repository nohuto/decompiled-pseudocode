/*
 * XREFs of ??1?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@QEAA@XZ @ 0x1800601E8
 * Callers:
 *     _GestureServices::GetDCompStatisticsAndLogTelemetry_::_1_::dtor$0 @ 0x180060BB0 (_GestureServices--GetDCompStatisticsAndLogTelemetry_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagCOMPOSITION_TARGET_ID>::~vector<tagCOMPOSITION_TARGET_ID>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
