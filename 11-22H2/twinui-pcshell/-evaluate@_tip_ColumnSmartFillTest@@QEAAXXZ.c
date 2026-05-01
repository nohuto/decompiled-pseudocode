/*
 * XREFs of ?evaluate@_tip_ColumnSmartFillTest@@QEAAXXZ @ 0x1806744A8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXXZ @ 0x1802251E0 (-evaluate@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 *     ??$__fail@W4reason@_tip_ColumnSmartFillTest@@@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXW4reason@_tip_ColumnSmartFillTest@@PEBD@Z @ 0x1802247F0 (--$__fail@W4reason@_tip_ColumnSmartFillTest@@@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@ti.c)
 */

void __fastcall _tip_ColumnSmartFillTest::evaluate(_tip_ColumnSmartFillTest *this)
{
  __int64 v1; // rax
  const char *v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  const char *v9; // rdx
  const char *v10; // rax
  __int16 v11; // dx

  v1 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v1 + 80) )
  {
    if ( !*(_BYTE *)(v1 + 152) )
    {
      *(_BYTE *)(v1 + 152) = 3;
      *(_WORD *)(v1 + 154) = 0x4000;
      *(_QWORD *)(v1 + 160) = 0LL;
    }
  }
  else
  {
    if ( tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called((__int64)this) )
      return;
    v4 = *((_DWORD *)this + 4);
    if ( *((_DWORD *)this + 5) > v4 || (v5 = *((_DWORD *)this + 7), v4 > v5) )
    {
      v10 = tip::details::reason_string((tip::details *)"reason::pos_outside_work_area", v3);
      v11 = 1;
    }
    else if ( *((_DWORD *)this + 12) > v4 || v4 > *((_DWORD *)this + 14) )
    {
      v10 = tip::details::reason_string((tip::details *)"reason::pos_outside_result_rect", v3);
      v11 = 2;
    }
    else
    {
      v6 = *((_DWORD *)this + 8) - *((_DWORD *)this + 6);
      v7 = MulDiv(v5 - *((_DWORD *)this + 5), 96, *((_DWORD *)this + 9));
      v8 = MulDiv(v6, 96, *((_DWORD *)this + 9));
      if ( v7 >= *((_DWORD *)this + 10) )
      {
        if ( v8 >= *((_DWORD *)this + 11) )
        {
          tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed((__int64)this);
          return;
        }
        v10 = tip::details::reason_string((tip::details *)"reason::result_rect_too_short", v9);
        v11 = 4;
      }
      else
      {
        v10 = tip::details::reason_string((tip::details *)"reason::result_rect_too_narrow", v9);
        v11 = 3;
      }
    }
    tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__fail<enum _tip_ColumnSmartFillTest::reason>(
      (__int64)this,
      v11,
      (__int64)v10);
  }
}
