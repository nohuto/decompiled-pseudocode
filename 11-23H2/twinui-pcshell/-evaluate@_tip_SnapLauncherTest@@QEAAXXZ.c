/*
 * XREFs of ?evaluate@_tip_SnapLauncherTest@@QEAAXXZ @ 0x1802232B4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXXZ @ 0x1802232A0 (-evaluate@-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x180673838 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 */

void __fastcall _tip_SnapLauncherTest::evaluate(_tip_SnapLauncherTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  __int16 v5; // cx
  int SnapRegionAnchorLocations; // ebx
  __int64 v7; // r8
  const char *v8; // rdx
  __int64 v9; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::snap_id_not_found", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    v5 = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 18) )
  {
    if ( *((_BYTE *)this + 19) )
    {
      SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(
                                    (char *)this + 36,
                                    (char *)this + 52,
                                    *((unsigned int *)this + 17));
      if ( (unsigned int)SnapLayoutHelpers::GetSnapRegionAnchorLocations((char *)this + 20, (char *)this + 52, v7) == SnapRegionAnchorLocations )
      {
        v9 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v9 + 152) )
        {
          *(_QWORD *)(v9 + 160) = 0LL;
          *(_BYTE *)(v9 + 152) = 1;
          *(_WORD *)(v9 + 154) = 0x8000;
        }
      }
      else
      {
        v3 = tip::details::reason_string((tip::details *)"reason::not_snapped_correctly", v8);
        v4 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v4 + 152) )
        {
          *(_BYTE *)(v4 + 152) = 3;
          v5 = 4;
          goto LABEL_4;
        }
      }
    }
    else
    {
      v3 = tip::details::reason_string((tip::details *)"reason::monitor_not_found", a2);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        v5 = 3;
        *(_BYTE *)(v4 + 152) = 3;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v3 = tip::details::reason_string((tip::details *)"reason::snap_id_never_used", a2);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 3;
      v5 = 2;
LABEL_4:
      *(_WORD *)(v4 + 154) = v5;
      *(_QWORD *)(v4 + 160) = v3;
    }
  }
}
