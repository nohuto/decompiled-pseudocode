/*
 * XREFs of ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x1800F4188
 * Callers:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x1800F3C90 (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F48CC (--$serialize@VJSONInputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066340 (_CxxThrowException_0.c)
 */

__int64 __fastcall cereal::JSONInputArchive::Iterator::value(__int64 a1)
{
  int v2; // ecx
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  if ( !v2 )
    return *(_QWORD *)(a1 + 16) + 16LL * *(_QWORD *)(a1 + 24);
  if ( v2 != 1 )
  {
    pExceptionObject[1] = "JSONInputArchive";
    pExceptionObject[0] = &cereal::Exception::`vftable';
    throw (cereal::Exception *)pExceptionObject;
  }
  return 32LL * *(_QWORD *)(a1 + 24) + *(_QWORD *)a1 + 16LL;
}
