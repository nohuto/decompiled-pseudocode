/*
 * XREFs of ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0034BC0
 * Callers:
 *     imp_WdfRequestGetRequestorProcessId @ 0x1C0035160 (imp_WdfRequestGetRequestorProcessId.c)
 *     imp_WdfRequestWdmGetIrp @ 0x1C0036060 (imp_WdfRequestWdmGetIrp.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006612C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetIrp(FxRequest *this, _IRP **ppIrp, unsigned __int8 a3)
{
  _IRP *m_Irp; // rdi
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // esi
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Irp = 0LL;
  if ( this->m_Globals->FxVerifierIO )
  {
    irql = 0;
    FxNonPagedObject::Lock(this, &irql, a3);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      if ( IsNotCompleted < 0 )
      {
        IsNotCompleted = -1073741808;
LABEL_7:
        *ppIrp = m_Irp;
        FxNonPagedObject::Unlock(this, irql, v6);
        return (unsigned int)IsNotCompleted;
      }
    }
    else
    {
      IsNotCompleted = 0;
    }
    m_Irp = this->m_Irp.m_Irp;
    goto LABEL_7;
  }
  *ppIrp = this->m_Irp.m_Irp;
  return 0LL;
}
