/*
 * XREFs of ?_Change_array@?$vector@UTOUCH_TELEMETRY_UPDATE_INFO@@V?$allocator@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@std@@AEAAXQEAUTOUCH_TELEMETRY_UPDATE_INFO@@_K1@Z @ 0x1801A61D8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@UTOUCH_TELEMETRY_UPDATE_INFO@@V?$allocator@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@std@@QEAAPEAUTOUCH_TELEMETRY_UPDATE_INFO@@QEAU2@AEBU2@@Z @ 0x1801A4D18 (--$_Emplace_reallocate@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@-$vector@UTOUCH_TELEMETRY_UPDATE_INFO@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<TOUCH_TELEMETRY_UPDATE_INFO>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 216 * a3;
  result = a2 + 216 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
