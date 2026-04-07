/*
 * XREFs of ?evaluate@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ @ 0x1800F5FC4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXXZ @ 0x1800F5FB0 (-evaluate@-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800F66AC (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest::evaluate(
        Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 *v4; // r9
  __int64 v5; // rdx
  __int64 *v6; // r9
  __int16 v7; // cx
  __int16 v8; // r10
  __int64 *v9; // r9
  __int64 *v10; // r9
  char v11; // r10
  __int64 v12; // rax

  if ( *((_DWORD *)this + 2) != 1 )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::wrong_transition_type", a2);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 72) )
      return;
    *(_WORD *)(v5 + 74) = v3;
    *(_BYTE *)(v5 + 72) = v3 + 2;
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 3) <= 1u )
  {
    if ( *((_BYTE *)this + 16) )
    {
      if ( *((_BYTE *)this + 17) )
      {
        v12 = *(_QWORD *)this;
        if ( !*(_BYTE *)(*(_QWORD *)this + 72LL) )
        {
          *(_BYTE *)(v12 + 72) = 1;
          *(_WORD *)(v12 + 74) = 0x8000;
          *(_QWORD *)(v12 + 80) = 0LL;
        }
      }
      else
      {
        v2 = tip::details::reason_string((tip::details *)"reason::state_complete_not_called", a2);
        v5 = *v10;
        if ( *(_BYTE *)(*v10 + 72) == v11 )
        {
          *(_BYTE *)(v5 + 72) = 3;
          v7 = 4;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v2 = tip::details::reason_string((tip::details *)"reason::visual_not_deleted", a2);
      v5 = *v9;
      if ( *(_BYTE *)(*v9 + 72) == (_BYTE)v8 )
      {
        v7 = v8 + 3;
        *(_BYTE *)(v5 + 72) = v8 + 3;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v2 = tip::details::reason_string((tip::details *)"reason::hold_screen_capture_more_than_once", a2);
    v5 = *v6;
    if ( !*(_BYTE *)(*v6 + 72) )
    {
      *(_BYTE *)(v5 + 72) = 3;
      v7 = 2;
LABEL_8:
      *(_WORD *)(v5 + 74) = v7;
LABEL_4:
      *(_QWORD *)(v5 + 80) = v2;
    }
  }
}
