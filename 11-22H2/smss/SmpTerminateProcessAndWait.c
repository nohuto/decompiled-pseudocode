/*
 * XREFs of SmpTerminateProcessAndWait @ 0x140001788
 * Callers:
 *     SmpTerminateCSR @ 0x140001660 (SmpTerminateCSR.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpTerminateProcessAndWait(__int64 a1)
{
  NTSTATUS v2; // r8d
  __int64 v3; // rax

  v2 = NtTerminateProcess(*(HANDLE *)(a1 + 32), 0);
  if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741558 )
    return NtWaitForSingleObject(*(HANDLE *)(a1 + 32), 0, 0LL);
  v3 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
  SmpGlobalLog[2 * v3 + 2] = 92;
  SmpGlobalLog[2 * v3 + 3] = v2;
  *(_QWORD *)&SmpGlobalLog[2 * v3 + 4] = a1;
  return v2;
}
