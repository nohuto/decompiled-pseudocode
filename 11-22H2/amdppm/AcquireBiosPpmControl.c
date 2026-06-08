/*
 * XREFs of AcquireBiosPpmControl @ 0x1C00073F8
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0007480 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 && dword_1C0012E40 && byte_1C0012E45 )
    __outbyte(dword_1C0012E40, byte_1C0012E45);
  v1 = *(_DWORD *)(a1 + 280);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0012E40 )
    {
      LOBYTE(v1) = byte_1C0012E44;
      if ( byte_1C0012E44 )
        __outbyte(dword_1C0012E40, byte_1C0012E44);
    }
  }
  return v1;
}
