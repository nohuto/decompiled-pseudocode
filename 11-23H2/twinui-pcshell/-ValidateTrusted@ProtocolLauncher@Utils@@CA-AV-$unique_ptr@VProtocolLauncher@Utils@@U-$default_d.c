/*
 * XREFs of ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1806C3864
 * Callers:
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180098F3C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1806C3554 (-TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocol.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@@std@@XZ @ 0x180099134 (-ensure_data@-$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@AEBAAEAV-$sha.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802E9F74 (-IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 */

_QWORD *__fastcall Utils::ProtocolLauncher::ValidateTrusted(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  HSTRING v6; // rcx
  __int64 v7; // r13
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rcx
  char v10; // di
  _QWORD *v11; // rax
  PCWSTR v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  PCWSTR v15; // rbx
  _BYTE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  std::_Ref_count_base *v19; // rcx
  PCWSTR v21; // [rsp+20h] [rbp-10h] BYREF
  std::_Ref_count_base *v22; // [rsp+28h] [rbp-8h]

  v6 = *(HSTRING *)(*a2 + 16);
  v7 = *(_QWORD *)(*a2 + 24);
  if ( !v6 )
    goto LABEL_5;
  StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
  v21 = StringRawBuffer;
  v9 = -1LL;
  do
    ++v9;
  while ( StringRawBuffer[v9] );
  v22 = (std::_Ref_count_base *)v9;
  v10 = 1;
  if ( !Utils::ProtocolLauncher::IsTrustedPublisher((__int64)&v21) )
LABEL_5:
    v10 = 0;
  if ( !v7 )
  {
    v11 = tip::tip_test<MeetAndChatManagerTip::_tip_PublisherValidationTest>::ensure_data(a3);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v21,
      v11);
    v12 = v21;
    tip::details::test_common_data<0>::begin_update((__int64)(v21 + 4));
    v13 = (__int64)(v12 + 93);
    if ( !v12 )
      v13 = 10LL;
    *(_BYTE *)v13 = 1;
    if ( v12 )
    {
      tip::details::test_common_data<0>::end_update((__int64)(v12 + 4));
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v21);
    }
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
  }
  v14 = tip::tip_test<MeetAndChatManagerTip::_tip_PublisherValidationTest>::ensure_data(a3);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v21,
    v14);
  v15 = v21;
  tip::details::test_common_data<0>::begin_update((__int64)(v21 + 4));
  if ( v10 )
  {
    v16 = (char *)v15 + 187;
    v17 = 11LL;
  }
  else
  {
    v16 = (char *)v15 + 185;
    v17 = 9LL;
  }
  if ( !v15 )
    v16 = (_BYTE *)v17;
  *v16 = 1;
  if ( v15 )
  {
    tip::details::test_common_data<0>::end_update((__int64)(v15 + 4));
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v21);
  }
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( v7 && v10 )
  {
    v18 = *a2;
    *a2 = 0LL;
    *a1 = v18;
  }
  else
  {
    *a1 = 0LL;
  }
  v19 = (std::_Ref_count_base *)a3[1];
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  return a1;
}
