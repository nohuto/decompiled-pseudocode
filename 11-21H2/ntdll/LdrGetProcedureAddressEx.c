/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180072FD0
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(
        unsigned __int64 a1,
        const void **a2,
        __int64 a3,
        volatile signed __int32 *a4,
        char a5)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
