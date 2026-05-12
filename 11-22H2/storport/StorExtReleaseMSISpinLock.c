/*
 * XREFs of StorExtReleaseMSISpinLock @ 0x1C0045710
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

void __fastcall StorExtReleaseMSISpinLock(__int64 a1)
{
  _DWORD *Adapter; // rax
  __int64 v2; // r9
  KIRQL v3; // r10

  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
    KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(*((_QWORD *)Adapter + 536) + 48 * v2 + 24), v3);
}
