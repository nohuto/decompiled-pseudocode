/*
 * XREFs of PopHiberCheckResume @ 0x140AA2EA0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140428C50 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memset @ 0x140435A00 (memset.c)
 *     HalInitializeOnResume @ 0x1405065E0 (HalInitializeOnResume.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053F54C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x14053FD14 (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140544EC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x14054693C (HvlNotifyAcpiReenabled.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x1406306A8 (MmMapMemoryDumpMdlEx2.c)
 *     PopCheckpointSystemSleep @ 0x140AAA4E8 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rbp
  char v1; // bl
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  _OWORD v14[20]; // [rsp+20h] [rbp-158h] BYREF

  memset(v14, 0, 0x138uLL);
  v0 = qword_140C3D100;
  v1 = 0;
  v2 = *(_QWORD *)(qword_140C3D100 + 200);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25LL);
    PoPowerDownActionInProgress = 0;
    ((void (__fastcall *)(_QWORD))off_140C01C48[0])(0LL);
    PopWatchdogTimerCount = 0;
    v3 = __rdtsc();
    PoResumeFromHibernate = 1;
    ((void (__fastcall *)(__int64))off_140C01AD0[0])(5LL);
    ((void (__fastcall *)(__int64))off_140C01C48[0])(1LL);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1);
      off_140C01BB8[0]();
      PopHibernateHvMinloopEnabled = 0;
    }
    ((void (__fastcall *)(__int64))off_140C01BD0)(5LL);
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    if ( *(_QWORD *)(v2 + 1032) )
    {
      v5 = *(_QWORD *)(v0 + 264);
      v6 = *(_OWORD *)(v2 + 1032);
      DWORD2(v14[0]) = 80;
      v7 = *(_OWORD *)(v2 + 1048);
      v8 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)&v14[2] = 0LL;
      *((_QWORD *)&v14[2] + 1) = 0x4000LL;
      v14[3] = v6;
      v14[4] = v7;
      MmMapMemoryDumpMdlEx2(v8, v4, (__int64)v14, 1);
      memset(*(void **)(*(_QWORD *)(v0 + 264) + 8LL), 0, 0x4000uLL);
    }
    v9 = &qword_140C3D338;
    v10 = 4LL;
    qword_140C31B18 = *(_QWORD *)(v2 + 1008);
    v11 = (_OWORD *)(v2 + 136);
    do
    {
      *(_OWORD *)v9 = *v11;
      *((_OWORD *)v9 + 1) = v11[1];
      *((_OWORD *)v9 + 2) = v11[2];
      *((_OWORD *)v9 + 3) = v11[3];
      *((_OWORD *)v9 + 4) = v11[4];
      *((_OWORD *)v9 + 5) = v11[5];
      *((_OWORD *)v9 + 6) = v11[6];
      v9 += 16;
      v12 = v11[7];
      v11 += 8;
      *((_OWORD *)v9 - 1) = v12;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)v9 = *v11;
    *((_OWORD *)v9 + 1) = v11[1];
    *((_OWORD *)v9 + 2) = v11[2];
    *((_OWORD *)v9 + 3) = v11[3];
    *((_OWORD *)v9 + 4) = v11[4];
    *((_OWORD *)v9 + 5) = v11[5];
    *(_BYTE *)(v0 + 4) = 0;
    qword_140C3D408 = v3;
    if ( (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}
