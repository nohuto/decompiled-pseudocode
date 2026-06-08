/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0006DC0
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0006E50 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 280);
  if ( (v1 & 0x7F070) != 0 && dword_1C0011D90 && byte_1C0011D95 )
  {
    __outbyte(dword_1C0011D90, byte_1C0011D95);
    v1 = *(_QWORD *)(a1 + 280);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0011D90 )
    {
      LOBYTE(v1) = byte_1C0011D94;
      if ( byte_1C0011D94 )
        __outbyte(dword_1C0011D90, byte_1C0011D94);
    }
  }
  return v1;
}
