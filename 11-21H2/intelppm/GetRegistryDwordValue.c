/*
 * XREFs of GetRegistryDwordValue @ 0x1C002A9A0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 *     InitDriver @ 0x1C0047234 (InitDriver.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x1C002AC80 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault(a1, a2, a3);
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
