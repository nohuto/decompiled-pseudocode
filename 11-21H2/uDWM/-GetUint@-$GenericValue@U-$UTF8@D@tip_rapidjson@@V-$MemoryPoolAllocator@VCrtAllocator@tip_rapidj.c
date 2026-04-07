/*
 * XREFs of ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x1800F4128
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F2FCC (--$serialize@VJSONInputArchive@cereal@@@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@QE.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F7204 (--$serialize@VJSONInputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 */

__int64 __fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(
        _BYTE *a1)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a1[14] & 0x40) == 0 )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  return *(unsigned int *)a1;
}
