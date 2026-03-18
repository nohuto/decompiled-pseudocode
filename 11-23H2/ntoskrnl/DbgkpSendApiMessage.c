/*
 * XREFs of DbgkpSendApiMessage @ 0x14093A050
 * Callers:
 *     DbgkPostModuleMessage @ 0x14053BA1C (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x14076FC1C (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x1407A3DBC (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1407CB830 (DbgkUnMapViewOfSection.c)
 *     DbgkCreateMinimalProcess @ 0x140853270 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140936DD4 (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14093918C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14093923C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1409392F8 (DbgkExitThread.c)
 *     DbgkForwardException @ 0x140939564 (DbgkForwardException.c)
 * Callees:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x1405FC9E0 (EtwTraceDebuggerEvent.c)
 *     DbgkpQueueMessage @ 0x140937E4C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140939524 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebp
  int v8; // esi

  CurrentThread = KeGetCurrentThread();
  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)CurrentThread, 1);
  do
  {
    v7 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v7 = (unsigned __int8)DbgkpSuspendProcess((__int64)Object);
    *(_DWORD *)(a3 + 44) = 259;
    v8 = DbgkpQueueMessage(Object, (char *)CurrentThread, a3, 32 * (a2 & 2u), 0LL);
    if ( v7 )
    {
      PsThawMultiProcess((ULONG_PTR)Object, 0LL, 1u);
      KeLeaveCriticalRegion();
    }
  }
  while ( v8 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v8;
}
