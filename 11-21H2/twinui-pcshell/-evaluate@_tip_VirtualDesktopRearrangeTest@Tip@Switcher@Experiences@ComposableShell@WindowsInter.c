/*
 * XREFs of ?evaluate@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ @ 0x18048E364
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@EEAAXXZ @ 0x18048E350 (-evaluate@-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composab.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::evaluate(
        WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 *v4; // r10
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 *v7; // r10
  char v8; // r11
  __int64 *v9; // r10
  char v10; // r11
  __int64 v11; // r9
  char v12; // cl
  __int16 v13; // ax
  const char *v14; // rax
  __int64 v15; // r9
  char v16; // r11
  __int16 v17; // cx
  char v18; // r11

  if ( !*((_DWORD *)this + 2) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::no_activation_method", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 3;
    v6 = v3 + 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::requesting_same_index", a2);
    v5 = *v7;
    if ( *(_BYTE *)(*v7 + 72) == v8 )
    {
      *(_BYTE *)(v5 + 72) = 3;
      v6 = 2;
LABEL_4:
      *(_WORD *)(v5 + 74) = v6;
      *(_QWORD *)(v5 + 80) = v2;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 18) )
  {
    v11 = *(_QWORD *)this;
    if ( (**(_DWORD **)this & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v11 + 72) )
        return;
      v12 = 3;
      v13 = 16385;
LABEL_23:
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_WORD *)(v11 + 74) = v13;
      *(_BYTE *)(v11 + 72) = v12;
      return;
    }
    if ( *((_BYTE *)this + 19) )
    {
      v14 = tip::details::reason_string((tip::details *)"reason::success_ui_already_rearranged", a2);
      if ( *(_BYTE *)(v15 + 72) != v16 )
        return;
      *(_BYTE *)(v15 + 72) = 1;
      v17 = 4;
    }
    else
    {
      if ( !*((_BYTE *)this + 16) )
      {
        if ( *(_BYTE *)(v11 + 72) )
          return;
        v12 = 1;
        v13 = 0x8000;
        goto LABEL_23;
      }
      v14 = tip::details::reason_string((tip::details *)"reason::success_modifications_suspended", a2);
      if ( *(_BYTE *)(v15 + 72) != v18 )
        return;
      *(_BYTE *)(v15 + 72) = 1;
      v17 = 5;
    }
    *(_WORD *)(v15 + 74) = v17;
    *(_QWORD *)(v15 + 80) = v14;
    return;
  }
  v2 = tip::details::reason_string((tip::details *)"reason::moved_desktop_disappeared", a2);
  v5 = *v9;
  if ( *(_BYTE *)(*v9 + 72) == v10 )
  {
    v6 = 3;
    *(_BYTE *)(v5 + 72) = 3;
    goto LABEL_4;
  }
}
