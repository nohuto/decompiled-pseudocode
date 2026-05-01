/*
 * XREFs of ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802E9F74
 * Callers:
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1806C3864 (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1802D21B6 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

char __fastcall Utils::ProtocolLauncher::IsTrustedPublisher(__int64 a1)
{
  unsigned __int64 v1; // rdi
  wchar_t **v2; // rbx
  char *v3; // rsi
  char *v4; // r8
  unsigned __int64 v5; // r9
  int v6; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = off_1807F48E0;
  v3 = *(char **)a1;
  while ( 1 )
  {
    v4 = (char *)*v2;
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v4[2 * v5] );
    LOBYTE(v6) = std::_Traits_compare<std::char_traits<unsigned short>>(v3, v1, v4, v5);
    if ( !v6 )
      break;
    if ( ++v2 == (wchar_t **)&tip::details::test_merged_data<_tip_WinXMenuEnumerationTest>::c_details )
      return 0;
  }
  return 1;
}
