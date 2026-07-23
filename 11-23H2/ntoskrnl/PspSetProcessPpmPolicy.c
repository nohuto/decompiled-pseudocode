/*
 * XREFs of PspSetProcessPpmPolicy @ 0x1407C8980
 * Callers:
 *     <none>
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x140357250 (KeSetProcessPpmPolicy.c)
 */

__int64 __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  return KeSetProcessPpmPolicy(a1, a2);
}
