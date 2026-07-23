/*
 * XREFs of PspLockThreadSecurityShared @ 0x1405A43E4
 * Callers:
 *     PsLockThreadNameShared @ 0x140411700 (PsLockThreadNameShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1360, 0LL);
}
