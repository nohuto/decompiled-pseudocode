/*
 * XREFs of _GetLocaleHandleById @ 0x18000D234
 * Callers:
 *     _Tolower @ 0x18000593C (_Tolower.c)
 *     _Toupper @ 0x18000DCD4 (_Toupper.c)
 *     _Strcoll @ 0x180021390 (_Strcoll.c)
 *     _Getdateorder @ 0x180021488 (_Getdateorder.c)
 *     _Wcscoll @ 0x1800214E8 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800215EC (_Wcsxfrm.c)
 *     _Strxfrm @ 0x18002171C (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
