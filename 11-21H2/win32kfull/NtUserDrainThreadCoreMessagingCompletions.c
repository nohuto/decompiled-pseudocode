/*
 * XREFs of NtUserDrainThreadCoreMessagingCompletions @ 0x1C00A5B50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5CC0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 */

__int64 NtUserDrainThreadCoreMessagingCompletions()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  int v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v11; // [rsp+28h] [rbp-50h]
  _OWORD v12[3]; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF
  __int64 v14; // [rsp+88h] [rbp+10h] BYREF

  EnterSharedCrit();
  v0 = 0LL;
  v1 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v1 = *ThreadWin32Thread;
  if ( *(_QWORD *)(v1 + 1464) )
  {
    v4 = 0LL;
    v5 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v5 )
      v4 = (_QWORD *)*v5;
    v13 = 0;
    memset(v12, 0, 32);
    v14 = 0LL;
    v6 = 0;
    ZwSetIoCompletionEx(v4[178], v4[182], 0LL, 2LL, 0, 0LL);
    do
    {
      while ( 1 )
      {
        LOBYTE(v11) = 0;
        v7 = ZwRemoveIoCompletionEx(v4[178], v12, 1LL, &v13, &v14, v11);
        v8 = xxxHandleQueueCompletion(v4, v7, v12, 0LL);
        if ( v8 != 3 )
          break;
        v6 = 1;
      }
    }
    while ( v8 == 4 );
    if ( v6 )
      ZwAssociateWaitCompletionPacket(v4[181], v4[178], v4[180], 0LL, 1LL, 0, 0LL, 0LL);
    v0 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v0;
}
