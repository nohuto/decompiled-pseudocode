/*
 * XREFs of RtlGuardCheckImageBase @ 0x180073DA8
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180022A3C (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023220 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrIsEnclaveAddress @ 0x1800D8820 (LdrIsEnclaveAddress.c)
 */

char __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  unsigned __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_180199520 + 1)
      || (v4 = *((_QWORD *)&xmmword_180199520 + 1) + (unsigned int)qword_180199530, (unsigned __int64)BaseAddress >= v4) )
    {
      LOBYTE(v4) = RtlpxLookupFunctionTable(BaseAddress, (__int64 *)&v6);
    }
    else
    {
      v6 = xmmword_180199520;
    }
    if ( *((PVOID *)&v6 + 1) != BaseAddress )
    {
      if ( !a2 || (LOBYTE(v4) = LdrIsEnclaveAddress(BaseAddress), !(_BYTE)v4) )
        __fastfail(0x18u);
    }
  }
  return v4;
}
