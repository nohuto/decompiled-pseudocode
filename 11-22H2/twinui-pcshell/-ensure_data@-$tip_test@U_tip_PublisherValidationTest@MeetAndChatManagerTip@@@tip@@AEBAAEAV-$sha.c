/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@@std@@XZ @ 0x180099134
 * Callers:
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180098F3C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1806C3554 (-TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocol.c)
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1806C3864 (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@@std@@QEAA@XZ @ 0x1800991C4 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerT.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall tip::tip_test<MeetAndChatManagerTip::_tip_PublisherValidationTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xD0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest>>::_Ref_count_obj2<tip::details::test_merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest>>(v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
