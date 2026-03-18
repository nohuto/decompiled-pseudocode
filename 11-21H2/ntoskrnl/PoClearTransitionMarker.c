/*
 * XREFs of PoClearTransitionMarker @ 0x1408285B0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x1407EDB2C (RtlpSystemBootStatusRequest.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x14082876C (PopRecordLongPowerButtonPressDetected.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140828810 (RtlInitializeBootStatusDataBlackBox.c)
 */

__int64 (__fastcall *PoClearTransitionMarker())(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v0; // ebx
  char v1; // di
  int v2; // eax
  __int64 v3; // rdx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v5; // [rsp+30h] [rbp-29h]
  char v6; // [rsp+40h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-11h] BYREF
  int v8; // [rsp+50h] [rbp-9h] BYREF
  __int128 *v9; // [rsp+58h] [rbp-1h]
  int v10; // [rsp+60h] [rbp+7h]
  int v11; // [rsp+68h] [rbp+Fh]
  __int128 *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+80h] [rbp+27h]
  char *v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+90h] [rbp+37h]

  FileHandle = 0LL;
  v6 = 0;
  if ( (int)RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v8 = 7;
  v9 = &PopBsdPowerTransition;
  v0 = 2;
  v10 = 32;
  v12 = &PopBsdPowerTransitionExtension;
  v1 = 1;
  v11 = 16;
  v13 = 32;
  if ( ExIsSoftBoot() )
  {
    v14 = 5;
    v15 = &v6;
    v1 = 0;
    v0 = 3;
    v16 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) = 1;
  xmmword_140C547A8 = 0LL;
  PopBsdPowerTransitionExtension = 0LL;
  unk_140C548F0 = 0LL;
  HIDWORD(xmmword_140C547A8) = MEMORY[0xFFFFF780000002C4];
  BYTE1(PopBsdPowerTransitionExtension) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(PopBsdPowerTransition) = -64;
  dword_140C1F7EC = 3;
  *(_QWORD *)&xmmword_140C547A8 = MEMORY[0xFFFFF78000000014];
  v2 = RtlComputeCrc32(0, (char *)&xmmword_140C547A8, 8u);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  DWORD2(xmmword_140C547A8) = v2;
  RtlpSystemBootStatusRequest(32, (__int64)&v8, v0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  LOBYTE(v3) = v1;
  PopRecordLongPowerButtonPressDetected(0LL, v3);
  result = wil_details_FeatureReporting_ReportUsageToService(
             (__int64)&Feature_PdttSupport__private_reporting,
             0xF68A0Du,
             0,
             0,
             (__int64)&Feature_PdttSupport_logged_traits,
             0,
             v5);
  PopAcpiPdttSupportEnabled = 0;
  return result;
}
