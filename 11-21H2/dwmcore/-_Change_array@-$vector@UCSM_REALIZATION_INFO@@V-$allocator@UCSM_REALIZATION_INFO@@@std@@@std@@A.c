/*
 * XREFs of ?_Change_array@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAXQEAUCSM_REALIZATION_INFO@@_K1@Z @ 0x1800E3C1C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E3B38 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_R.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CSM_REALIZATION_INFO>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
