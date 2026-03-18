/*
 * XREFs of imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0054730
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x1C0037BD2 (-SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C00536CC (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C0053808 (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0053E0C (WPP_IFR_SF_qqdd.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C0059728 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00675D8 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0067904 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitializeUsingRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        WDFREQUEST__ *Request,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        unsigned int DmaDirection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_DMA_DIRECTION v9; // edi
  unsigned int _a3; // ebx
  unsigned __int8 v12; // dl
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  unsigned __int16 v15; // r9
  unsigned int Options; // r14d
  int DeviceControlOutputMdl; // eax
  unsigned __int8 v18; // dl
  FxDmaTransactionBase *v19; // r10
  unsigned int ByteCount; // eax
  signed int v21; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp-10h] BYREF
  FxRequest *pReqObj; // [rsp+58h] [rbp-8h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  _MDL *mdl; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+B8h] [rbp+58h]

  ProgramDmaFunction = EvtProgramDmaFunction;
  pDmaTrans = 0LL;
  pReqObj = 0LL;
  mdl = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(pDmaTrans->m_Globals, retaddr);
  v9 = DmaDirection;
  if ( DmaDirection > 1 )
  {
    _a3 = -1073741811;
    WPP_IFR_SF_qqdd(
      m_Globals,
      2u,
      0xFu,
      0xAu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      Request,
      DmaDirection,
      -1073741811);
    return _a3;
  }
  FxObjectHandleGetPtr(pDmaTrans->m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pReqObj);
  CurrentStackLocation = pReqObj->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( v9 )
    {
      WPP_IFR_SF_LqqLd(m_Globals, v12, (unsigned int)pReqObj, 0xBu, traceGuid, v9, DmaTransaction, Request, 3u);
      return 3221225488LL;
    }
    goto LABEL_26;
  }
  if ( MajorFunction == 4 )
  {
    if ( v9 != WdfDmaDirectionWriteToDevice )
    {
      WPP_IFR_SF_LqqLd(m_Globals, v12, (unsigned int)pReqObj, 0xCu, traceGuid, v9, DmaTransaction, Request, 4u);
      return 3221225488LL;
    }
    goto LABEL_26;
  }
  v15 = 14;
  if ( (unsigned __int8)(MajorFunction - 14) > 1u )
  {
    _a3 = -1073741808;
    goto LABEL_29;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0 )
  {
    if ( v9 == WdfDmaDirectionWriteToDevice )
    {
      Options = CurrentStackLocation->Parameters.Create.Options;
LABEL_27:
      DeviceControlOutputMdl = FxRequest::GetMdl(pReqObj, &mdl);
      goto LABEL_28;
    }
LABEL_26:
    Options = CurrentStackLocation->Parameters.Read.Length;
    goto LABEL_27;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 1 )
  {
    if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
    {
      _a3 = -1073741808;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, 0xC0000010);
      FxVerifierDbgBreakPoint(m_Globals);
LABEL_29:
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xFu, 0x10u, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, DmaTransaction, _a3);
      return _a3;
    }
    if ( v9 == WdfDmaDirectionReadFromDevice )
      goto LABEL_14;
    goto LABEL_17;
  }
  if ( v9 != WdfDmaDirectionWriteToDevice )
  {
    v15 = 13;
LABEL_17:
    WPP_IFR_SF_Lqqd(m_Globals, v12, (unsigned int)pReqObj, v15, traceGuid, v9, DmaTransaction, Request);
    return 3221225488LL;
  }
LABEL_14:
  Options = CurrentStackLocation->Parameters.Read.Length;
  DeviceControlOutputMdl = FxRequest::GetDeviceControlOutputMdl(pReqObj, &mdl);
LABEL_28:
  _a3 = DeviceControlOutputMdl;
  if ( DeviceControlOutputMdl < 0 )
    goto LABEL_29;
  if ( !Options )
  {
    _a3 = -1073741808;
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionAPI_cpp_Traceguids, -1073741808);
    return _a3;
  }
  if ( !FxDmaEnabler::SupportsChainedMdls(pDmaTrans->m_DmaEnabler) )
  {
    ByteCount = mdl->ByteCount;
    if ( Options > ByteCount )
    {
      _a3 = -1073741811;
      WPP_IFR_SF_qddd(
        m_Globals,
        v18,
        0xFu,
        0x12u,
        WPP_FxDmaTransactionAPI_cpp_Traceguids,
        Request,
        Options,
        ByteCount,
        -1073741811);
      return _a3;
    }
  }
  v21 = FxDmaTransactionBase::Initialize(v19, ProgramDmaFunction, v9, mdl, 0LL, Options);
  _a3 = v21;
  if ( v21 < 0 )
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v21);
    return _a3;
  }
  pDmaTrans->m_EncodedRequest = pReqObj;
  return 0LL;
}
