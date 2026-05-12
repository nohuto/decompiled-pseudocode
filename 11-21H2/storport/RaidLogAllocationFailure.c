/*
 * XREFs of RaidLogAllocationFailure @ 0x1C004EC94
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 */

void __fastcall RaidLogAllocationFailure(void *a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *ErrorLogEntry; // rax
  _DWORD *v8; // rbx

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 0x48u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset(ErrorLogEntry, 0, 0x48uLL);
    v8[3] = -2147221448;
    *((_WORD *)v8 + 1) = 32;
    v8[4] = 10;
    v8[5] = -1073741801;
    *((_QWORD *)v8 + 6) = a2;
    *((_QWORD *)v8 + 7) = a3;
    v8[16] = a4;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
