/*
 * XREFs of ?GetShowInSwitchers@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x180052B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWinRTApplicationView::GetShowInSwitchers(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  *a2 = LOBYTE(this[27].Ptr) != 0;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
