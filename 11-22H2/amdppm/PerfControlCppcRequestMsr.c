/*
 * XREFs of PerfControlCppcRequestMsr @ 0x1C00031E0
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRawEx @ 0x1C0003E08 (ReadIoMemRawEx.c)
 *     WriteIoMemRawEx @ 0x1C0003FEC (WriteIoMemRawEx.c)
 */

void __fastcall PerfControlCppcRequestMsr(__int64 a1, _QWORD *a2, char a3, char a4)
{
  __int64 IoMemRaw; // rax
  __int64 v7; // r11
  __int64 v8; // rbx

  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 137) || a4 )
    {
      IoMemRaw = ReadIoMemRawEx(a1 + 152);
      *(_BYTE *)(a1 + 137) = 1;
    }
    else
    {
      IoMemRaw = *(_QWORD *)(a1 + 176);
      v7 = a1 + 152;
    }
    v8 = *(_QWORD *)(a1 + 184) & *a2 | IoMemRaw & ~*(_QWORD *)(a1 + 184);
    WriteIoMemRawEx(v7, v8);
    *(_QWORD *)(a1 + 176) = v8;
  }
}
