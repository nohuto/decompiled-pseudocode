/*
 * XREFs of ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x1803518A8
 * Callers:
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x180345B8C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_180345B8C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18034C21C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18034C684 (--0runtime_error@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@@Z.c)
 *     ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x18034E738 (-GetString@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall cereal::JSONInputArchive::Iterator::search(cereal::JSONInputArchive::Iterator *this, const char *a2)
{
  size_t v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  const char *String; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v13[32]; // [rsp+58h] [rbp-50h] BYREF

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 0LL;
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)this + 1) )
  {
LABEL_9:
    v9 = std::string::string(v12, (__int64)a2);
    v10 = (_QWORD *)std::operator+<char>((__int64)v13, (__int64)"JSON missing:", v9);
    std::runtime_error::runtime_error((__int64)pExceptionObject, v10);
    pExceptionObject[0] = &cereal::Exception::`vftable';
    throw (cereal::Exception *)pExceptionObject;
  }
  while ( 1 )
  {
    String = (const char *)tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v6);
    if ( !strncmp(a2, String, v4) )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( String[v8] );
      if ( v8 == v4 )
        break;
    }
    v6 += 32LL;
    ++v5;
    if ( v6 == *((_QWORD *)this + 1) )
      goto LABEL_9;
  }
  *((_QWORD *)this + 3) = v5;
}
