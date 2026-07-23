/*
 * XREFs of BgLibraryEnable @ 0x140671FC8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x14054F2F0 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x140388024 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v4; // ebx

  if ( a2 )
    dword_140C0E4B0 |= 0xC00u;
  if ( !a1 )
    return (dword_140C0E4B0 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
    v4 = BgpFwLibraryEnable(a1);
  else
    v4 = -1073741637;
  BgpFwReleaseLock();
  return v4;
}
