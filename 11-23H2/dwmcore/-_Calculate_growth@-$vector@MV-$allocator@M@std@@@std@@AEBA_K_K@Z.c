/*
 * XREFs of ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801BB980
 * Callers:
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x1801B7EC4 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Insert_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@1@PEBH1Uforward_iterator_tag@1@@Z @ 0x1801BECD0 (--$_Insert_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1802416F8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x180241B40 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x180241C3C (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802427A4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Insert_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1Uforward_iterator_tag@1@@Z @ 0x180251954 (--$_Insert_range@PEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x18026C3D8 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<float>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
