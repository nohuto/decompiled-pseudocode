/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140A2F540
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x140785234 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbDispatchDeviceId @ 0x1407880F0 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A2E0D0 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140A2F964 (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
