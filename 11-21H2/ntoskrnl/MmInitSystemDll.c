/*
 * XREFs of MmInitSystemDll @ 0x140B30EE0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x140757130 (PspReferenceSystemDll.c)
 */

__int64 MmInitSystemDll()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (__int64)PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll(*(signed __int64 **)(result - 8));
    qword_140C50640 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject(*(signed __int64 **)(v1 - 8), result, 0x64537350u);
  }
  return result;
}
