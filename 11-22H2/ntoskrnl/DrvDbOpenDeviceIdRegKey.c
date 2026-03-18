/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140A6C9D8
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140876770 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140876E44 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A6B568 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140A6CDFC (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140877088 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
