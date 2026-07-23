/*
 * XREFs of FsRtlUpdateDiskCounters @ 0x140239760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall FsRtlUpdateDiskCounters(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  if ( a1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)result + 4400, a1);
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)result + 4401, a2);
  return result;
}
