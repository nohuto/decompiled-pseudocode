/*
 * XREFs of NdisIMSwitchToMiniport @ 0x1C006A060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NdisIMSwitchToMiniport(__int64 a1, KIRQL *a2)
{
  char v4; // bl

  *a2 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 520) )
  {
    *(_QWORD *)a2 = -1LL;
    return 1;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v4 = 0;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    if ( !*(_BYTE *)(a1 + 89) )
    {
      v4 = 1;
      *(_BYTE *)(a1 + 89) = 1;
      *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  }
  return v4;
}
