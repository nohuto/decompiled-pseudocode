/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1805CFD6C
 * Callers:
 *     ?TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1805D141C (-TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocol.c)
 * Callees:
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1805D0290 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@U_String_constructor_concat.c)
 */

void *__fastcall std::operator+<unsigned short>(void *a1, __int64 a2)
{
  __int64 v3; // rcx
  int v5; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 == 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  std::wstring::wstring(a1, v3, v5, 1LL);
  return a1;
}
