/*
 * XREFs of ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1806745D8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXXZ @ 0x180225200 (-evaluate@-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 *     ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x1802E9736 (-RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z.c)
 */

void __fastcall _tip_SmartFillTest::evaluate(_tip_SmartFillTest *this)
{
  __int64 v1; // rax
  __int64 v2; // r9
  const char *v3; // rdx
  const struct Geometry::CRect *v4; // rcx
  __int64 v5; // r9
  const char *v6; // rax
  __int64 v7; // r9
  __int16 v8; // dx
  const struct Geometry::CRect *v9; // rcx
  const struct Geometry::CRect *v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // r10
  char v13; // r11
  int v14; // eax
  char v15; // r11
  int v16; // ecx
  int v17; // eax
  int v18; // ecx

  v1 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v1 + 80) )
  {
    if ( tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called((__int64)this) )
      return;
    if ( !RectContainsRect((const struct Geometry::CRect *)(v2 + 32), (const struct Geometry::CRect *)(v2 + 16))
      || !RectContainsRect(v4, (const struct Geometry::CRect *)(v5 + 48)) )
    {
      goto LABEL_6;
    }
    if ( *(_BYTE *)(v11 + 84) != v13 )
    {
      if ( !RectContainsRect(v9, (const struct Geometry::CRect *)(v11 + 68)) )
        goto LABEL_6;
      if ( _tip_SmartFillTest::HorizontalSnapToValid[16 * *(unsigned int *)(v11 + 64) + *(unsigned int *)(v11 + 88)] == v13 )
      {
LABEL_12:
        v6 = tip::details::reason_string((tip::details *)"reason::snap_target_invalid", v3);
        v8 = 2;
        goto LABEL_7;
      }
      if ( *v12 != *(_DWORD *)v3 )
      {
        v14 = *(_DWORD *)(v11 + 76);
        if ( *v12 != v14 && *(_DWORD *)(v11 + 56) != *(_DWORD *)v3 && *(_DWORD *)(v11 + 56) != v14 )
        {
LABEL_17:
          v6 = tip::details::reason_string((tip::details *)"reason::smart_fill_rect_not_to_target", v3);
          v8 = 3;
          goto LABEL_7;
        }
      }
    }
    if ( *(_BYTE *)(v11 + 108) == v13 )
    {
LABEL_25:
      v18 = *(_DWORD *)(v11 + 64);
      if ( ((v18 & 2) == 0 || *v12 == *(_DWORD *)v10)
        && ((v18 & 8) == 0 || *(_DWORD *)(v11 + 56) == *(_DWORD *)(v11 + 40))
        && ((v18 & 1) == 0 || *(_DWORD *)(v11 + 52) == *(_DWORD *)(v11 + 36))
        && ((v18 & 4) == 0 || *(_DWORD *)(v11 + 60) == *(_DWORD *)(v11 + 44)) )
      {
        tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v11);
        return;
      }
      v6 = tip::details::reason_string((tip::details *)"reason::smart_fill_rect_not_anchored", v3);
      v8 = 4;
LABEL_7:
      tip2::test_data_base<_tip_SmartFillTest_id>::__fail<enum _tip_SmartFillTest::reason>(v7, v8, (__int64)v6);
      return;
    }
    if ( RectContainsRect(v10, (const struct Geometry::CRect *)(v11 + 92)) )
    {
      if ( _tip_SmartFillTest::VerticalSnapToValid[16 * *(unsigned int *)(v11 + 64) + *(unsigned int *)(v11 + 112)] == v15 )
        goto LABEL_12;
      v16 = *(_DWORD *)(v11 + 96);
      if ( *(_DWORD *)(v11 + 52) != v16 )
      {
        v17 = *(_DWORD *)(v11 + 104);
        if ( *(_DWORD *)(v11 + 52) != v17 && *(_DWORD *)(v11 + 60) != v16 && *(_DWORD *)(v11 + 60) != v17 )
          goto LABEL_17;
      }
      goto LABEL_25;
    }
LABEL_6:
    v6 = tip::details::reason_string((tip::details *)"reason::rect_not_in_work_area", v3);
    v8 = 1;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 0x4000;
    *(_QWORD *)(v1 + 160) = 0LL;
  }
}
