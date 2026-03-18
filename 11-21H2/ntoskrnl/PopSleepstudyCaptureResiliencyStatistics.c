/*
 * XREFs of PopSleepstudyCaptureResiliencyStatistics @ 0x140997C84
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopCalculateTotalHwDripsResidency @ 0x1403978A4 (PopCalculateTotalHwDripsResidency.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1405D13F0 (PopDiagTraceCsResiliencyEnter.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1405D1548 (PopDiagTraceCsResiliencyExit.c)
 *     PopGetEnergyCounter @ 0x140811A68 (PopGetEnergyCounter.c)
 *     PopDiagTraceCsResiliencyStats @ 0x140991AC0 (PopDiagTraceCsResiliencyStats.c)
 */

char __fastcall PopSleepstudyCaptureResiliencyStatistics(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+70h] [rbp-90h]
  _DWORD v16[60]; // [rsp+80h] [rbp-80h] BYREF

  v15 = 0;
  v16[1] = 0;
  memset(v14, 0, sizeof(v14));
  *(_QWORD *)&v13 = 0LL;
  DWORD2(v13) = 0;
  PopGetEnergyCounter(&v13);
  if ( a4 )
    return PopDiagTraceCsResiliencyEnter(a2, a3, &v13);
  v9 = (a1[12] - a1[2]) / 0xAuLL;
  v10 = PopCalculateTotalHwDripsResidency(a1[8], a1[10], v9);
  v11 = 0LL;
  if ( v10 != -1 )
    v11 = v10;
  qword_140C541C8 += v11;
  v12 = a1[11] - a1[9];
  qword_140C541D0 += v12;
  if ( qword_140C5ADB8 )
    qword_140C5ADB8(v14);
  memset(v16, 0, sizeof(v16));
  PopDiagTraceCsResiliencyExit((__int64)v16, a2, a3, (__int64)&v13, v9, v11, v12, (__int64)v14);
  return PopDiagTraceCsResiliencyStats((__int64)v16);
}
