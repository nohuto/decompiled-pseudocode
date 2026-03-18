/*
 * XREFs of imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0019C10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x1C000BE4A (-SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C000CA84 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C0018D40 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C0018E7C (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0019200 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00397A8 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0039AD4 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int16 v13; // r9
  unsigned int Options; // r14d
  int DeviceControlOutputMdl; // eax
  unsigned __int8 v16; // dl
  FxDmaTransactionBase *v17; // r10
  unsigned int ByteCount; // eax
  int v19; // eax
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
      0xC000000D);
    return _a3;
  }
  FxObjectHandleGetPtr(pDmaTrans->m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pReqObj);
  CurrentStackLocation = pReqObj->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( v9 )
    {
      WPP_IFR_SF_LqqLd(
        m_Globals,
        (unsigned __int8)CurrentStackLocation,
        (unsigned int)pReqObj,
        0xBu,
        traceGuid,
        v9,
        DmaTransaction,
        Request,
        3u);
      return 3221225488LL;
    }
    goto LABEL_27;
  }
  if ( CurrentStackLocation->MajorFunction == 4 )
  {
    if ( v9 != WdfDmaDirectionWriteToDevice )
    {
      WPP_IFR_SF_LqqLd(
        m_Globals,
        (unsigned __int8)CurrentStackLocation,
        (unsigned int)pReqObj,
        0xCu,
        traceGuid,
        v9,
        DmaTransaction,
        Request,
        4u);
      return 3221225488LL;
    }
    goto LABEL_27;
  }
  if ( (unsigned int)CurrentStackLocation->MajorFunction - 14 >= 2 )
  {
    _a3 = -1073741808;
LABEL_30:
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xFu,
      0x10u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      Request,
      (__int64)DmaTransaction,
      _a3);
    return _a3;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
  {
    case 0u:
      if ( v9 == WdfDmaDirectionWriteToDevice )
      {
        Options = CurrentStackLocation->Parameters.Create.Options;
LABEL_28:
        DeviceControlOutputMdl = FxRequest::GetMdl(pReqObj, &mdl);
        goto LABEL_29;
      }
LABEL_27:
      Options = CurrentStackLocation->Parameters.Read.Length;
      goto LABEL_28;
    case 1u:
      if ( v9 != WdfDmaDirectionWriteToDevice )
      {
        v13 = 13;
        goto LABEL_19;
      }
      break;
    case 2u:
      if ( v9 )
      {
        v13 = 14;
LABEL_19:
        WPP_IFR_SF_Lqqd(
          m_Globals,
          (unsigned __int8)CurrentStackLocation,
          (unsigned int)pReqObj,
          v13,
          traceGuid,
          v9,
          DmaTransaction,
          Request);
        return 3221225488LL;
      }
      break;
    default:
      _a3 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, -1073741808);
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_30;
  }
  Options = CurrentStackLocation->Parameters.Read.Length;
  DeviceControlOutputMdl = FxRequest::GetDeviceControlOutputMdl(pReqObj, &mdl);
LABEL_29:
  _a3 = DeviceControlOutputMdl;
  if ( DeviceControlOutputMdl < 0 )
    goto LABEL_30;
  if ( !Options )
  {
    _a3 = -1073741808;
    WPP_IFR_SF_D(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionAPI_cpp_Traceguids, 0xC0000010);
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
        v16,
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
  v19 = FxDmaTransactionBase::Initialize(v17, ProgramDmaFunction, v9, mdl, 0LL, Options);
  _a3 = v19;
  if ( v19 < 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v19);
    return _a3;
  }
  pDmaTrans->m_EncodedRequest = pReqObj;
  return 0LL;
}
