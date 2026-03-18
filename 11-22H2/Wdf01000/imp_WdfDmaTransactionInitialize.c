/*
 * XREFs of imp_WdfDmaTransactionInitialize @ 0x1C000C080
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingOffset @ 0x1C000C2A0 (imp_WdfDmaTransactionInitializeUsingOffset.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x1C000BE4A (-SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C000CA84 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qiqd @ 0x1C0019368 (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitialize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        unsigned int DmaDirection,
        _MDL *Mdl,
        char *VirtualAddress,
        __int64 Length)
{
  unsigned __int8 v10; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _MDL *v12; // rsi
  unsigned __int64 v13; // rbp
  char *v14; // rcx
  char *v15; // rdi
  __int64 ByteCount; // rdx
  char *v17; // r15
  unsigned __int8 v18; // dl
  unsigned int v19; // r8d
  unsigned __int16 v20; // r9
  FxDmaTransactionBase *v21; // r10
  int v22; // eax
  unsigned int v23; // edi
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  unsigned int _a4; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+80h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(pDmaTrans->m_Globals, retaddr);
  v12 = Mdl;
  if ( !Mdl )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v13 = Length;
  if ( !Length )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction);
    return 3221225485LL;
  }
  if ( DmaDirection > 1 )
  {
    WPP_IFR_SF_qDd(
      m_Globals,
      v10,
      0xFu,
      0x15u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      DmaDirection,
      0xC000000D);
    return 3221225485LL;
  }
  v14 = (char *)Mdl->StartVa + Mdl->ByteOffset;
  v15 = VirtualAddress;
  ByteCount = Mdl->ByteCount;
  if ( VirtualAddress < v14 || (v17 = &v14[ByteCount], VirtualAddress >= &v14[ByteCount]) )
  {
    WPP_IFR_SF_qqdd(
      m_Globals,
      2u,
      0xFu,
      0x16u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      VirtualAddress,
      v14,
      ByteCount,
      0xC000000D);
    return 3221225485LL;
  }
  FxObjectHandleGetPtr(pDmaTrans->m_Globals, (unsigned __int64)DmaTransaction, 0x1401u, (void **)&pDmaTrans);
  if ( !FxDmaEnabler::SupportsChainedMdls(pDmaTrans->m_DmaEnabler) && &v15[v13] > v17 )
  {
    WPP_IFR_SF_qiqd(m_Globals, v18, v19, v20, traceGuid, v15, v13, v17, _a4);
    return 3221225485LL;
  }
  v22 = FxDmaTransactionBase::Initialize(
          v21,
          EvtProgramDmaFunction,
          (_WDF_DMA_DIRECTION)DmaDirection,
          v12,
          &v15[-v12->ByteOffset] - (char *)v12->StartVa,
          v13);
  v23 = v22;
  if ( v22 < 0 )
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x18u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v22);
  return v23;
}
