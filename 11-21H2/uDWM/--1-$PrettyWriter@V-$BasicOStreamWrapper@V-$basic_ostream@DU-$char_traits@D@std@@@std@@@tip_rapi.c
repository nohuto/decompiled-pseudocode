/*
 * XREFs of ??1?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA@XZ @ 0x1800F32AC
 * Callers:
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$1 @ 0x1800659DE (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::~PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>(
        __int64 a1)
{
  free(*(void **)(a1 + 24));
  return (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
           WPF::g_pProcessHeap,
           *(_QWORD *)(a1 + 16));
}
