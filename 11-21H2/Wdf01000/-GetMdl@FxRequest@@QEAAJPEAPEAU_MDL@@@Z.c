/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0067904
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0054730 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1C0064C10 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C0064DD0 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C00681F0 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C006830C (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C0068470 (WPP_IFR_SF_qDqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C006EC9C (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int IsNotCompleted; // ebx
  int LowPart; // r8d
  _IRP *m_Irp; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void *MasterIrp; // r14
  unsigned int Options; // ebp
  const void *level; // rax
  unsigned int flags; // edx
  const void *id; // r8
  unsigned __int16 v15; // r9
  _MDL *MdlAddress; // rax
  const void *v17; // rax
  int v18; // r8d
  FxObject *v19; // r9
  const void *v20; // rax
  int v21; // r8d
  const void *v22; // rdx
  FxObject *v23; // r9
  const void *v24; // rax
  const void *v25; // rdx
  int v26; // r8d
  const void *ObjectHandleUnchecked; // rax
  const void *v28; // rdx
  unsigned int v29; // r8d
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v32; // rbx
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // r8
  unsigned __int8 v36; // dl
  const void *v37; // rax
  unsigned __int16 v38; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( (IsNotCompleted & 0x80000000) != 0 )
        goto LABEL_31;
    }
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) != 0 && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) - 1 >= 2 )
    {
      FxObject::GetObjectHandleUnchecked(this);
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_Dqqd(
        m_Globals,
        (unsigned __int8)v28,
        v29,
        0xAu,
        WPP_FxRequestKm_cpp_Traceguids,
        v29,
        ObjectHandleUnchecked,
        v28,
        globals);
      WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
      IsNotCompleted = -1073741808;
      goto LABEL_30;
    }
    MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
    Options = CurrentStackLocation->Parameters.Create.Options;
    goto LABEL_20;
  }
  LowPart = this->m_DeviceBase[1].m_Refcnt;
  if ( LowPart == 2 )
  {
    MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
    if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 3) > 1u )
    {
      FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      level = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qDqd(m_Globals, flags, (unsigned int)id, v15, traceGuid, level, flags, id, globals);
      IsNotCompleted = -1073741811;
      goto LABEL_30;
    }
    Options = CurrentStackLocation->Parameters.Read.Length;
LABEL_20:
    if ( !MasterIrp || !Options )
    {
      v36 = irql;
      *pMdl = 0LL;
      FxNonPagedObject::Unlock(this, v36, LowPart);
      IsNotCompleted = -1073741789;
      if ( MasterIrp )
      {
        if ( Options )
          return IsNotCompleted;
        v37 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v38 = 18;
      }
      else
      {
        v37 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v38 = 17;
      }
      WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, v38, WPP_FxRequestKm_cpp_Traceguids, v37, 0xC0000023);
      return IsNotCompleted;
    }
    m_AllocatedMdl = this->m_AllocatedMdl;
    if ( m_AllocatedMdl )
    {
      *pMdl = m_AllocatedMdl;
      goto LABEL_24;
    }
    if ( m_Globals->FxVerifierOn )
      Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Options, (unsigned __int8)traceGuid, 0, retaddr);
    else
      Debug = IoAllocateMdl(MasterIrp, Options, 0, 0, 0LL);
    v32 = Debug;
    if ( Debug )
    {
      MmBuildMdlForNonPagedPool(Debug);
      v33 = irql;
      this->m_AllocatedMdl = v32;
      *pMdl = v32;
      FxNonPagedObject::Unlock(this, v33, v34);
      return 0LL;
    }
    IsNotCompleted = -1073741670;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, Options, 0xC000009A);
LABEL_30:
    *pMdl = 0LL;
    goto LABEL_31;
  }
  if ( LowPart != 3 )
  {
    if ( LowPart == 1 )
    {
      FxObject::GetObjectHandleUnchecked(this);
      v20 = (const void *)FxObject::GetObjectHandleUnchecked(v19);
      IsNotCompleted = -1073741808;
      WPP_IFR_SF_qqd(m_Globals, 2u, v21 + 15, v21 + 13, WPP_FxRequestKm_cpp_Traceguids, v20, v22, -1073741808);
      WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    }
    else
    {
      FxObject::GetObjectHandleUnchecked(this);
      v24 = (const void *)FxObject::GetObjectHandleUnchecked(v23);
      IsNotCompleted = -1073741595;
      WPP_IFR_SF_dqqd(
        m_Globals,
        (unsigned __int8)v25,
        0x10u,
        0x10u,
        WPP_FxRequestKm_cpp_Traceguids,
        v26,
        v24,
        v25,
        -1073741595);
    }
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_30;
  }
  MdlAddress = m_Irp->MdlAddress;
  *pMdl = MdlAddress;
  if ( MdlAddress )
  {
LABEL_24:
    IsNotCompleted = 0;
    goto LABEL_31;
  }
  IsNotCompleted = -1073741789;
  v17 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qL(m_Globals, 2u, v18 + 13, v18 + 10, WPP_FxRequestKm_cpp_Traceguids, v17, 0xC0000023);
LABEL_31:
  FxNonPagedObject::Unlock(this, irql, LowPart);
  return IsNotCompleted;
}
