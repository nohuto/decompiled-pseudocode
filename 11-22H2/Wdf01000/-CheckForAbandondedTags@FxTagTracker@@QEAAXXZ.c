/*
 * XREFs of ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C00478C4
 * Callers:
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C00053A0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0008570 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C004779C (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqsd @ 0x1C0047D18 (WPP_IFR_SF_qqsd.c)
 */

void __fastcall FxTagTracker::CheckForAbandondedTags(FxTagTracker *this)
{
  FxTagTrackingBlock **p_m_Next; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  char v4; // si
  KIRQL v5; // al
  unsigned int v6; // r8d
  FxTagTrackingBlock *v7; // rdi
  KIRQL v8; // r15
  FxTagTrackingBlock *v9; // rcx
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  p_m_Next = &this->m_Next;
  m_Globals = this->m_Globals;
  if ( (this->m_OwningObject->m_ObjectFlags & 8) != 0 )
  {
    v4 = 1;
    if ( *p_m_Next || this->m_FailedCount )
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_fxtagtracker_cpp_Traceguids, this);
  }
  else
  {
    v4 = 0;
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v7 = *p_m_Next;
  v8 = v5;
  while ( v7 )
  {
    v9 = v7;
    v7 = v7->Next;
    if ( v4 )
    {
      v10 = 12;
      v11 = 2;
    }
    else
    {
      v4 = 1;
      v10 = 13;
      v11 = 3;
    }
    WPP_IFR_SF_qqsd(m_Globals, v11, v6, v10, traceGuid, this->m_OwningObject, v9->Tag, v9->File, v9->Line);
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v8);
}
