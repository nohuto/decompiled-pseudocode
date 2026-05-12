/*
 * XREFs of RaidAdapterClearCryptoKeyTable @ 0x1C00339F0
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0014E6C (RaidAdapterDevicePowerstopAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterClearCryptoKeyTable(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned int i; // r8d
  __int64 v4; // rdx

  v1 = (volatile LONG *)(a1 + 5504);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5504));
  for ( i = 0; i < *(_DWORD *)(a1 + 5488); *(_DWORD *)((v4 << 6) + *(_QWORD *)(a1 + 5496) + 44) = 0 )
    v4 = i++;
  *(_BYTE *)(a1 + 5492) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  return 0LL;
}
