/*
 * XREFs of imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C002AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C002B06C (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int (__fastcall *EvtDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  __int64 v6; // rsi
  _FX_DRIVER_GLOBALS *v9; // rbx
  FxIrpPreprocessInfo *PreprocessInfo; // rax
  FxIrpPreprocessInfo *v11; // rcx
  ULONG v12; // ecx
  void *v13; // rax
  unsigned __int8 *v14; // rcx
  ULONG Tag; // ecx
  void *v17; // rax
  FX_POOL **v18; // rax
  unsigned __int16 v19; // r9
  __m128i v20; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = MajorFunction;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  if ( !EvtDeviceWdmIrpPreprocess )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( NumMinorFunctions && !MinorFunctions )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( MajorFunction >= 0x1Cu )
  {
    WPP_IFR_SF_(v9, 2u, 0x12u, 0x1Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 3221225485LL;
  }
  PreprocessInfo = DeviceInit->PreprocessInfo;
  v11 = PreprocessInfo;
  if ( !PreprocessInfo )
  {
    Tag = v9->Tag;
    v17 = retaddr;
    v20.m128i_i64[0] = 0LL;
    v20.m128i_i64[1] = 64LL;
    if ( !v9->FxPoolTrackingOn )
      v17 = 0LL;
    v18 = FxPoolAllocator(v9, &v9->FxPoolFrameworks, &v20, 0x2B8uLL, Tag, v17);
    if ( v18 )
      FxIrpPreprocessInfo::FxIrpPreprocessInfo((FxIrpPreprocessInfo *)v18);
    else
      PreprocessInfo = 0LL;
    DeviceInit->PreprocessInfo = PreprocessInfo;
    v11 = PreprocessInfo;
    if ( !PreprocessInfo )
    {
      v19 = 31;
LABEL_26:
      WPP_IFR_SF_(v9, 2u, 0x12u, v19, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225626LL;
    }
  }
  if ( !NumMinorFunctions )
  {
LABEL_13:
    v11->Dispatch[v6].EvtDevicePreprocess = EvtDeviceWdmIrpPreprocess;
    return 0LL;
  }
  if ( !PreprocessInfo->Dispatch[v6].NumMinorFunctions )
  {
    v12 = v9->Tag;
    v13 = retaddr;
    v20.m128i_i64[0] = 0LL;
    v20.m128i_i64[1] = 64LL;
    if ( !v9->FxPoolTrackingOn )
      v13 = 0LL;
    DeviceInit->PreprocessInfo->Dispatch[v6].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                   v9,
                                                                                   &v9->FxPoolFrameworks,
                                                                                   &v20,
                                                                                   NumMinorFunctions,
                                                                                   v12,
                                                                                   v13);
    v14 = DeviceInit->PreprocessInfo->Dispatch[v6].MinorFunctions;
    if ( !v14 )
    {
      v19 = 33;
      goto LABEL_26;
    }
    memmove(v14, MinorFunctions, NumMinorFunctions);
    DeviceInit->PreprocessInfo->Dispatch[v6].NumMinorFunctions = NumMinorFunctions;
    v11 = DeviceInit->PreprocessInfo;
    goto LABEL_13;
  }
  WPP_IFR_SF_(v9, 2u, 0x12u, 0x20u, WPP_FxDeviceInitApi_cpp_Traceguids);
  return 3221225488LL;
}
