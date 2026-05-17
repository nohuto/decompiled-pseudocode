/*
 * XREFs of RtlGuardCheckImageBase @ 0x180074418
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180022920 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     LdrIsEnclaveAddress @ 0x1800D81D0 (LdrIsEnclaveAddress.c)
 */

unsigned __int64 __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_18019C530 + 1)
      || (result = *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned int)qword_18019C540, a1 >= result) )
    {
      result = RtlpxLookupFunctionTable(a1, (__int64 *)&v5);
    }
    else
    {
      v5 = xmmword_18019C530;
    }
    if ( *((_QWORD *)&v5 + 1) != a1 )
    {
      if ( !a2 || (result = LdrIsEnclaveAddress(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
