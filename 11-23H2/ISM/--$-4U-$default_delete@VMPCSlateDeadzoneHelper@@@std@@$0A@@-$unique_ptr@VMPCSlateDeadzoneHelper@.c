/*
 * XREFs of ??$?4U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BD748
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800BEDC0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801DE030 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801E3A70 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD **__fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::operator=<std::default_delete<MPCSlateDeadzoneHelper>,0>(
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx

  if ( a1 != a2 )
  {
    v3 = (_QWORD *)*a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      v5 = (std::_Ref_count_base *)v4[3];
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
      operator delete(v4);
    }
  }
  return a1;
}
