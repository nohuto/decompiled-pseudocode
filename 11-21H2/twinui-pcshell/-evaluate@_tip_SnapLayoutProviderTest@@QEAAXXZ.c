/*
 * XREFs of ?evaluate@_tip_SnapLayoutProviderTest@@QEAAXXZ @ 0x1805AD114
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SnapLayoutProviderTest@@@details@tip@@EEAAXXZ @ 0x1805AD100 (-evaluate@-$test_merged_data@U_tip_SnapLayoutProviderTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1804B8170 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x1805A7254 (-RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z.c)
 */

void __fastcall _tip_SnapLayoutProviderTest::evaluate(_tip_SnapLayoutProviderTest *this, const char *a2)
{
  _tip_SnapLayoutProviderTest *v2; // r9
  const char *v3; // rax
  __int64 *v4; // r9
  __int64 v5; // rdx
  char v6; // r11
  __int16 v7; // cx
  const char *v8; // rdx
  __int64 v9; // r9
  __int64 *v10; // r9
  char v11; // r11
  const char *v12; // rdx
  __int64 *v13; // r9
  char v14; // r11
  const struct tagPOINT *v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r9
  __int64 v18; // r11
  __int64 v19; // rax

  v2 = this;
  if ( !*((_BYTE *)this + 8) || *((_BYTE *)this + 9) )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::missing_critical_data", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != v6 )
      return;
    v7 = 3;
    *(_BYTE *)(v5 + 72) = 3;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 10) )
    goto LABEL_13;
  if ( !RectContainsRect(
          (_tip_SnapLayoutProviderTest *)((char *)this + 20),
          (_tip_SnapLayoutProviderTest *)((char *)this + 52)) )
    goto LABEL_8;
  if ( Geometry::CRect::Contains((Geometry::CRect *)(v9 + 52), (const struct tagPOINT *)(v9 + 12)) )
  {
LABEL_13:
    if ( !RectContainsRect(
            (_tip_SnapLayoutProviderTest *)((char *)v2 + 36),
            (_tip_SnapLayoutProviderTest *)((char *)v2 + 68)) )
    {
LABEL_8:
      v3 = tip::details::reason_string((tip::details *)"reason::snap_region_outside_monitor", v8);
      v5 = *v10;
      if ( *(_BYTE *)(*v10 + 72) == v11 )
      {
        *(_BYTE *)(v5 + 72) = 3;
        v7 = 2;
LABEL_4:
        *(_WORD *)(v5 + 74) = v7;
        *(_QWORD *)(v5 + 80) = v3;
        return;
      }
      return;
    }
    if ( Geometry::CRect::Contains((Geometry::CRect *)(v16 + 68), v15) )
    {
      v19 = *v17;
      if ( *(_BYTE *)(*v17 + 72) == (_BYTE)v18 )
      {
        *(_QWORD *)(v19 + 80) = v18;
        *(_BYTE *)(v19 + 72) = 1;
        *(_WORD *)(v19 + 74) = 0x8000;
      }
      return;
    }
  }
  v3 = tip::details::reason_string((tip::details *)"reason::invalid_snap_region_for_point", v12);
  v5 = *v13;
  if ( *(_BYTE *)(*v13 + 72) == v14 )
  {
    *(_BYTE *)(v5 + 72) = 3;
    v7 = 1;
    goto LABEL_4;
  }
}
