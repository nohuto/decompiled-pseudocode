/*
 * XREFs of ??1ClearStackOnExit@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@QEAA@XZ @ 0x1801C0930
 * Callers:
 *     _tip_rapidjson::GenericReader_tip_rapidjson::UTF8_char__tip_rapidjson::UTF8_char__tip_rapidjson::CrtAllocator_::Parse_272_tip_rapidjson::BasicIStreamWrapper_std::basic_istream_char_std::char_traits_char______tip_rapidjson::GenericDocument_tip_rapidjson::UTF8_char__tip_rapidjson::MemoryPoolAllocator_tip_rapidjson::CrtAllocator__tip_rapidjson::CrtAllocator____::_1_::dtor$0 @ 0x1802C430E (_tip_rapidjson--GenericReader_tip_rapidjson--UTF8_char__tip_rapidjson--UTF8_char__tip_rapidjson-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ClearStackOnExit::~ClearStackOnExit(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  *(_QWORD *)(*(_QWORD *)a1 + 24LL) = result;
  return result;
}
