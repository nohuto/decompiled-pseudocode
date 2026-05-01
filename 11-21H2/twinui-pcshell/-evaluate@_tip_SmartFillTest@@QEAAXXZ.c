/*
 * XREFs of ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1805A7B34
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@EEAAXXZ @ 0x1805A7960 (-evaluate@-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x1805A7254 (-RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z.c)
 */

void __fastcall _tip_SmartFillTest::evaluate(_tip_SmartFillTest *this)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int16 v3; // ax
  const char *v4; // rdx
  const struct Geometry::CRect *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v8; // r11
  char v9; // r10
  __int16 v10; // cx
  _DWORD *v11; // rbx
  const struct Geometry::CRect *v12; // rcx
  __int64 v13; // r8
  const struct Geometry::CRect *v14; // r11
  char v15; // r10
  int v16; // eax
  const char *v17; // r11
  char v18; // r10
  int v19; // eax
  int v20; // ecx
  const char *v21; // rdx
  const char *v22; // rcx
  __int64 v23; // r9
  char v24; // r10
  __int16 v25; // r11
  char v26; // r10

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) == *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( (*(_DWORD *)v1 & 0x200) == 0 )
    {
      v2 = 0LL;
      if ( *(_BYTE *)(v1 + 72) )
        return;
      *(_BYTE *)(v1 + 72) = 3;
      v3 = 16385;
      goto LABEL_45;
    }
    if ( !RectContainsRect((_tip_SmartFillTest *)((char *)this + 24), (_tip_SmartFillTest *)((char *)this + 8)) )
      goto LABEL_8;
    v11 = (_DWORD *)(v6 + 40);
    if ( !RectContainsRect(v5, (const struct Geometry::CRect *)(v6 + 40)) )
      goto LABEL_8;
    if ( *(_BYTE *)(v13 + 76) != (_BYTE)v2 )
    {
      if ( !RectContainsRect(v12, (const struct Geometry::CRect *)(v13 + 60)) )
        goto LABEL_8;
      if ( _tip_SmartFillTest::HorizontalSnapToValid[16 * *(unsigned int *)(v13 + 56) + *(unsigned int *)(v13 + 80)] == (_BYTE)v2 )
      {
LABEL_15:
        v8 = tip::details::reason_string((tip::details *)"reason::snap_target_invalid", v4);
        if ( *(_BYTE *)(v7 + 72) != v15 )
          return;
        v10 = 2;
LABEL_10:
        *(_BYTE *)(v7 + 72) = 3;
        *(_WORD *)(v7 + 74) = v10;
        *(_QWORD *)(v7 + 80) = v8;
        return;
      }
      if ( *v11 != *(_DWORD *)v4 )
      {
        v16 = *(_DWORD *)(v13 + 68);
        if ( *v11 != v16 && *(_DWORD *)(v13 + 48) != *(_DWORD *)v4 && *(_DWORD *)(v13 + 48) != v16 )
        {
LABEL_21:
          v17 = tip::details::reason_string((tip::details *)"reason::smart_fill_rect_not_to_target", v4);
          if ( *(_BYTE *)(v1 + 72) != v18 )
            return;
          v3 = 3;
          *(_BYTE *)(v1 + 72) = 3;
          *(_QWORD *)(v1 + 80) = v17;
          goto LABEL_46;
        }
      }
    }
    if ( *(_BYTE *)(v13 + 100) == (_BYTE)v2 )
      goto LABEL_30;
    if ( RectContainsRect(v14, (const struct Geometry::CRect *)(v13 + 84)) )
    {
      if ( _tip_SmartFillTest::VerticalSnapToValid[16 * *(unsigned int *)(v13 + 56) + *(unsigned int *)(v13 + 104)] == (_BYTE)v2 )
        goto LABEL_15;
      v19 = *(_DWORD *)(v13 + 88);
      if ( *(_DWORD *)(v13 + 44) != v19 )
      {
        v20 = *(_DWORD *)(v13 + 96);
        if ( *(_DWORD *)(v13 + 44) != v20 && *(_DWORD *)(v13 + 52) != v19 && *(_DWORD *)(v13 + 52) != v20 )
          goto LABEL_21;
      }
LABEL_30:
      v21 = (const char *)*(unsigned int *)(v13 + 56);
      if ( ((unsigned __int8)v21 & 2) != 0 && *v11 != *(_DWORD *)v14
        || ((unsigned __int8)v21 & 8) != 0 && *(_DWORD *)(v13 + 48) != *(_DWORD *)(v13 + 32)
        || ((unsigned __int8)v21 & 1) != 0 && *(_DWORD *)(v13 + 44) != *(_DWORD *)(v13 + 28) )
      {
        v22 = tip::details::reason_string((tip::details *)"reason::smart_fill_rect_not_anchored", v21);
        if ( *(_BYTE *)(v23 + 72) != v24 )
          return;
        v25 = 4;
      }
      else
      {
        if ( ((unsigned __int8)v21 & 4) == 0 || *(_DWORD *)(v13 + 52) == *(_DWORD *)(v13 + 36) )
        {
          if ( *(_BYTE *)(v1 + 72) != (_BYTE)v2 )
            return;
          *(_BYTE *)(v1 + 72) = 1;
          v3 = 0x8000;
          goto LABEL_45;
        }
        v22 = tip::details::reason_string((tip::details *)"reason::smart_fill_rect_not_anchored", v21);
        if ( *(_BYTE *)(v23 + 72) != v26 )
          return;
      }
      *(_BYTE *)(v23 + 72) = 3;
      *(_WORD *)(v23 + 74) = v25;
      *(_QWORD *)(v23 + 80) = v22;
      return;
    }
LABEL_8:
    v8 = tip::details::reason_string((tip::details *)"reason::rect_not_in_work_area", v4);
    if ( *(_BYTE *)(v7 + 72) != v9 )
      return;
    v10 = 1;
    goto LABEL_10;
  }
  v2 = 0LL;
  if ( *(_BYTE *)(v1 + 72) )
    return;
  *(_BYTE *)(v1 + 72) = 3;
  v3 = 0x4000;
LABEL_45:
  *(_QWORD *)(v1 + 80) = v2;
LABEL_46:
  *(_WORD *)(v1 + 74) = v3;
}
