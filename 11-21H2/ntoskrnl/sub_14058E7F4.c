/*
 * XREFs of sub_14058E7F4 @ 0x14058E7F4
 * Callers:
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14058E7F4(unsigned __int64 a1)
{
  unsigned __int64 *i; // rbx
  unsigned __int64 **v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51E90);
  for ( i = (unsigned __int64 *)qword_140C51E80; ; i = (unsigned __int64 *)*i )
  {
    while ( 1 )
    {
      if ( !i )
      {
        --qword_140C51E98;
        goto LABEL_8;
      }
      if ( a1 <= i[3] )
        break;
      i = (unsigned __int64 *)i[1];
    }
    if ( a1 >= i[3] )
      break;
  }
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140C51E80, i);
  v3 = (unsigned __int64 **)qword_140C51EA8;
  if ( *(PVOID **)qword_140C51EA8 != &qword_140C51EA0 )
    __fastfail(3u);
  i[1] = qword_140C51EA8;
  *i = (unsigned __int64)&qword_140C51EA0;
  *v3 = i;
  qword_140C51EA8 = (__int64)i;
  if ( (unsigned __int64)++qword_140C51EB0 >= 0x20 && !byte_140C51EB8 )
  {
    stru_140C51EC0.Parameter = 0LL;
    stru_140C51EC0.List.Flink = 0LL;
    stru_140C51EC0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14058E2D0;
    ExQueueWorkItem(&stru_140C51EC0, DelayedWorkQueue);
    byte_140C51EB8 = 1;
  }
LABEL_8:
  --qword_140C51E88;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51E90);
}
