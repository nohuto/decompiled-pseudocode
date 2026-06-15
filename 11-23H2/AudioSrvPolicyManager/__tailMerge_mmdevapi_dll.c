/*
 * XREFs of __tailMerge_mmdevapi_dll @ 0x1800177EA
 * Callers:
 *     __imp_load_GenerateMediaEvent @ 0x1800177DE (__imp_load_GenerateMediaEvent.c)
 *     __imp_load_mmdDevGetMMDeviceFromInterfaceId @ 0x180017869 (__imp_load_mmdDevGetMMDeviceFromInterfaceId.c)
 *     __imp_load_mmdDevGetInterfaceIdFromMMDevice @ 0x18001787B (__imp_load_mmdDevGetInterfaceIdFromMMDevice.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800474C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_mmdevapi_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_mmdevapi_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
