/*
 * XREFs of ??$SkipWhitespace@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@@tip_rapidjson@@YAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@0@@Z @ 0x1803488B8
 * Callers:
 *     ??$Parse@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@QEAA?AUParseResult@1@AEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180346310 (--$Parse@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjs.c)
 *     ??$ParseArray@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180346454 (--$ParseArray@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ??$ParseObject@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180347CD4 (--$ParseObject@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     ?Take@?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADXZ @ 0x18022C41C (-Take@-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADX.c)
 */

__int64 __fastcall tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(_QWORD *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = std::istream::peek(*a1);
    if ( (_DWORD)result == -1 || (_BYTE)result != 32 && (_BYTE)result != 10 && (_BYTE)result != 13 && (_BYTE)result != 9 )
      break;
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a1);
  }
  return result;
}
