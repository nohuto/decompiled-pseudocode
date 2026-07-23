/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x1407C1CE8
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x14055918C (IopRevokeFileObjectForProcess.c)
 *     IopCancelIoFile @ 0x1407C1C5C (IopCancelIoFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x140351DD0 (IopCancelApcRequired.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsGetNextProcessThread @ 0x140742CA0 (PsGetNextProcessThread.c)
 *     IopCancelIrpsInThreadList @ 0x1407C1DB8 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  _QWORD *v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = v8 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)Process, i);
    v8 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (unsigned int)IopCancelApcRequired((__int64)NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, v10);
  }
  return v4;
}
