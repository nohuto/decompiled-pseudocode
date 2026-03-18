/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x1402500F8
 * Callers:
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x14031DB78 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x14031DEE0 (KeCancelTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140252030 (KiAcquireKobjectLockSafe.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  KiAcquireKobjectLockSafe(a1);
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(_BYTE *)(a1 + 1) & 0x20) != 0;
}
