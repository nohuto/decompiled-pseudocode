/*
 * XREFs of KiEnclsDebugRead @ 0x140420030
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x140974724 (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
