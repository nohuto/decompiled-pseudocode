/*
 * XREFs of __tailMerge_devobj_dll @ 0x18006A45F
 * Callers:
 *     __imp_load_DevObjCreateDeviceInfoList @ 0x18006A453 (__imp_load_DevObjCreateDeviceInfoList.c)
 *     __imp_load_DevObjGetClassDevs @ 0x18006A4DE (__imp_load_DevObjGetClassDevs.c)
 *     __imp_load_DevObjEnumDeviceInfo @ 0x18006A4F0 (__imp_load_DevObjEnumDeviceInfo.c)
 *     __imp_load_DevObjOpenDevRegKey @ 0x18006A502 (__imp_load_DevObjOpenDevRegKey.c)
 *     __imp_load_DevObjDestroyDeviceInfoList @ 0x18006A514 (__imp_load_DevObjDestroyDeviceInfoList.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054FA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_devobj_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_devobj_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
