/*
 * XREFs of ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1803462A8
 * Callers:
 *     ??$Encode@V?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@@?$UTF8@D@tip_rapidjson@@SAXAEAV?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@1@I@Z @ 0x180345E9C (--$Encode@V-$StackStream@D@-$GenericReader@U-$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rap.c)
 *     ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180346A48 (--$ParseNumber@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 *     ??$ParseString@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@_N@Z @ 0x18034814C (--$ParseString@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 *     ?Pop@?$NumberStream@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@$00$0A@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@QEAAPEBDXZ @ 0x18034F57C (-Pop@-$NumberStream@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(_QWORD *a1)
{
  __int64 v1; // rdx
  void *v3; // rax
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
      v3 = operator new(1uLL);
      v1 = a1[2];
      *a1 = v3;
      a1[1] = v3;
    }
    v4 = a1[5];
  }
  v5 = a1[3] - v1 + 1;
  if ( v4 >= v5 )
    v5 = v4;
  return tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(a1, v5);
}
