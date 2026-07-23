/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x140369FBC
 * Callers:
 *     MiImageProtoChargedCommit @ 0x14035ED98 (MiImageProtoChargedCommit.c)
 *     MiGetSharedProtos @ 0x140369F2C (MiGetSharedProtos.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 *__fastcall MiGetSharedProtosAtDpcLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rsi
  __int64 *v6; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(__int64 **)(a3 + 24);
  while ( v6 )
  {
    if ( a2 > *((_DWORD *)v6 + 16) )
    {
      v6 = (__int64 *)v6[1];
    }
    else
    {
      if ( a2 >= *((_DWORD *)v6 + 16) )
        break;
      v6 = (__int64 *)*v6;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return v6;
}
