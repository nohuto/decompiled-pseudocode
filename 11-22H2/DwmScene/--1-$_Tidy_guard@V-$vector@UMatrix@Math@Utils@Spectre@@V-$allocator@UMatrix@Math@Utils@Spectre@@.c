/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x18007CB34
 * Callers:
 *     ??$?0PEAUMatrix@Math@Utils@Spectre@@$0A@@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@QEAA@PEAUMatrix@Math@Utils@Spectre@@0AEBV?$allocator@UMatrix@Math@Utils@Spectre@@@1@@Z @ 0x18007C62C (--$-0PEAUMatrix@Math@Utils@Spectre@@$0A@@-$vector@UMatrix@Math@Utils@Spectre@@V-$allocator@UMatr.c)
 * Callees:
 *     ?_Tidy@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@AEAAXXZ @ 0x18007E720 (-_Tidy@-$vector@UMatrix@Math@Utils@Spectre@@V-$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<Spectre::Utils::Math::Matrix>>::~_Tidy_guard<std::vector<Spectre::Utils::Math::Matrix>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<Spectre::Utils::Math::Matrix>::_Tidy();
  return result;
}
