/*
 * XREFs of PspSetProcessPpmPolicy @ 0x1407C86B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x1403570B0 (KeSetProcessPpmPolicy.c)
 */

__int64 __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  return KeSetProcessPpmPolicy(a1, a2);
}
