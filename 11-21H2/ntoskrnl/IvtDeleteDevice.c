/*
 * XREFs of IvtDeleteDevice @ 0x140531660
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvFreeMemory @ 0x14052268C (ExtEnvFreeMemory.c)
 */

void __fastcall IvtDeleteDevice(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx

  ExtEnvFreeMemory(a1, *(_QWORD *)(a2 + 32));
  ExtEnvFreeMemory(v3, a2);
}
