/*
 * XREFs of ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800A2F10
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$4 @ 0x1800A2DEB (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$4.c)
 * Callees:
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x1800A30BC (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

__int64 __fastcall std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()();
  return result;
}
