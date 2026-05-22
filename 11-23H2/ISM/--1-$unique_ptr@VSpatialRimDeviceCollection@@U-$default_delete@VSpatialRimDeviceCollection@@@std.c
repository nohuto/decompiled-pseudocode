/*
 * XREFs of ??1?$unique_ptr@VSpatialRimDeviceCollection@@U?$default_delete@VSpatialRimDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800D7AA4
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18003B214 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     _SpatialRimDeviceCollection::Create_::_1_::dtor$0 @ 0x18006E1EA (_SpatialRimDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x1800D7F48 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SpatialRimDeviceCollection>::~unique_ptr<SpatialRimDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SpatialRimDeviceCollection>::operator()();
  return result;
}
