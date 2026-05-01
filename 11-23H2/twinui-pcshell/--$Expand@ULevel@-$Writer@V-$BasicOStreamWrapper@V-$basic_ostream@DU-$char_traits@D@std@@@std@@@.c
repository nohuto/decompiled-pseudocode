/*
 * XREFs of ??$Expand@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1800C0F0C
 * Callers:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?StartArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x18019A454 (-StartArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@.c)
 *     ?StartObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x1802D3C5E (-StartObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>(
        _QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 result; // rax

  v2 = 0LL;
  v3 = (void *)a1[2];
  if ( v3 )
  {
    v5 = ((unsigned __int64)(a1[4] - (_QWORD)v3 + 1LL) >> 1) + a1[4] - (_QWORD)v3;
  }
  else
  {
    if ( !*a1 )
    {
      v4 = operator new(1uLL);
      v3 = (void *)a1[2];
      *a1 = v4;
      a1[1] = v4;
    }
    v5 = a1[5];
  }
  v6 = a1[3] - (_QWORD)v3 + 16LL;
  if ( v5 >= v6 )
    v6 = v5;
  v7 = a1[3] - (_QWORD)v3;
  if ( v6 )
    v2 = _o_realloc(v3, v6);
  else
    free(v3);
  a1[2] = v2;
  result = v6 + v2;
  a1[3] = v2 + v7;
  a1[4] = v6 + v2;
  return result;
}
