/*
 * XREFs of ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x180064C94
 * Callers:
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180066930 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x180101E34 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$?0PEAD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEAD0AEBV?$allocator@D@1@@Z @ 0x1800646FC (--$-0PEAD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEAD0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@D_K@std@@YAPEADPEAD_K@Z @ 0x180064784 (--$_UIntegral_to_buff@D_K@std@@YAPEADPEAD_K@Z.c)
 */

_QWORD *__fastcall std::to_string(_QWORD *a1, signed __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)std::_UIntegral_to_buff<char,unsigned __int64>((__int64)v5, a2);
  }
  else
  {
    v3 = (_BYTE *)(std::_UIntegral_to_buff<char,unsigned __int64>((__int64)v5, -a2) - 1);
    *v3 = 45;
  }
  std::string::string(a1, (__int64)v3, (__int64)v5);
  return a1;
}
