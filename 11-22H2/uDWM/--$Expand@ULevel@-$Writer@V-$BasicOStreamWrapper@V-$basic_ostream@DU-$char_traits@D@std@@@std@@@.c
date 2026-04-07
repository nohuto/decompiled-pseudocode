/*
 * XREFs of ??$Expand@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1800EF16C
 * Callers:
 *     ?StartArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x1800F1F68 (-StartArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@.c)
 *     ?StartObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x1800F2004 (-StartObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v1 = a1[2];
  if ( v1 )
  {
    v4 = ((unsigned __int64)(a1[4] - v1 + 1) >> 1) + a1[4] - v1;
  }
  else
  {
    if ( !*a1 )
    {
      v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             1LL);
      v1 = a1[2];
      *a1 = v3;
      a1[1] = v3;
    }
    v4 = a1[5];
  }
  v5 = a1[3] - v1 + 16;
  if ( v4 >= v5 )
    v5 = v4;
  return tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v5);
}
