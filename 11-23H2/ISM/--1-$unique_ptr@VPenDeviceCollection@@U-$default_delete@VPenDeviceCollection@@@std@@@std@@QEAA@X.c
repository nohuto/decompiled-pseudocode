/*
 * XREFs of ??1?$unique_ptr@VPenDeviceCollection@@U?$default_delete@VPenDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E48F0
 * Callers:
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003AEC4 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     _PenDeviceCollection::Create_::_1_::dtor$0 @ 0x18006E17E (_PenDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VPenDeviceCollection@@@std@@QEBAXPEAVPenDeviceCollection@@@Z @ 0x1800E4978 (--R-$default_delete@VPenDeviceCollection@@@std@@QEBAXPEAVPenDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<PenDeviceCollection>::~unique_ptr<PenDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<PenDeviceCollection>::operator()();
  return result;
}
