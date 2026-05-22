/*
 * XREFs of wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800E6098
 * Callers:
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800E64FC (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     _GazeHidDevice::TrySetTrackingEnabled_::_1_::dtor$0 @ 0x1800E6610 (_GazeHidDevice--TrySetTrackingEnabled_--_1_--dtor$0.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800E6624 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     _GazeHidDevice::TryUpdateCalibrationState_::_1_::dtor$0 @ 0x1800E6758 (_GazeHidDevice--TryUpdateCalibrationState_--_1_--dtor$0.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800E676C (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     _GazeHidDevice::TryUpdateDisplayMapping_::_1_::dtor$0 @ 0x1800E696D (_GazeHidDevice--TryUpdateDisplayMapping_--_1_--dtor$0.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801A09C0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     _GazeHidParser::CreateReportForProperty_::_1_::dtor$0 @ 0x1801A0B12 (_GazeHidParser--CreateReportForProperty_--_1_--dtor$0.c)
 *     ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x1801A0B24 (-FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z.c)
 *     _GazeHidParser::FindCollectionForProperty_::_1_::dtor$0 @ 0x1801A0C87 (_GazeHidParser--FindCollectionForProperty_--_1_--dtor$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
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
