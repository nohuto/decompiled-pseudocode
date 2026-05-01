/*
 * XREFs of ?evaluate@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXXZ @ 0x18051CDA4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@EEAAXXZ @ 0x18051CD90 (-evaluate@-$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppActivationTest::evaluate(
        KeyboardHostingTipTests::_tip_InputAppActivationTest *this)
{
  const char *v1; // rax
  __int64 *v2; // r9
  __int16 v3; // dx
  const char *v4; // rax
  __int64 *v5; // r9
  __int16 v6; // dx
  const char *v7; // rax
  __int64 *v8; // r9
  __int16 v9; // dx
  __int64 v10; // rax
  __int16 v11; // cx
  int v12; // ecx

  if ( *((_BYTE *)this + 17) )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::session_shutting_down", 0LL);
    v3 = 4;
LABEL_3:
    tip::test_data_base<KeyboardHostingTipTests::_tip_InputAppActivationTest_id>::__ignore<enum KeyboardHostingTipTests::_tip_InputAppActivationTest::reason>(
      v2,
      v3,
      (__int64)v1);
    return;
  }
  if ( *((_BYTE *)this + 23) )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::shutdown_services", 0LL);
    v3 = 9;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 24) )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::connected_standby", 0LL);
    v3 = 12;
    goto LABEL_3;
  }
  if ( *((_BYTE *)this + 18) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::relaunch_immediately", 0LL);
    v6 = 5;
LABEL_10:
    tip::test_data_base<KeyboardHostingTipTests::_tip_InputAppActivationTest_id>::__succeed<enum KeyboardHostingTipTests::_tip_InputAppActivationTest::reason>(
      v5,
      v6,
      (__int64)v4);
    return;
  }
  if ( *((_BYTE *)this + 19) )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::relaunch_after_few_seconds", 0LL);
    v6 = 6;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::another_activation_started", 0LL);
    v9 = 7;
LABEL_15:
    tip::test_data_base<KeyboardHostingTipTests::_tip_InputAppActivationTest_id>::__fail<enum KeyboardHostingTipTests::_tip_InputAppActivationTest::reason>(
      v8,
      v9,
      (__int64)v7);
    return;
  }
  if ( *((_BYTE *)this + 22) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::get_input_app_id_failed", 0LL);
    v9 = 8;
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::retry_count_max_reached", 0LL);
    v9 = 1;
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 8) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::input_app_id_invalid", 0LL);
    v9 = 2;
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 20) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::dont_relaunch", 0LL);
    v9 = 10;
    goto LABEL_15;
  }
  if ( !*((_BYTE *)this + 9) )
  {
    v7 = tip::details::reason_string((tip::details *)"reason::not_activated", 0LL);
    v9 = 0;
    goto LABEL_15;
  }
  v10 = *(_QWORD *)this;
  if ( (**(_DWORD **)this & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v10 + 72) )
      return;
    *(_BYTE *)(v10 + 72) = 3;
    v11 = 16385;
    goto LABEL_37;
  }
  v12 = *((_DWORD *)this + 3);
  if ( v12 >= 100 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::success_with_retry_100_or_more", 0LL);
    v6 = 13;
    goto LABEL_10;
  }
  if ( v12 >= 10 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::success_with_retry_10_or_more", 0LL);
    v6 = 11;
    goto LABEL_10;
  }
  if ( v12 > 0 )
  {
    v4 = tip::details::reason_string((tip::details *)"reason::success_with_retry", 0LL);
    v6 = 3;
    goto LABEL_10;
  }
  if ( !*(_BYTE *)(v10 + 72) )
  {
    *(_BYTE *)(v10 + 72) = 1;
    v11 = 0x8000;
LABEL_37:
    *(_QWORD *)(v10 + 80) = 0LL;
    *(_WORD *)(v10 + 74) = v11;
  }
}
