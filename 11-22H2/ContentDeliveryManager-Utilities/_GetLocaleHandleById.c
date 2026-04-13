/*
 * XREFs of _GetLocaleHandleById @ 0x18000D928
 * Callers:
 *     _Tolower @ 0x180005FCC (_Tolower.c)
 *     _Toupper @ 0x18000E3D8 (_Toupper.c)
 *     _Strcoll @ 0x180021AAC (_Strcoll.c)
 *     _Getdateorder @ 0x180021BA4 (_Getdateorder.c)
 *     _Wcscoll @ 0x180021C04 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x180021D08 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E38 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
