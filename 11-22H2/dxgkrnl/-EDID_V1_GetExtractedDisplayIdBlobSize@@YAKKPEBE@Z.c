/*
 * XREFs of ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x1C001F5C8
 * Callers:
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020E8DC (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0010ADC (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetBlockTypeCount@EDID_PARSER@MonDescParser@@QEBAIW4EDID_V1_BLOCK_TYPE@2@@Z @ 0x1C001F61C (-GetBlockTypeCount@EDID_PARSER@MonDescParser@@QEBAIW4EDID_V1_BLOCK_TYPE@2@@Z.c)
 */

__int64 __fastcall EDID_V1_GetExtractedDisplayIdBlobSize(unsigned int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r11d
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+70h] [rbp-18h]

  if ( !a2 || a1 < 0x80 )
    return 0LL;
  v5 = 0LL;
  if ( (int)MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v4, a2, a1) >= 0 )
    return 126 * (unsigned int)MonDescParser::EDID_PARSER::GetBlockTypeCount(v4);
  return v2;
}
