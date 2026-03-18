/*
 * XREFs of Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C0047810
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_SetPdoEXT_PROPERTY_INSTALLED(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                              WPP_GLOBAL_Control->DeviceExtension,
                              a2,
                              (_DWORD)a3,
                              22,
                              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                              a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0x17u,
                              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                              v8);
    }
  }
  if ( a4 == 4 )
  {
    if ( *a3 )
    {
      result = (_UNKNOWN **)PdoExt(a1);
      *((_DWORD *)result + 355) |= 0x800u;
    }
  }
  return result;
}
