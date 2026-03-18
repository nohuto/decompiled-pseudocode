/*
 * XREFs of NtReplyPort @ 0x1407D7A20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B5F8 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1407390A0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtReplyPort(HANDLE Handle, __m256i *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  __int64 v7[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v7, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v7[6]) = 0;
    v7[0] = (__int64)Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v5 = AlpcpReplyLegacySynchronousRequest(v7, (unsigned __int64)a2, KeGetCurrentThread()->PreviousMode);
    }
    else
    {
      LODWORD(v7[6]) = 65537;
      v5 = AlpcpSendMessage((__int64)v7, a2, 0LL, KeGetCurrentThread()->PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
