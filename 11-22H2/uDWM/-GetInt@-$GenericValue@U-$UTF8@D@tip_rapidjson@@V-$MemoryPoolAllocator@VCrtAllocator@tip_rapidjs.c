/*
 * XREFs of ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1800F1BE8
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F48CC (--$serialize@VJSONInputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066340 (_CxxThrowException_0.c)
 */

__int64 __fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(
        _BYTE *a1)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a1[14] & 0x20) == 0 )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  return *(unsigned int *)a1;
}
