/*
 * XREFs of PoClearTransitionMarker @ 0x1408030CC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x14032D240 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x140374280 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlpSystemBootStatusRequest @ 0x1407A6A9C (RtlpSystemBootStatusRequest.c)
 *     RtlUnlockBootStatusData @ 0x1407EC910 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1407EF310 (RtlLockBootStatusData.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140802DEC (PopRecordLongPowerButtonPressDetected.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140803260 (RtlInitializeBootStatusDataBlackBox.c)
 */

void PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  char v1; // di
  ULONG32 v2; // eax
  char v3; // [rsp+20h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+28h] [rbp-11h] BYREF
  int v5; // [rsp+30h] [rbp-9h] BYREF
  __int128 *v6; // [rsp+38h] [rbp-1h]
  int v7; // [rsp+40h] [rbp+7h]
  int v8; // [rsp+48h] [rbp+Fh]
  __int128 *v9; // [rsp+50h] [rbp+17h]
  int v10; // [rsp+58h] [rbp+1Fh]
  int v11; // [rsp+60h] [rbp+27h]
  char *v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+70h] [rbp+37h]

  FileHandle = 0LL;
  v3 = 0;
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v5 = 7;
  v6 = &PopBsdPowerTransition;
  v0 = 2;
  v7 = 32;
  v9 = &PopBsdPowerTransitionExtension;
  v1 = 1;
  v8 = 16;
  v10 = 32;
  if ( ExIsSoftBoot() )
  {
    v11 = 5;
    v12 = &v3;
    v1 = 0;
    v0 = 3;
    v13 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) = 1;
  xmmword_140C6A850 = 0LL;
  PopBsdPowerTransitionExtension = 0LL;
  xmmword_140CF7C90 = 0LL;
  HIDWORD(xmmword_140C6A850) = MEMORY[0xFFFFF780000002C4];
  BYTE1(PopBsdPowerTransitionExtension) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(PopBsdPowerTransition) = -64;
  dword_140C3A06C = 3;
  *(_QWORD *)&xmmword_140C6A850 = MEMORY[0xFFFFF78000000014];
  v2 = RtlComputeCrc32(0, &xmmword_140C6A850, 8u);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  DWORD2(xmmword_140C6A850) = v2;
  RtlpSystemBootStatusRequest(32, (__int64)&v5, v0, 0LL);
  PopReleaseRwLock(&PopBsdUpdateLock);
  PopRecordLongPowerButtonPressDetected(0, v1);
  PopAcpiPdttSupportEnabled = 0;
}
