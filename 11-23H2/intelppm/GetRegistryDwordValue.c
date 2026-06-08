/*
 * XREFs of GetRegistryDwordValue @ 0x1C00270C8
 * Callers:
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
 *     ProcLibGlobalInit @ 0x1C0048C54 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault(a1, a2, a3);
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
