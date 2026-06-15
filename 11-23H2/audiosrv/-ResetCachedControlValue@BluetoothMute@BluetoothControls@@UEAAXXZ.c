/*
 * XREFs of ?ResetCachedControlValue@BluetoothMute@BluetoothControls@@UEAAXXZ @ 0x180082730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BluetoothControls::BluetoothMute::ResetCachedControlValue(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 21;
  AcquireSRWLockExclusive(this + 21);
  BYTE4(this[22].Ptr) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
