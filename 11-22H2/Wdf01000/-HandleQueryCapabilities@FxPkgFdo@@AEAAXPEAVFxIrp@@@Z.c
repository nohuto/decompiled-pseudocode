/*
 * XREFs of ?HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0077C5C
 * Callers:
 *     ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0078910 (-_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

void __fastcall FxPkgFdo::HandleQueryCapabilities(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  FxPnpCaps v6; // ecx
  _FX_DRIVER_GLOBALS *v7; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xFu, WPP_fxpkgfdo_cpp_Traceguids);
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    v6.ByEnum = (FxPnpCaps::<unnamed_type_ByEnum>)this->m_PnpCaps;
    if ( (*(_BYTE *)&v6.ByEnum & 3) == 1 )
      HIDWORD(SecurityContext->SecurityQos) |= 4u;
    if ( (*(_BYTE *)&v6.ByEnum & 0xC) == 4 )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( (*(_BYTE *)&v6.ByEnum & 0x30) == 0x10 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    if ( (*(_BYTE *)&v6.ByEnum & 0xC0) == 0x40 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20u;
    if ( (*(_WORD *)&v6.ByEnum & 0x3000) == 0x1000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    if ( (v6.Value & 0x30000) == 0x10000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    if ( this->m_WakeInterruptCount )
      HIDWORD(SecurityContext->SecurityQos) |= 0x80000u;
  }
  v7 = this->m_Globals;
  if ( v7->FxVerboseOn )
    WPP_IFR_SF_(v7, 5u, 0xCu, 0x10u, WPP_fxpkgfdo_cpp_Traceguids);
}
