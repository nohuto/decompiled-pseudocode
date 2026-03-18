/*
 * XREFs of PspSetProcessPpmPolicy @ 0x1407C8C40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x140356AB0 (KeSetProcessPpmPolicy.c)
 */

__int64 __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  return KeSetProcessPpmPolicy(a1, a2);
}
