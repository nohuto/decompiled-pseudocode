/*
 * XREFs of KeIsExecutingDpc @ 0x140233690
 * Callers:
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()[36].Unused0[2] & 0x10001;
}
