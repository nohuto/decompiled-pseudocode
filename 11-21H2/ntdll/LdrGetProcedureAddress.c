/*
 * XREFs of LdrGetProcedureAddress @ 0x180088420
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddress(
        unsigned __int64 a1,
        const void **a2,
        __int64 a3,
        volatile signed __int32 *a4)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, 0, retaddr);
}
