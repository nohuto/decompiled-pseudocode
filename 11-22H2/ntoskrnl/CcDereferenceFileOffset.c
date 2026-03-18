/*
 * XREFs of CcDereferenceFileOffset @ 0x140537F94
 * Callers:
 *     CcPinFileData @ 0x140263770 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x1402A09E8 (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402A0F10 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A0F50 (CcAcquireBcbLockAndVacbLock.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, __int64 a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL);
    CcReleaseBcbLockAndVacbLock(1, a1);
  }
}
