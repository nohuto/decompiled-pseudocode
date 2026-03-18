/*
 * XREFs of ?GetInformation@FxRequest@@QEAA_KXZ @ 0x1C003A9D0
 * Callers:
 *     imp_WdfRequestGetInformation @ 0x1C0035120 (imp_WdfRequestGetInformation.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int64 __fastcall FxRequest::GetInformation(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 Information; // rdi
  unsigned __int8 v6; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  Information = 0LL;
  if ( !m_Globals->FxVerifierIO )
    return this->m_Irp.m_Irp->IoStatus.Information;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !m_Globals->FxVerifierOn || FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) >= 0 )
    Information = this->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Unlock(this, irql, v6);
  return Information;
}
