/*
 * XREFs of WriteGenAddr @ 0x1C000205C
 * Callers:
 *     WriteGenAddrEx @ 0x1C0002034 (WriteGenAddrEx.c)
 *     MWaitIdleCheck @ 0x1C00069E0 (MWaitIdleCheck.c)
 *     C2Idle @ 0x1C000B050 (C2Idle.c)
 *     C3Idle @ 0x1C000B110 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000B1F0 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C000BD40 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00013A0 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0001B64 (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r9
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = (__int64)a1;
  if ( a1 )
  {
    if ( a1[2] || a1[1] != a1[3] )
    {
      IoMemRaw = ReadIoMemRaw((__int64)a1);
      v5 = *(_BYTE *)(v3 + 1);
      if ( v5 < 0x40u || *(_BYTE *)(v3 + 2) )
        v2 = IoMemRaw & ~(((1LL << v5) - 1) << *(_BYTE *)(v3 + 2)) | (((1LL << v5) - 1) << *(_BYTE *)(v3 + 2)) & (v2 << *(_BYTE *)(v3 + 2));
    }
    WriteIoMemRaw(v3, v2);
  }
}
