/*
 * XREFs of MiAttachWorkingSet @ 0x140374958
 * Callers:
 *     MiHandleForceTrimWorkingSets @ 0x140373F80 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     MiAttachSessionGlobal @ 0x140238D0C (MiAttachSessionGlobal.c)
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 */

char __fastcall MiAttachWorkingSet(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v2; // rcx

  LOBYTE(CurrentThread) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)CurrentThread )
  {
    if ( (_BYTE)CurrentThread == 1 )
      LOBYTE(CurrentThread) = (unsigned __int8)MiAttachSessionGlobal(
                                                 a1 - 192,
                                                 *(_DWORD *)(*(_QWORD *)(qword_140C51F48
                                                                       + 8LL * *(unsigned __int16 *)(a1 + 174))
                                                           + 16680LL));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v2 = a1 - 1664;
    if ( CurrentThread->Process != (_KPROCESS *)v2 )
      LOBYTE(CurrentThread) = KeForceAttachProcess(v2, 0LL);
  }
  return (char)CurrentThread;
}
