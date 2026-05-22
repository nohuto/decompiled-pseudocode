/*
 * XREFs of wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800F5018
 * Callers:
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800F547C (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     _GazeHidDevice::TrySetTrackingEnabled_::_1_::dtor$0 @ 0x1800F5590 (_GazeHidDevice--TrySetTrackingEnabled_--_1_--dtor$0.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800F55A4 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     _GazeHidDevice::TryUpdateCalibrationState_::_1_::dtor$0 @ 0x1800F56D8 (_GazeHidDevice--TryUpdateCalibrationState_--_1_--dtor$0.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800F56EC (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     _GazeHidDevice::TryUpdateDisplayMapping_::_1_::dtor$0 @ 0x1800F58ED (_GazeHidDevice--TryUpdateDisplayMapping_--_1_--dtor$0.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801AE9A0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     _GazeHidParser::CreateReportForProperty_::_1_::dtor$0 @ 0x1801AEAF2 (_GazeHidParser--CreateReportForProperty_--_1_--dtor$0.c)
 *     ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x1801AEB04 (-FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z.c)
 *     _GazeHidParser::FindCollectionForProperty_::_1_::dtor$0 @ 0x1801AEC67 (_GazeHidParser--FindCollectionForProperty_--_1_--dtor$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
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
