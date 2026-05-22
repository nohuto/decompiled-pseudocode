/*
 * XREFs of ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x180088CC0
 * Callers:
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180086E8C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800D1680 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800D18D0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@.c)
 *     ??$_Emplace_reallocate@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEAI@Z @ 0x1800E2BF8 (--$_Emplace_reallocate@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEAI@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180156DC4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Emplace_reallocate@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAPEAW4_Button@@QEAW42@AEAW42@@Z @ 0x1801A67AC (--$_Emplace_reallocate@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QE.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z @ 0x1801A84F4 (-_Clear_and_reserve_geometric@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
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
