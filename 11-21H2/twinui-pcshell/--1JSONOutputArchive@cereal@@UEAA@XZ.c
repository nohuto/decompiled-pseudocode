/*
 * XREFs of ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180121074
 * Callers:
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180120CE4 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$1 @ 0x1802188C0 (_tip--details--test_common_data_0_--data_--_1_--dtor$1.c)
 *     _tip::details::test_common_data_1_::data_::_1_::dtor$1 @ 0x1802201A2 (_tip--details--test_common_data_1_--data_--_1_--dtor$1.c)
 *     ??_EJSONOutputArchive@cereal@@UEAAPEAXI@Z @ 0x18034D9D0 (--_EJSONOutputArchive@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180087F24 (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     ?_Tidy@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAXXZ @ 0x180089004 (-_Tidy@-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@ce.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x18034E364 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 */

void __fastcall cereal::JSONOutputArchive::~JSONOutputArchive(cereal::JSONOutputArchive *this)
{
  void **v2; // rbx
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &cereal::JSONOutputArchive::`vftable';
  v2 = (void **)((char *)this + 456);
  v3 = (unsigned __int64)(*((_QWORD *)this + 60) + *((_QWORD *)this + 61) - 1LL) >> 2;
  v4 = (*((_DWORD *)this + 120) + *((_DWORD *)this + 122) - 1) & 3;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * (v3 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v4) == 1 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject(
      (_QWORD **)this + 41,
      v4);
  }
  else if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * (v3 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v4) == 3 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray((char *)this + 328);
  }
  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy(v2);
  v5 = *v2;
  *v2 = 0LL;
  operator delete(v5, 0x10uLL);
  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy((_QWORD *)this + 52);
  v6 = (void *)*((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = 0LL;
  operator delete(v6, 0x10uLL);
  free(*((void **)this + 44));
  operator delete(*((void **)this + 43), 1uLL);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>(this);
}
