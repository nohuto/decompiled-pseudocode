/*
 * XREFs of ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x1800F4088
 * Callers:
 *     ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x1800F66D4 (-search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1800F67F0 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 */

__int64 __fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(
        __int64 a1)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_WORD *)(a1 + 14) & 0x400) == 0 )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  if ( (*(_WORD *)(a1 + 14) & 0x1000) == 0 )
    return *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFLL;
  return a1;
}
