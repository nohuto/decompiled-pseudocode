/*
 * XREFs of ?evaluate@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ @ 0x1800F6C74
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXXZ @ 0x1800F6C60 (-evaluate@-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800F3658 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest::evaluate(
        Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 *v4; // r10
  __int64 v5; // rdx
  __int16 v6; // r9
  __int64 *v7; // r10
  __int16 v8; // cx
  __int64 *v9; // r10
  char v10; // r9
  __int64 *v11; // r10
  char v12; // r9
  __int64 v13; // rax

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
  if ( *((_BYTE *)this + 12) )
  {
    if ( *((_BYTE *)this + 13) )
    {
      if ( *((_DWORD *)this + 4) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::ends_on_wrong_rotation_state", a2);
        v5 = *v11;
        if ( *(_BYTE *)(*v11 + 72) == v12 )
        {
          *(_BYTE *)(v5 + 72) = 3;
          v8 = 4;
          goto LABEL_8;
        }
      }
      else
      {
        v13 = *(_QWORD *)this;
        if ( !*(_BYTE *)(*(_QWORD *)this + 72LL) )
        {
          *(_BYTE *)(v13 + 72) = 1;
          *(_WORD *)(v13 + 74) = 0x8000;
          *(_QWORD *)(v13 + 80) = 0LL;
        }
      }
    }
    else
    {
      v2 = tip::details::reason_string((tip::details *)"reason::state_complete_not_called", a2);
      v5 = *v9;
      if ( *(_BYTE *)(*v9 + 72) == v10 )
      {
        v8 = 3;
        *(_BYTE *)(v5 + 72) = 3;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v2 = tip::details::reason_string((tip::details *)"reason::visual_not_deleted", a2);
    v5 = *v7;
    if ( *(_BYTE *)(*v7 + 72) == (_BYTE)v6 )
    {
      *(_BYTE *)(v5 + 72) = v6 + 3;
      v8 = v6 + 2;
LABEL_8:
      *(_WORD *)(v5 + 74) = v8;
LABEL_4:
      *(_QWORD *)(v5 + 80) = v2;
    }
  }
}
