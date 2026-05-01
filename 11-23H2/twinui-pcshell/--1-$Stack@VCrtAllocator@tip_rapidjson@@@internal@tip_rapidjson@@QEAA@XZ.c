/*
 * XREFs of ??1?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAA@XZ @ 0x1804168AC
 * Callers:
 *     _tip_rapidjson::GenericDocument_tip_rapidjson::UTF8_char__tip_rapidjson::MemoryPoolAllocator_tip_rapidjson::CrtAllocator__tip_rapidjson::CrtAllocator_::ParseStream_272_tip_rapidjson::UTF8_char__tip_rapidjson::BasicIStreamWrapper_std::basic_istream_char_std::char_traits_char________::_1_::dtor$0 @ 0x1802C42EA (_tip_rapidjson--GenericDocument_tip_rapidjson--UTF8_char__tip_rapidjson--MemoryPoolAllocator_tip.c)
 *     _cereal::JSONInputArchive::JSONInputArchive_::_1_::dtor$8 @ 0x1802C45D8 (_cereal--JSONInputArchive--JSONInputArchive_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

void __fastcall tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::~Stack<tip_rapidjson::CrtAllocator>(
        __int64 a1)
{
  free(*(void **)(a1 + 16));
  operator delete(*(void **)(a1 + 8));
}
