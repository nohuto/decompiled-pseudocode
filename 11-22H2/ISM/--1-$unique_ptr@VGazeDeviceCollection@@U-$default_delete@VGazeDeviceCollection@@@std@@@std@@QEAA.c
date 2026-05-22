/*
 * XREFs of ??1?$unique_ptr@VGazeDeviceCollection@@U?$default_delete@VGazeDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800F0388
 * Callers:
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800371C0 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     _GazeDeviceCollection::Create_::_1_::dtor$0 @ 0x1800807FB (_GazeDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VGazeDeviceCollection@@@std@@QEBAXPEAVGazeDeviceCollection@@@Z @ 0x1800F03A8 (--R-$default_delete@VGazeDeviceCollection@@@std@@QEBAXPEAVGazeDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<GazeDeviceCollection>::~unique_ptr<GazeDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<GazeDeviceCollection>::operator()();
  return result;
}
