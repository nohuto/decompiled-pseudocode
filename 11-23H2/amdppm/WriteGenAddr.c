/*
 * XREFs of WriteGenAddr @ 0x1C00029AC
 * Callers:
 *     PerfControlCpc @ 0x1C00018A0 (PerfControlCpc.c)
 *     WriteGenAddrEx @ 0x1C000292C (WriteGenAddrEx.c)
 *     C2Idle @ 0x1C0004C50 (C2Idle.c)
 *     C3Idle @ 0x1C0004D30 (C3Idle.c)
 *     C3IdleCheck @ 0x1C0004E30 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C0009D20 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0003DE0 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0003FBC (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  _BYTE *v4; // r10
  __int64 IoMemRaw; // rax
  unsigned __int8 v6; // cl
  __int64 v7; // r8
  char v8; // cl
  __int64 v9; // r8
  __int64 v10; // r11

  v3 = a2;
  v4 = a1;
  if ( a1 )
  {
    if ( a1[2] || a1[1] != a1[3] )
    {
      IoMemRaw = ReadIoMemRaw();
      v6 = v4[1];
      if ( v6 < 0x40u || v4[2] )
      {
        v7 = 1LL << v6;
        v8 = v4[2];
        v9 = (v7 - 1) << v8;
        v10 = v9 & (v3 << v8);
        a3 = IoMemRaw & ~v9;
        v3 = a3 | v10;
      }
    }
    WriteIoMemRaw(v4, v3, a3);
  }
}
