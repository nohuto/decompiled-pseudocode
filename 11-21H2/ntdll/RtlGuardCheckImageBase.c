/*
 * XREFs of RtlGuardCheckImageBase @ 0x180074220
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     LdrIsEnclaveAddress @ 0x1800D8510 (LdrIsEnclaveAddress.c)
 */

char __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  unsigned __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18018F510 + 1)
      || (v4 = *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned int)qword_18018F520, (unsigned __int64)BaseAddress >= v4) )
    {
      LOBYTE(v4) = RtlpxLookupFunctionTable(BaseAddress, (__int64 *)&v6);
    }
    else
    {
      v6 = xmmword_18018F510;
    }
    if ( *((PVOID *)&v6 + 1) != BaseAddress )
    {
      if ( !a2 || (LOBYTE(v4) = LdrIsEnclaveAddress(BaseAddress), !(_BYTE)v4) )
        __fastfail(0x18u);
    }
  }
  return v4;
}
