/*
 * XREFs of PsSetProcessFaultInformation @ 0x1406D40C0
 * Callers:
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406D4270 @ 0x1406D4270 (sub_1406D4270.c)
 *     sub_14071147C @ 0x14071147C (sub_14071147C.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v7; // rbp
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  struct _KTHREAD *v10; // rbp
  struct _KTHREAD *CurrentThread; // rbp
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 2172));
    v8 = *(_DWORD *)(a1 + 2172);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2172), v8 | 4, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 4) == 0 )
    {
      if ( (unsigned int)dword_140C0308C < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C03088 )
          dword_140C03088 = sub_14024F664(off_140C03080, &v12);
        EtwTelemetryCoverageReport((__int64 *)&off_140C03080);
      }
      sub_1406D4270(a1);
      sub_14071147C(a1);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140C0905C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C09058 )
        dword_140C09058 = sub_14024F664(off_140C09050, &v13);
      EtwTelemetryCoverageReport((__int64 *)&off_140C09050);
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v5 = (volatile signed __int64 *)(a1 + 1080);
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 7) != 7 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    sub_1402AFC00(a1 + 1080);
    sub_1402AC800((__int64)CurrentThread);
    v4 = *a2;
  }
  else
  {
    v5 = (volatile signed __int64 *)(a1 + 1080);
  }
  if ( (v4 & 4) != 0 )
  {
    v7 = KeGetCurrentThread();
    --*((_WORD *)v7 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 8)) & 0x38;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    sub_1402AFC00((ULONG_PTR)v5);
    sub_1402AC800((__int64)v7);
    v4 = *a2;
  }
  if ( (v4 & 8) != 0 )
  {
    v10 = KeGetCurrentThread();
    --*((_WORD *)v10 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    *(_BYTE *)(a1 + 2171) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    sub_1402AFC00((ULONG_PTR)v5);
    sub_1402AC800((__int64)v10);
  }
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06D90) )
  {
    sub_14042A5E0(a1, KeGetCurrentThread());
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D06D90);
  }
  return 0LL;
}
