/*
 * XREFs of sub_140B03688 @ 0x140B03688
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall sub_140B03688(int a1))()
{
  __int64 (*result)(); // rax

  if ( a1 )
  {
    if ( a1 == 3 && !byte_140C23414 )
      dword_140C1FB94 |= 2u;
  }
  else
  {
    result = sub_1405D77A0;
    dword_140C1FB94 = 65;
    stru_140C1FB60.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1405D77A0;
    stru_140C1FB60.Parameter = 0LL;
    stru_140C1FB60.List.Flink = 0LL;
  }
  return result;
}
