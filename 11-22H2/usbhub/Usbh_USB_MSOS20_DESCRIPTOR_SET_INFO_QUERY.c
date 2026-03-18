/*
 * XREFs of Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C0047FF0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        (_DWORD)a3,
        46,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x2Fu,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v9);
    }
  }
  result = PdoExt(a1);
  if ( a4 == 8 )
    v8 = *a3;
  else
    v8 = 0LL;
  *((_QWORD *)result + 361) = v8;
  return result;
}
