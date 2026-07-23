/*
 * XREFs of NtQueueApcThreadEx @ 0x140779C20
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx2 @ 0x140779C70 (NtQueueApcThreadEx2.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  HANDLE v6; // r10
  ULONG v8; // r8d

  v6 = 0LL;
  v8 = 0;
  if ( ReserveHandle != (HANDLE)1 )
    v6 = ReserveHandle;
  LOBYTE(v8) = ReserveHandle == (HANDLE)1;
  return NtQueueApcThreadEx2(ThreadHandle, v6, v8, ApcRoutine, ApcArgument1, ApcArgument2, ApcArgument3);
}
