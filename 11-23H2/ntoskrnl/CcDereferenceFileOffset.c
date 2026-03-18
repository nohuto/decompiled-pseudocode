/*
 * XREFs of CcDereferenceFileOffset @ 0x140537EE4
 * Callers:
 *     CcPinFileData @ 0x140263890 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x1402A0B08 (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402A1030 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A1070 (CcAcquireBcbLockAndVacbLock.c)
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
