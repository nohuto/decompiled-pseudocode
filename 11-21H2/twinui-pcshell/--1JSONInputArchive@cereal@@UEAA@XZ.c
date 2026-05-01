/*
 * XREFs of ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18034D288
 * Callers:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180120C60 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     _tip::details::test_common_data_1_::update_from_test_info_::_1_::dtor$2 @ 0x180220163 (_tip--details--test_common_data_1_--update_from_test_info_--_1_--dtor$2.c)
 *     ??_GJSONInputArchive@cereal@@UEAAPEAXI@Z @ 0x18034D990 (--_GJSONInputArchive@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA@XZ @ 0x18034C744 (--1-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson.c)
 */

void __fastcall cereal::JSONInputArchive::~JSONInputArchive(cereal::JSONInputArchive *this)
{
  void *v2; // rcx

  tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::~GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>((__int64)this + 360);
  v2 = (void *)*((_QWORD *)this + 42);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 44) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
  }
  cereal::InputArchive<cereal::JSONInputArchive,0>::~InputArchive<cereal::JSONInputArchive,0>((__int64)this);
}
