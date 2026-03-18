/*
 * XREFs of ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0009060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0046154 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAC18 (-Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxRequestBase::Dispose(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequestContext *m_RequestContext; // rcx
  FxRequestContext *v4; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::Vf_VerifyDispose(this, m_Globals);
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( this->m_IrpAllocation && this->m_Irp.m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
      v4 = this->m_RequestContext;
      if ( v4 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v4->~FxRequestContext)(v4, 1LL);
      this->m_RequestContext = 0LL;
    }
    else
    {
      m_RequestContext->Dispose(m_RequestContext);
    }
  }
  return 0;
}
