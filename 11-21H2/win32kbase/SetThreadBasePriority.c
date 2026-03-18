/*
 * XREFs of SetThreadBasePriority @ 0x1C0054860
 * Callers:
 *     SetThreadPriority @ 0x1C00546A0 (SetThreadPriority.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C00547BC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     IVWorkerThread @ 0x1C01F01F0 (IVWorkerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SetThreadBasePriority(PETHREAD Thread, int a2)
{
  _QWORD SystemInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  v7 = 0;
  SystemInformation[0] = PsGetThreadProcessId(Thread);
  SystemInformation[1] = PsGetThreadId(Thread);
  v6 = a2;
  return ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL);
}
