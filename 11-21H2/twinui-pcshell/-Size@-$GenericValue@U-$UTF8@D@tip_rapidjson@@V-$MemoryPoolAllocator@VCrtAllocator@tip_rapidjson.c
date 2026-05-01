/*
 * XREFs of ?Size@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18022C346
 * Callers:
 *     ??$?RV?$SizeTag@AEA_K@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$SizeTag@AEA_K@1@@Z @ 0x180345C54 (--$-RV-$SizeTag@AEA_K@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSO.c)
 *     ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180349D88 (--$load@VJSONInputArchive@cereal@@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x180349E64 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::Size(
        _WORD *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1[7] != 4 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  return *(unsigned int *)a1;
}
