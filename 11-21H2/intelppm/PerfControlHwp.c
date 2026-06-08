/*
 * XREFs of PerfControlHwp @ 0x1C0001A80
 * Callers:
 *     <none>
 * Callees:
 *     WriteIoMemRawEx @ 0x1C0001B38 (WriteIoMemRawEx.c)
 *     ReadIoMemRawEx @ 0x1C0002290 (ReadIoMemRawEx.c)
 */

void __fastcall PerfControlHwp(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 IoMemRaw; // rax
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h]

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
    LODWORD(v9) = IoMemRaw;
    HIDWORD(v9) = HIDWORD(IoMemRaw) & 0xFFFFFBFF | (*(_BYTE *)(a2 + 37) != 0 ? 0x400 : 0);
    v8 = *(_QWORD *)(a1 + 184) & *(_QWORD *)a2 | v9 & ~*(_QWORD *)(a1 + 184);
    WriteIoMemRawEx(v7, v8);
    *(_QWORD *)(a1 + 176) = v8;
  }
}
