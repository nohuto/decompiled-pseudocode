/*
 * XREFs of RtlpTpInitializeData @ 0x18004D8F0
 * Callers:
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x18004D3B0 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x18004D620 (RtlRegisterWait.c)
 * Callees:
 *     NtDuplicateToken @ 0x1800A16F0 (NtDuplicateToken.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180126B40 (TpSetDefaultPoolMaxThreads.c)
 */

__int64 __fastcall RtlpTpInitializeData(HANDLE *NewTokenHandle, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  __int16 v5; // di
  NTSTATUS v8; // eax

  v3 = 0;
  *((_DWORD *)NewTokenHandle + 2) = a2;
  *NewTokenHandle = 0LL;
  v5 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 || (v5 & 0x100) == 0 )
    return 0LL;
  v8 = NtDuplicateToken(a3, 4u, 0LL, 0, TokenImpersonation, NewTokenHandle);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
