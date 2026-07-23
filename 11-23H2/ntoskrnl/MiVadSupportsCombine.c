/*
 * XREFs of MiVadSupportsCombine @ 0x1402171A0
 * Callers:
 *     MiCrcStillIntact @ 0x140215130 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiVadSupportsPrivateCommit @ 0x140274DE0 (MiVadSupportsPrivateCommit.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiVadSupportsCombine(__int64 a1, __int64 a2)
{
  __int64 Address; // rbx
  int v4; // eax
  __int64 v5; // rcx

  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                  + 284));
  Address = MiLocateAddress(a2);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                    + 284));
  if ( !Address || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16 )
    return 0LL;
  v4 = MiVadSupportsPrivateCommit(Address);
  v5 = 0LL;
  if ( v4 )
    return Address;
  return v5;
}
