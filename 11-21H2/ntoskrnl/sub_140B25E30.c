/*
 * XREFs of sub_140B25E30 @ 0x140B25E30
 * Callers:
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 * Callees:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 */

NTSTATUS sub_140B25E30()
{
  unsigned int v0; // edi
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 0;
  while ( 1 )
  {
    KeInitializeQueue((PRKQUEUE)&unk_140C489A0 + v0, 0);
    result = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)sub_1403DD920,
               (PVOID)v0);
    v2 = result;
    if ( result < 0 )
      break;
    ZwClose(ThreadHandle);
    if ( ++v0 >= 2 )
    {
      LOWORD(stru_140C48A20.Header.Lock) = 1;
      stru_140C48A20.Header.WaitListHead.Blink = &stru_140C48A20.Header.WaitListHead;
      stru_140C48A20.Header.WaitListHead.Flink = &stru_140C48A20.Header.WaitListHead;
      result = v2;
      stru_140C48A20.Header.Size = 6;
      stru_140C48A20.Header.SignalState = 1;
      return result;
    }
  }
  return result;
}
