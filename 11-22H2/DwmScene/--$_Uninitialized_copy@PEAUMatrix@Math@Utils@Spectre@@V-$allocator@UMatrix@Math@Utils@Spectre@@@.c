/*
 * XREFs of ??$_Uninitialized_copy@PEAUMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@YAPEAUMatrix@Math@Utils@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMatrix@Math@Utils@Spectre@@@0@@Z @ 0x18007C9D0
 * Callers:
 *     ??$?0PEAUMatrix@Math@Utils@Spectre@@$0A@@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@QEAA@PEAUMatrix@Math@Utils@Spectre@@0AEBV?$allocator@UMatrix@Math@Utils@Spectre@@@1@@Z @ 0x18007C62C (--$-0PEAUMatrix@Math@Utils@Spectre@@$0A@@-$vector@UMatrix@Math@Utils@Spectre@@V-$allocator@UMatr.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_copy<Spectre::Utils::Math::Matrix *>(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
  {
    *a3 = *a1;
    a3[1] = a1[1];
    a3[2] = a1[2];
    a3[3] = a1[3];
    a3 += 4;
    a1 += 4;
  }
  return a3;
}
