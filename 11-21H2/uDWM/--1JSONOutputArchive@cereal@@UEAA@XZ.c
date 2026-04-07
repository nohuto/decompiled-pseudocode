/*
 * XREFs of ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180043324
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800423D8 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$1 @ 0x180065905 (_tip--details--test_common_data_0_--data_--_1_--dtor$1.c)
 *     ??_EJSONOutputArchive@cereal@@UEAAPEAXI@Z @ 0x1800F38F0 (--_EJSONOutputArchive@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x1800433F4 (--1-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@cereal.c)
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800438B4 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180043930 (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall cereal::JSONOutputArchive::~JSONOutputArchive(cereal::JSONOutputArchive *this)
{
  char *v2; // rdi
  unsigned __int64 v3; // r9
  __int64 v4; // r8

  *(_QWORD *)this = &cereal::JSONOutputArchive::`vftable';
  v2 = (char *)this + 456;
  v3 = (unsigned __int64)(*((_QWORD *)this + 60) + *((_QWORD *)this + 61) - 1LL) >> 2;
  v4 = (*((_DWORD *)this + 120) + *((_DWORD *)this + 122) - 1) & 3;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * (v3 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v4) == 1 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject((char *)this + 328);
  }
  else if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * (v3 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v4) == 3 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray((char *)this + 328);
  }
  std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(v2);
  std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>((char *)this + 416);
  free(*((void **)this + 44));
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 43));
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>(this);
}
