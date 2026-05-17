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

unsigned __int64 __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_18018F510 + 1)
      || (result = *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned int)qword_18018F520, a1 >= result) )
    {
      result = RtlpxLookupFunctionTable(a1, (__int64 *)&v5);
    }
    else
    {
      v5 = xmmword_18018F510;
    }
    if ( *((_QWORD *)&v5 + 1) != a1 )
    {
      if ( !a2 || (result = LdrIsEnclaveAddress(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
