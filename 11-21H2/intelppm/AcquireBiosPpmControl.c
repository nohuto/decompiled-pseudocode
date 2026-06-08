/*
 * XREFs of AcquireBiosPpmControl @ 0x1C000224C
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0001EE0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 280);
  if ( (v1 & 0x7F070) != 0 && dword_1C001E8A0 && byte_1C001E8A5 )
  {
    __outbyte(dword_1C001E8A0, byte_1C001E8A5);
    v1 = *(_QWORD *)(a1 + 280);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C001E8A0 )
    {
      LOBYTE(v1) = byte_1C001E8A4;
      if ( byte_1C001E8A4 )
        __outbyte(dword_1C001E8A0, byte_1C001E8A4);
    }
  }
  return v1;
}
