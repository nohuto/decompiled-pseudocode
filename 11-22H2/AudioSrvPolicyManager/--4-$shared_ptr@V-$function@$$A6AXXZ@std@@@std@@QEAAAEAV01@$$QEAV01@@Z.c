/*
 * XREFs of ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800156E4
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800228D0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800025A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<std::function<void (void)>>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
