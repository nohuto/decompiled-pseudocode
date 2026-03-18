/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01DF3A0
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E27C0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1C04 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(struct tagPOINT *this, __int64 a2, __int64 a3, __int64 a4)
{
  CInertiaManager *v5; // rcx

  if ( LOBYTE(this[50].x) && (this[49].y & 1) != 0 )
  {
    SGDGetUserSessionState(this, a2, a3, a4);
    CInertiaManager::PostInertiaMessage(v5, 0x23Bu, (const struct INERTIA_INFO_INTERNAL *)&this[23], this[47], this[48]);
  }
  LOBYTE(this[50].x) = 0;
}
