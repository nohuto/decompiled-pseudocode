/*
 * XREFs of ?evaluate@_tip_AppPrelaunch@@QEAAXXZ @ 0x180698B70
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXXZ @ 0x180249EC0 (-evaluate@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 */

void __fastcall _tip_AppPrelaunch::evaluate(_tip_AppPrelaunch *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  const char *v5; // rax
  __int64 v6; // r9
  __int16 v7; // dx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r9

  if ( !*((_BYTE *)this + 16) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::no_prelaunch", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 5;
      *(_QWORD *)(v4 + 160) = v2;
    }
    return;
  }
  if ( (*((_DWORD *)this + 5) & 0xFFFFFFFD) != 0 )
  {
    v5 = tip::details::reason_string((tip::details *)"reason::should_prelaunch_policy_failed_read", a2);
    v7 = 2;
LABEL_6:
    tip2::test_data_base<_tip_AppPrelaunch_id>::__fail<enum _tip_AppPrelaunch::reason>(v6, v7, (__int64)v5);
    return;
  }
  if ( *((__int64 *)this + 3) > 3000 )
  {
    v5 = tip::details::reason_string((tip::details *)"reason::delay_unexpectedly_long", a2);
    v7 = 4;
    goto LABEL_6;
  }
  if ( *((__int64 *)this + 3) <= 500 )
  {
    if ( !tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called((__int64)this) )
      tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v11);
  }
  else
  {
    v8 = tip::details::reason_string((tip::details *)"reason::delay_unexpectedly_long", a2);
    tip2::test_data_base<_tip_AppPrelaunch_id>::__warn<enum _tip_AppPrelaunch::reason>(v10, v9, (__int64)v8);
  }
}
