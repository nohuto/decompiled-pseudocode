/*
 * XREFs of NtNotifyChangeSession @ 0x1407B3FD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  size_t v11; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  _QWORD *v14; // r14
  __int64 v15; // rcx
  ULONG v16; // eax
  ULONG v17; // eax
  __int64 v18; // rax
  _BYTE *v19; // rbx
  __int64 v20; // rax
  _BYTE *Pool2; // rax
  unsigned __int16 v22; // r12
  _BYTE *v23; // rax
  char v24; // [rsp+30h] [rbp-1A8h]
  char v25; // [rsp+31h] [rbp-1A7h]
  KPROCESSOR_MODE v26; // [rsp+32h] [rbp-1A6h]
  NTSTATUS v27; // [rsp+38h] [rbp-1A0h]
  PVOID Object; // [rsp+50h] [rbp-188h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-180h] BYREF
  _OWORD Argument1[4]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v31[256]; // [rsp+A0h] [rbp-138h] BYREF

  v11 = PayloadSize;
  v24 = 0;
  memset(Argument1, 0, sizeof(Argument1));
  v25 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( PayloadSize > 0x100 )
    return -1073741580;
  Object = 0LL;
  result = ObReferenceObjectByHandle(SessionHandle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v27 = result;
  if ( result < 0 )
    return result;
  v14 = Object;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 760LL), Executive, 0, 0, 0LL);
  v15 = v14[3];
  v16 = *(_DWORD *)(v15 + 756);
  if ( v16 == ChangeSequenceNumber )
  {
    v17 = v16 + 1;
LABEL_5:
    *(_DWORD *)(v15 + 756) = v17;
    goto LABEL_6;
  }
  if ( v16 <= ChangeSequenceNumber || v16 - ChangeSequenceNumber >= 0xFFFFFFFD )
  {
    Interval.QuadPart = -1000000LL;
    v22 = 0;
    do
    {
      KeSetEvent((PRKEVENT)(v15 + 760), 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject((PVOID)(v14[3] + 760LL), Executive, 0, 0, 0LL);
      ++v22;
      v15 = v14[3];
    }
    while ( v22 <= 0xAu && *(_DWORD *)(v15 + 756) != ChangeSequenceNumber );
    v17 = ChangeSequenceNumber + 1;
    v11 = PayloadSize;
    goto LABEL_5;
  }
LABEL_6:
  v18 = v14[3];
  if ( Event == IoSessionEventIgnore )
  {
    KeSetEvent((PRKEVENT)(v18 + 760), 0, 0);
    ObfDereferenceObject(v14);
    return 0;
  }
  *(_DWORD *)(v18 + 752) = NewState;
  v19 = 0LL;
  if ( !(_DWORD)v11 )
    goto LABEL_8;
  if ( v26 == 1 )
  {
    if ( (unsigned __int64)Payload + v11 > 0x7FFFFFFF0000LL || (char *)Payload + v11 < Payload )
      MEMORY[0x7FFFFFFF0000] = 0;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v11, 1850961737LL);
    v19 = Pool2;
    if ( Pool2 )
    {
      v24 = 1;
      memmove(Pool2, Payload, v11);
    }
    else
    {
      v19 = v31;
      memmove(v31, Payload, v11);
      v25 = 1;
    }
    LODWORD(v11) = PayloadSize;
    goto LABEL_8;
  }
  if ( (unsigned int)(Event - 1) > 1 )
  {
    v23 = (_BYTE *)ExAllocatePool2(256LL, (unsigned int)v11, 1850961737LL);
    v19 = v23;
    if ( v23 )
    {
      v24 = 1;
      memmove(v23, Payload, (unsigned int)v11);
      goto LABEL_8;
    }
    v25 = 1;
  }
  v19 = Payload;
LABEL_8:
  LODWORD(Argument1[2]) = Event;
  *(_QWORD *)((char *)&Argument1[2] + 4) = __PAIR64__(v11, NewState);
  *(_QWORD *)&Argument1[3] = v19;
  *((_QWORD *)&Argument1[3] + 1) = v14;
  if ( !v25 && (unsigned int)(Event - 1) > 1 )
  {
    v20 = ExAllocatePool2(64LL, 64LL, 1850961737LL);
    if ( v20 )
    {
      *(_OWORD *)v20 = Argument1[0];
      *(_OWORD *)(v20 + 16) = Argument1[1];
      *(_OWORD *)(v20 + 32) = Argument1[2];
      *(_OWORD *)(v20 + 48) = Argument1[3];
      *(_QWORD *)(v20 + 16) = IopSessionChangeWorker;
      *(_QWORD *)(v20 + 24) = v20;
      *(_QWORD *)v20 = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v20, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)(v14[3] + 760LL), 0, 0);
  ObfDereferenceObject(v14);
  if ( v19 )
  {
    if ( v24 == 1 )
      ExFreePoolWithTag(v19, 0);
  }
  return v27;
}
