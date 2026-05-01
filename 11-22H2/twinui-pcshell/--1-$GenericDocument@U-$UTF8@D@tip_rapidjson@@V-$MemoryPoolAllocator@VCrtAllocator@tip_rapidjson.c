/*
 * XREFs of ??1?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA@XZ @ 0x18018D3D4
 * Callers:
 *     ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18018D35C (--1JSONInputArchive@cereal@@UEAA@XZ.c)
 *     _cereal::JSONInputArchive::JSONInputArchive_::_1_::dtor$2 @ 0x1802C45AD (_cereal--JSONInputArchive--JSONInputArchive_--_1_--dtor$2.c)
 * Callees:
 *     ??_G?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAXI@Z @ 0x18018D414 (--_G-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAXI@Z.c)
 */

void __fastcall tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::~GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
    tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::`scalar deleting destructor'(v2);
  free(*(void **)(a1 + 48));
  operator delete(*(void **)(a1 + 40), 1uLL);
}
