/*
 * XREFs of PsLookupThreadByThreadId @ 0x1407A7D90
 * Callers:
 *     sub_1406634A0 @ 0x1406634A0 (sub_1406634A0.c)
 *     PsLookupProcessThreadByCid @ 0x140663880 (PsLookupProcessThreadByCid.c)
 *     sub_1407A7D20 @ 0x1407A7D20 (sub_1407A7D20.c)
 *     sub_140808A98 @ 0x140808A98 (sub_140808A98.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r14
  struct _KTHREAD *v4; // rax
  NTSTATUS v5; // ebx
  struct _KTHREAD *v6; // rdi
  __int64 CurrentServerSilo; // rax
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  --*((_WORD *)CurrentThread + 243);
  LOBYTE(Thread) = 6;
  v4 = (struct _KTHREAD *)sub_1407A8900(ThreadId, Thread);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( PsGetThreadProcess(v4) == qword_140D06940 )
      goto LABEL_9;
    if ( (*((_DWORD *)v6 + 344) & 2) == 0 )
    {
      _InterlockedOr(v10, 0);
      if ( (*((_QWORD *)v6 + 170) & 1) != 0 )
        sub_14024BA7C((ULONG_PTR)v6 + 1360);
      if ( (*((_DWORD *)v6 + 344) & 2) == 0 )
        goto LABEL_9;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( sub_140300B74(*((_QWORD *)v6 + 68), CurrentServerSilo) )
    {
      *v3 = v6;
    }
    else
    {
LABEL_9:
      v5 = -1073741813;
      ObfDereferenceObject(v6);
    }
  }
  else
  {
    v5 = -1073741813;
  }
  v8 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v8 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return v5;
}
