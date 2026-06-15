/*
 * XREFs of ?reset@?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAXXZ @ 0x1800CB2B0
 * Callers:
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??1_WaitTask@@QEAA@XZ @ 0x1800D2D70 (--1_WaitTask@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<std::function<void (void)>>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
