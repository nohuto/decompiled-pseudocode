/*
 * XREFs of AcquireBiosPpmControl @ 0x1C00027B4
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0002470 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 && dword_1C001FA00 && byte_1C001FA05 )
    __outbyte(dword_1C001FA00, byte_1C001FA05);
  v1 = *(_DWORD *)(a1 + 280);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C001FA00 )
    {
      LOBYTE(v1) = byte_1C001FA04;
      if ( byte_1C001FA04 )
        __outbyte(dword_1C001FA00, byte_1C001FA04);
    }
  }
  return v1;
}
