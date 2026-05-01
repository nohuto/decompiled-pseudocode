/*
 * XREFs of ??1ClearStackOnExit@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA@XZ @ 0x180417508
 * Callers:
 *     _tip_rapidjson::GenericDocument_tip_rapidjson::UTF8_char__tip_rapidjson::MemoryPoolAllocator_tip_rapidjson::CrtAllocator__tip_rapidjson::CrtAllocator_::ParseStream_272_tip_rapidjson::UTF8_char__tip_rapidjson::BasicIStreamWrapper_std::basic_istream_char_std::char_traits_char________::_1_::dtor$1 @ 0x1802C42FC (_tip_rapidjson--GenericDocument_tip_rapidjson--UTF8_char__tip_rapidjson--MemoryPool_ea_1802C42FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::ClearStackOnExit::~ClearStackOnExit(
        __int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)a1;
  v2 = *(void **)(*(_QWORD *)a1 + 48LL);
  *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v2;
  free(v2);
  result = 0LL;
  v1[6] = 0LL;
  v1[7] = 0LL;
  v1[8] = 0LL;
  return result;
}
