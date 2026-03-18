/*
 * XREFs of NtRequestPort @ 0x1407CB8D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1407390A0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtRequestPort(HANDLE Handle, __m256i *a2)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v7, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v7[0] = Object;
    LODWORD(v7[6]) = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = AlpcpSendMessage((__int64)v7, a2, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
