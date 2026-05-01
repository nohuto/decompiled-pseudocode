/*
 * XREFs of ?evaluate@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180785898
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXXZ @ 0x18028CAB0 (-evaluate@-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Inte.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest::evaluate(
        winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest *this)
{
  const char *v1; // rax
  __int64 v2; // r9
  __int16 v3; // dx
  __int64 v6; // rax

  if ( !*((_QWORD *)this + 4) )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::group_id_property_not_set", 0LL);
    v3 = 1;
LABEL_3:
    tip2::test_data_base<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest_id>::__fail<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest::reason>(
      v2,
      v3,
      (__int64)v1);
    return;
  }
  if ( !*((_BYTE *)this + 52) )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::operation_property_not_set", 0LL);
    v3 = 2;
    goto LABEL_3;
  }
  if ( !*((_BYTE *)this + 60) )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::final_pin_state_property_not_set", 0LL);
    v3 = 3;
    goto LABEL_3;
  }
  if ( !*((_BYTE *)this + 52) )
    std::_Throw_bad_optional_access();
  if ( !*((_DWORD *)this + 12) && *((_BYTE *)this + 60) && *((_DWORD *)this + 14) == 1 )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::pin_operation_final_state_not_correct", 0LL);
    v3 = 4;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 12) == 1 && *((_BYTE *)this + 60) && *((_DWORD *)this + 14) == 0 )
  {
    v1 = tip::details::reason_string((tip::details *)"reason::unpin_operation_final_state_not_correct", 0LL);
    v3 = 5;
    goto LABEL_3;
  }
  v6 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v6 + 56) & 0x200) != 0 )
  {
    tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed((__int64)this);
  }
  else if ( !*(_BYTE *)(v6 + 152) )
  {
    *(_BYTE *)(v6 + 152) = 3;
    *(_WORD *)(v6 + 154) = 16385;
    *(_QWORD *)(v6 + 160) = 0LL;
  }
}
