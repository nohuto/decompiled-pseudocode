/*
 * XREFs of RtlpTpInitializeData @ 0x1800707E4
 * Callers:
 *     RtlCreateTimer @ 0x18006FDA0 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x180070540 (RtlRegisterWait.c)
 * Callees:
 *     NtDuplicateToken @ 0x1800A48B0 (NtDuplicateToken.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180123C80 (TpSetDefaultPoolMaxThreads.c)
 */

NTSTATUS __fastcall RtlpTpInitializeData(HANDLE *NewTokenHandle, unsigned int a2, void *a3)
{
  __int16 v4; // bx
  NTSTATUS result; // eax

  *NewTokenHandle = 0LL;
  *((_DWORD *)NewTokenHandle + 2) = a2;
  v4 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 )
    return 0;
  if ( (v4 & 0x100) == 0 )
    return 0;
  result = NtDuplicateToken(a3, 4u, 0LL, 0, TokenImpersonation, NewTokenHandle);
  if ( result >= 0 )
    return 0;
  return result;
}
