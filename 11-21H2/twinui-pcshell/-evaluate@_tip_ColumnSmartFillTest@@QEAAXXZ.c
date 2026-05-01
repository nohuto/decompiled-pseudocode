/*
 * XREFs of ?evaluate@_tip_ColumnSmartFillTest@@QEAAXXZ @ 0x1805A7974
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@EEAAXXZ @ 0x1805A7940 (-evaluate@-$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ColumnSmartFillTest::evaluate(_tip_ColumnSmartFillTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v4; // ax
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  const char *v10; // rdx
  const char *v11; // rax
  __int64 v12; // rcx
  const char *v13; // r9
  __int16 v14; // ax
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  const char *v18; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v4 = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)v2 & 0x200) != 0 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( *((_DWORD *)this + 3) > v5 || (v6 = *((_DWORD *)this + 5), v5 > v6) )
    {
      v18 = tip::details::reason_string((tip::details *)"reason::pos_outside_work_area", a2);
      if ( *(_BYTE *)(v17 + 72) )
        return;
      *(_BYTE *)(v17 + 72) = 3;
      *(_WORD *)(v17 + 74) = 1;
    }
    else
    {
      if ( *((_DWORD *)this + 10) <= v5 && v5 <= *((_DWORD *)this + 12) )
      {
        v7 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
        v8 = MulDiv(v6 - *((_DWORD *)this + 3), 96, *((_DWORD *)this + 7));
        v9 = MulDiv(v7, 96, *((_DWORD *)this + 7));
        if ( v8 >= *((_DWORD *)this + 8) )
        {
          if ( v9 >= *((_DWORD *)this + 9) )
          {
            v16 = *(_QWORD *)this;
            if ( !*(_BYTE *)(*(_QWORD *)this + 72LL) )
            {
              *(_QWORD *)(v16 + 80) = 0LL;
              *(_BYTE *)(v16 + 72) = 1;
              *(_WORD *)(v16 + 74) = 0x8000;
            }
            return;
          }
          v15 = tip::details::reason_string((tip::details *)"reason::result_rect_too_short", v10);
          v12 = *(_QWORD *)this;
          v13 = v15;
          if ( *(_BYTE *)(*(_QWORD *)this + 72LL) )
            return;
          *(_BYTE *)(v12 + 72) = 3;
          v14 = 4;
        }
        else
        {
          v11 = tip::details::reason_string((tip::details *)"reason::result_rect_too_narrow", v10);
          v12 = *(_QWORD *)this;
          v13 = v11;
          if ( *(_BYTE *)(*(_QWORD *)this + 72LL) )
            return;
          v14 = 3;
          *(_BYTE *)(v12 + 72) = 3;
        }
        *(_WORD *)(v12 + 74) = v14;
        *(_QWORD *)(v12 + 80) = v13;
        return;
      }
      v18 = tip::details::reason_string((tip::details *)"reason::pos_outside_result_rect", a2);
      if ( *(_BYTE *)(v17 + 72) )
        return;
      *(_BYTE *)(v17 + 72) = 3;
      *(_WORD *)(v17 + 74) = 2;
    }
    *(_QWORD *)(v17 + 80) = v18;
    return;
  }
  if ( !*(_BYTE *)(v2 + 72) )
  {
    *(_BYTE *)(v2 + 72) = 3;
    v4 = 16385;
LABEL_4:
    *(_WORD *)(v2 + 74) = v4;
    *(_QWORD *)(v2 + 80) = 0LL;
  }
}
