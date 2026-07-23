/*
 * XREFs of NtRequestPort @ 0x1406CA660
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 */

NTSTATUS __cdecl NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  int v4; // ebx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v8[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v8, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, qword_140D069D8, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
  if ( v4 >= 0 )
  {
    v8[0] = Object;
    LODWORD(v8[6]) = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    LOBYTE(v5) = *((_BYTE *)KeGetCurrentThread() + 562);
    v4 = sub_1407A9ED0(v8, RequestMessage, 0LL, v5);
    sub_1402F9540((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
  }
  return v4;
}
