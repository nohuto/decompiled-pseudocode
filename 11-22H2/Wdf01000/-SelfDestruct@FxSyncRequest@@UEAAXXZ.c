/*
 * XREFs of ?SelfDestruct@FxSyncRequest@@UEAAXXZ @ 0x1C0089CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxSyncRequest::SelfDestruct(FxSyncRequest *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxCREvent *p_m_DestroyedEvent; // rbx

  m_Globals = this->m_Globals;
  p_m_DestroyedEvent = &this->m_DestroyedEvent;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(
      m_Globals,
      5u,
      0xDu,
      0xCu,
      (const _GUID *)&WPP_FxSyncRequest_cpp_Traceguids,
      this,
      &this->m_DestroyedEvent);
  KeSetEvent(&p_m_DestroyedEvent->m_Event.m_Event, 0, 0);
}
