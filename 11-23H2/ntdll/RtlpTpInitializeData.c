/*
 * XREFs of RtlpTpInitializeData @ 0x18004D8F0
 * Callers:
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x18004D3B0 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x18004D620 (RtlRegisterWait.c)
 * Callees:
 *     NtDuplicateToken @ 0x1800A16F0 (NtDuplicateToken.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180126B70 (TpSetDefaultPoolMaxThreads.c)
 */

__int64 __fastcall RtlpTpInitializeData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int16 v5; // di
  int v8; // eax

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  v5 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 || (v5 & 0x100) == 0 )
    return 0LL;
  v8 = NtDuplicateToken(a3, 4LL, 0LL, 0LL, 2, a1);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
