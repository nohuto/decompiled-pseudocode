/*
 * XREFs of ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1805D0A00
 * Callers:
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1805D1704 (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180126B8C (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

char __fastcall Utils::ProtocolLauncher::IsTrustedPublisher(__int64 *a1)
{
  unsigned __int64 v1; // rdi
  GUID **v2; // rbx
  __int64 v3; // rsi
  GUID *v4; // r8
  unsigned __int64 v5; // r9
  int v6; // eax

  v1 = a1[1];
  v2 = (GUID **)off_1806698E0;
  v3 = *a1;
  while ( 1 )
  {
    v4 = *v2;
    v5 = -1LL;
    do
      ++v5;
    while ( *((_WORD *)&v4->Data1 + v5) );
    LOBYTE(v6) = std::_Traits_compare<std::char_traits<unsigned short>>(v3, v1, (__int64)v4, v5);
    if ( !v6 )
      break;
    if ( ++v2 == &`CRunnableTask::QueryInterface'::`2'::qit )
      return 0;
  }
  return 1;
}
