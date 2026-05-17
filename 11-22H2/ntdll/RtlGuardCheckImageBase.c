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

unsigned __int64 __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_180199520 + 1)
      || (result = *((_QWORD *)&xmmword_180199520 + 1) + (unsigned int)qword_180199530, a1 >= result) )
    {
      result = RtlpxLookupFunctionTable(a1, (__int64 *)&v5);
    }
    else
    {
      v5 = xmmword_180199520;
    }
    if ( *((_QWORD *)&v5 + 1) != a1 )
    {
      if ( !a2 || (result = LdrIsEnclaveAddress(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
