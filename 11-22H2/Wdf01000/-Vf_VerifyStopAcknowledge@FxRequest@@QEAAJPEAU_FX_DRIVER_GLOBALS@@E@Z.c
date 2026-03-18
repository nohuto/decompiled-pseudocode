/*
 * XREFs of ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BAB70
 * Callers:
 *     imp_WdfRequestStopAcknowledge @ 0x1C0035E60 (imp_WdfRequestStopAcknowledge.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA8A0 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA9C0 (-Vf_VerifyRequestIsInEvtIoStopContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA2C (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyStopAcknowledge(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Requeue)
{
  unsigned __int8 v6; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, Requeue);
  if ( FxDriverGlobals->FxVerifierOn )
  {
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsInEvtIoStopContext(this, FxDriverGlobals);
    if ( IsDriverOwned < 0 )
      goto $Done_85;
  }
  else
  {
    IsDriverOwned = 0;
  }
  if ( !this->m_Completed && Requeue )
  {
    if ( !FxDriverGlobals->FxVerifierOn )
      goto LABEL_11;
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(this, FxDriverGlobals);
    if ( IsDriverOwned >= 0 )
    {
      if ( FxDriverGlobals->FxVerifierOn )
      {
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(this, FxDriverGlobals);
        goto $Done_85;
      }
LABEL_11:
      IsDriverOwned = 0;
    }
  }
$Done_85:
  FxNonPagedObject::Unlock(this, irql, v6);
  return (unsigned int)IsDriverOwned;
}
