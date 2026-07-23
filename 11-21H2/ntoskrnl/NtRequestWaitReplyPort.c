/*
 * XREFs of NtRequestWaitReplyPort @ 0x140663B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140663C48 @ 0x140663C48 (sub_140663C48.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 */

NTSTATUS __cdecl NtRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v6; // si
  int v7; // ebx
  int v9; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = (int)RequestMessage;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(PortHandle, 1u, qword_140D069D8, v6, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( v6 )
      sub_140663C48(ReplyMessage, 0LL);
    LOBYTE(v9) = v6;
    v7 = sub_1407AD040((int)Object, 0x20000, v4, 0, (__int64)ReplyMessage, 0LL, 0LL, 0LL, v9);
    if ( v7 == -1073740029 )
      v7 = -1073741769;
    if ( v7 == -1073740031 )
      v7 = -1073741229;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v7;
}
