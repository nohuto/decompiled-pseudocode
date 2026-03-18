/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C01696D0
 * Callers:
 *     <none>
 * Callees:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008ABF4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0093754 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  struct HOBJ__ *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _W32THREAD *CurrentThread; // rax
  __int64 v9; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v4 = HmgAlloc(0x860uLL, 1u, 1u);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    CurrentThread = (struct _W32THREAD *)W32GetCurrentThread();
    *(_QWORD *)(*(_QWORD *)this + 2128LL) = UMPDOBJ::GetThreadCurrentObj(CurrentThread);
    *(_DWORD *)(*(_QWORD *)this + 2136LL) = 0xFFFF;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v9 = *(_QWORD *)this;
    *(_QWORD *)(v9 + 1120) = 0LL;
    *(_QWORD *)(v9 + 1112) = 0LL;
    *(_QWORD *)(v9 + 1120) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 1136LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
    DC::vCopyTo(*a2, (DC **)this);
  }
  return this;
}
