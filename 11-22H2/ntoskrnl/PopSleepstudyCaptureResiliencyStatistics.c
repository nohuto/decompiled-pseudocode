/*
 * XREFs of PopSleepstudyCaptureResiliencyStatistics @ 0x140993304
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     PopCalculateTotalHwDripsResidency @ 0x140591920 (PopCalculateTotalHwDripsResidency.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x14059218C (PopDiagTraceCsResiliencyEnter.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1405922E4 (PopDiagTraceCsResiliencyExit.c)
 *     PopGetEnergyCounter @ 0x140875C9C (PopGetEnergyCounter.c)
 *     PopDiagTraceCsResiliencyStats @ 0x14098E080 (PopDiagTraceCsResiliencyStats.c)
 */

void __fastcall PopSleepstudyCaptureResiliencyStatistics(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  _DWORD v15[60]; // [rsp+80h] [rbp-80h] BYREF

  v14 = 0;
  v15[1] = 0;
  memset(v13, 0, sizeof(v13));
  *(_QWORD *)&v12 = 0LL;
  DWORD2(v12) = 0;
  PopGetEnergyCounter(&v12);
  if ( a4 )
  {
    PopDiagTraceCsResiliencyEnter(a2, a3, &v12);
  }
  else
  {
    v8 = (a1[12] - a1[2]) / 0xAuLL;
    v9 = PopCalculateTotalHwDripsResidency(a1[8], a1[10], v8);
    v10 = 0LL;
    if ( v9 != -1 )
      v10 = v9;
    qword_140CF7D48 += v10;
    v11 = a1[11] - a1[9];
    qword_140CF7D50 += v11;
    if ( qword_140C6B078 )
      qword_140C6B078(v13);
    memset(v15, 0, sizeof(v15));
    PopDiagTraceCsResiliencyExit((__int64)v15, a2, a3, (__int64)&v12, v8, v10, v11, (__int64)v13);
    PopDiagTraceCsResiliencyStats((__int64)v15);
  }
}
