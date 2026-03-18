/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x140466530
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 */

__int64 __fastcall VmSetThreadSchedulerAssist(ULONG_PTR a1)
{
  return KeSetThreadSchedulerAssist(a1);
}
