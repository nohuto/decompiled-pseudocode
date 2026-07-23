/*
 * XREFs of sub_1402676A8 @ 0x1402676A8
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1402676A8()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  bool v4; // zf

  result = (unsigned int)dword_140D06880;
  if ( (dword_140D06880 & 0x30) != 0 && (unsigned __int8)byte_140C52B33 <= 1u )
  {
    v1 = ExAcquireSpinLockExclusive(&dword_140C56920);
    if ( byte_140C52B33 == 1 )
    {
      stru_140C52AF0.Parameter = 0LL;
      stru_140C52AF0.List.Flink = 0LL;
      stru_140C52AF0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14058E0C0;
      byte_140C52B33 = 2;
      ExQueueWorkItem(&stru_140C52AF0, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v1 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v3 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
          v4 = ((unsigned int)result & *(_DWORD *)(v3 + 20)) == 0;
          *(_DWORD *)(v3 + 20) &= result;
          if ( v4 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v1);
  }
  return result;
}
