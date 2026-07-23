/*
 * XREFs of CcReferenceFileOffset @ 0x140538600
 * Callers:
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x1402A0D98 (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402A12C0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A1300 (CcAcquireBcbLockAndVacbLock.c)
 *     CcFreeUnusedVacbLevels @ 0x1402F3914 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x1402F3970 (CcAllocateVacbLevels.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, __int64 a2)
{
  int v4; // edx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+3Ch] [rbp-Ch]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v7 = 0;
    v4 = *(_DWORD *)(a1 + 152);
    v5[2] = 0LL;
    v5[1] = v5;
    v5[0] = v5;
    v6 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v4 & 0x200) != 0, (__int64)v5) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL);
    CcReleaseBcbLockAndVacbLock(1, a1);
    CcFreeUnusedVacbLevels((__int64)v5);
  }
}
