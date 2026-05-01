/*
 * XREFs of ?evaluate@_tip_SnapLayoutProviderTest@@QEAAXXZ @ 0x18067FDB4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXXZ @ 0x1802298A0 (-evaluate@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802E2D4C (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x1802E9736 (-RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z.c)
 */

void __fastcall _tip_SnapLayoutProviderTest::evaluate(_tip_SnapLayoutProviderTest *this, const char *a2)
{
  _tip_SnapLayoutProviderTest *v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  __int16 v5; // dx
  const char *v6; // rdx
  __int64 v7; // r9
  const char *v8; // rdx
  const struct tagPOINT *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rax

  v2 = this;
  if ( !*((_BYTE *)this + 16) || *((_BYTE *)this + 17) )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::missing_critical_data", a2);
    v5 = 3;
LABEL_3:
    tip2::test_data_base<_tip_SnapLayoutProviderTest_id>::__fail<enum _tip_SnapLayoutProviderTest::reason>(
      v4,
      v5,
      (__int64)v3);
    return;
  }
  if ( !*((_BYTE *)this + 18) )
  {
    if ( !RectContainsRect(
            (_tip_SnapLayoutProviderTest *)((char *)this + 28),
            (_tip_SnapLayoutProviderTest *)((char *)this + 60)) )
    {
LABEL_7:
      v3 = tip::details::reason_string((tip::details *)"reason::snap_region_outside_monitor", v6);
      v5 = 2;
      goto LABEL_3;
    }
    if ( !Geometry::CRect::Contains((Geometry::CRect *)(v7 + 60), (const struct tagPOINT *)(v7 + 20)) )
      goto LABEL_9;
  }
  if ( !RectContainsRect(
          (_tip_SnapLayoutProviderTest *)((char *)v2 + 44),
          (_tip_SnapLayoutProviderTest *)((char *)v2 + 76)) )
    goto LABEL_7;
  if ( !Geometry::CRect::Contains((Geometry::CRect *)(v10 + 76), v9) )
  {
LABEL_9:
    v3 = tip::details::reason_string((tip::details *)"reason::invalid_snap_region_for_point", v8);
    v5 = 1;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(v11 + 8);
  if ( *(_BYTE *)(v13 + 152) == (_BYTE)v12 )
  {
    *(_BYTE *)(v13 + 152) = 1;
    *(_WORD *)(v13 + 154) = 0x8000;
    *(_QWORD *)(v13 + 160) = v12;
  }
}
