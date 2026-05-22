/*
 * XREFs of ??1?$unique_ptr@VGazeDeviceCollection@@U?$default_delete@VGazeDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E1428
 * Callers:
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003AF90 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     _GazeDeviceCollection::Create_::_1_::dtor$0 @ 0x18006E190 (_GazeDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VGazeDeviceCollection@@@std@@QEBAXPEAVGazeDeviceCollection@@@Z @ 0x1800E1448 (--R-$default_delete@VGazeDeviceCollection@@@std@@QEBAXPEAVGazeDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<GazeDeviceCollection>::~unique_ptr<GazeDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<GazeDeviceCollection>::operator()();
  return result;
}
