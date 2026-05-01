/*
 * XREFs of ??$ParseHex4@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAIAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@_K@Z @ 0x180346804
 * Callers:
 *     ??$ParseString@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@_N@Z @ 0x18034814C (--$ParseString@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?Take@?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADXZ @ 0x18022C41C (-Take@-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADX.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseHex4<tip_rapidjson::BasicIStreamWrapper<std::istream>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r10
  int v10; // ebx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v5 = 0;
  while ( 1 )
  {
    v8 = std::istream::peek(*a2);
    v9 = 0;
    if ( v8 != -1 )
      v9 = v8;
    v10 = (char)v9 + 16 * v3;
    if ( (unsigned __int8)(v9 - 48) > 9u )
      break;
    v3 = v10 - 48;
LABEL_10:
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    if ( ++v5 >= 4 )
      return v3;
  }
  if ( (unsigned __int8)(v9 - 65) <= 5u )
  {
    v3 = v10 - 55;
    goto LABEL_10;
  }
  if ( (unsigned __int8)(v9 - 97) <= 5u )
  {
    v3 = v10 - 87;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 48) = 8;
  result = 0LL;
  *(_QWORD *)(a1 + 56) = a3;
  return result;
}
