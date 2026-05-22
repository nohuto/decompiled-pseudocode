/*
 * XREFs of wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800CCA80
 * Callers:
 *     _GazeHidDevice::TrySetTrackingEnabled_::_1_::dtor$0 @ 0x1800CCFEF (_GazeHidDevice--TrySetTrackingEnabled_--_1_--dtor$0.c)
 *     _GazeHidDevice::TryUpdateCalibrationState_::_1_::dtor$0 @ 0x1800CD133 (_GazeHidDevice--TryUpdateCalibrationState_--_1_--dtor$0.c)
 *     _GazeHidDevice::TryUpdateDisplayMapping_::_1_::dtor$0 @ 0x1800CD348 (_GazeHidDevice--TryUpdateDisplayMapping_--_1_--dtor$0.c)
 *     _GazeHidParser::CreateReportForProperty_::_1_::dtor$0 @ 0x1801818D4 (_GazeHidParser--CreateReportForProperty_--_1_--dtor$0.c)
 *     _GazeHidParser::FindCollectionForProperty_::_1_::dtor$0 @ 0x180181A3E (_GazeHidParser--FindCollectionForProperty_--_1_--dtor$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___(
        __int64 a1)
{
  void *v1; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = **(void ***)a1;
    if ( v1 )
      operator delete[](v1);
  }
}
