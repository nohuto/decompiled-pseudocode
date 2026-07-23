/*
 * XREFs of sub_140861D70 @ 0x140861D70
 * Callers:
 *     <none>
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char sub_140861D70()
{
  unsigned __int8 v0; // bl
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140C04418 && sub_1402A2000((__int64)&dword_140C04418, 1LL) )
  {
    v0 = 1;
    if ( !dword_140C5B0F8 && (unsigned int)dword_140C09184 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C09180 )
        dword_140C09180 = sub_14024F664(off_140C09178, v4);
      EtwTelemetryCoverageReport((__int64 *)&off_140C09178);
    }
  }
  else
  {
    v0 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
  if ( qword_140C5B100 && dword_140C5B0F8 != v0 )
  {
    if ( v0 )
    {
      MEMORY[0xFFFFF7800000037C] = -256;
      *(_WORD *)(*(_QWORD *)(qword_140C5B100 + 16) + 2LL) |= 1u;
    }
    else
    {
      MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(*(_QWORD *)(qword_140C5B100 + 16) + 24LL);
      *(_WORD *)(*(_QWORD *)(qword_140C5B100 + 16) + 2LL) &= ~1u;
    }
  }
  qword_140C547C0 = 0LL;
  dword_140C5B0F8 = v0;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C15D90);
  sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
