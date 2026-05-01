/*
 * XREFs of ?evaluate@_tip_VDSlideAnimationPerfTest@@QEAAXXZ @ 0x180607964
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@EEAAXXZ @ 0x180607950 (-evaluate@-$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_VDSlideAnimationPerfTest::evaluate(_tip_VDSlideAnimationPerfTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int16 v6; // cx
  const char *v7; // rax
  __int16 v8; // r10
  __int64 *v9; // r9
  __int64 v10; // rdx
  char v11; // cl
  __int64 *v12; // r9
  char v13; // r10
  __int64 *v14; // r9
  char v15; // r10
  __int64 *v16; // r9
  char v17; // r10
  __int64 *v18; // r9
  char v19; // r10
  __int64 *v20; // r9
  char v21; // r10
  __int64 *v22; // r9
  char v23; // r10
  __int64 *v24; // r9
  char v25; // r10
  __int64 *v26; // r9
  char v27; // r10
  __int16 v28; // ax

  if ( *((_BYTE *)this + 14) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::animationNotNeeded", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 72) = v3 + 4;
    v6 = v3 + 6;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 8) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::failedToInitializeHotkeyWindow", a2);
    v10 = *v9;
    if ( *(_BYTE *)(*v9 + 72) != (_BYTE)v8 )
      return;
    v11 = 3;
    *(_WORD *)(v10 + 74) = v8;
LABEL_8:
    *(_QWORD *)(v10 + 80) = v7;
    goto LABEL_42;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedToAddWindowIntoCollection", a2);
    v5 = *v12;
    if ( *(_BYTE *)(*v12 + 72) != v13 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedToMakeBackgroundThumbnail", a2);
    v5 = *v14;
    if ( *(_BYTE *)(*v14 + 72) != v15 )
      return;
    *(_BYTE *)(v5 + 72) = 4;
    v6 = 8;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 10) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedToCreateAdjacentDesktop", a2);
    v5 = *v16;
    if ( *(_BYTE *)(*v16 + 72) != v17 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::focusNotChanged", a2);
    v5 = *v18;
    if ( *(_BYTE *)(*v18 + 72) != v19 )
      return;
    *(_BYTE *)(v5 + 72) = 4;
    v6 = 7;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 11) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::failedToSwitchDesktop", a2);
    v10 = *v20;
    if ( *(_BYTE *)(*v20 + 72) != v21 )
      return;
    v11 = 3;
    *(_WORD *)(v10 + 74) = 3;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 12) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedToCommitAnimation", a2);
    v5 = *v22;
    if ( *(_BYTE *)(*v22 + 72) != v23 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 4;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 13) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::failedToAnimate", a2);
    v5 = *v24;
    if ( *(_BYTE *)(*v24 + 72) != v25 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 5;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 18) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::stretchBltBitfailed", a2);
    v5 = *v26;
    if ( *(_BYTE *)(*v26 + 72) != v27 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v6 = 9;
LABEL_4:
    *(_WORD *)(v5 + 74) = v6;
    *(_QWORD *)(v5 + 80) = v2;
    return;
  }
  v10 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) == *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( (*(_DWORD *)v10 & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v10 + 72) )
        return;
      v11 = 1;
      v28 = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v10 + 72) )
        return;
      v11 = 3;
      v28 = 16385;
    }
  }
  else
  {
    if ( *(_BYTE *)(v10 + 72) )
      return;
    v11 = 3;
    v28 = 0x4000;
  }
  *(_QWORD *)(v10 + 80) = 0LL;
  *(_WORD *)(v10 + 74) = v28;
LABEL_42:
  *(_BYTE *)(v10 + 72) = v11;
}
