/*
 * XREFs of ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1800F379C
 * Callers:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x1800F3C90 (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F48CC (--$serialize@VJSONInputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 * Callees:
 *     ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x1800F1C2C (-GetString@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x1800F3680 (-search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z.c)
 */

void __fastcall cereal::JSONInputArchive::search(cereal::JSONInputArchive *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 String; // rax
  unsigned __int8 *v5; // rcx
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx

  if ( *((_QWORD *)this + 38) )
  {
    v2 = *((_QWORD *)this + 43);
    if ( *(_DWORD *)(v2 - 8) != 1 )
      goto LABEL_9;
    v3 = *(_QWORD *)(v2 - 40) + 32LL * *(_QWORD *)(v2 - 16);
    if ( v3 == *(_QWORD *)(v2 - 32) )
      goto LABEL_9;
    String = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v3);
    if ( !String )
      goto LABEL_9;
    v5 = (unsigned __int8 *)*((_QWORD *)this + 38);
    v6 = String - (_QWORD)v5;
    do
    {
      v7 = v5[v6];
      v8 = *v5 - v7;
      if ( v8 )
        break;
      ++v5;
    }
    while ( v7 );
    if ( v8 )
LABEL_9:
      cereal::JSONInputArchive::Iterator::search(
        (cereal::JSONInputArchive::Iterator *)(*((_QWORD *)this + 43) - 40LL),
        *((const char **)this + 38));
  }
  *((_QWORD *)this + 38) = 0LL;
}
