/*
 * XREFs of ??$_Assign_range@PEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAXPEAI0Uforward_iterator_tag@1@@Z @ 0x18001E8A4
 * Callers:
 *     ??4?$vector@IV?$allocator@I@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001F178 (--4-$vector@IV-$allocator@I@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAIPEAI@std@@YAPEAIPEAI00@Z @ 0x18001E904 (--$_Copy_memmove@PEAIPEAI@std@@YAPEAIPEAI00@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18001F628 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Assign_range<unsigned int *>(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 2 > (unsigned __int64)((__int64)(a1[2] - *a1) >> 2) )
    std::vector<unsigned int>::_Clear_and_reserve_geometric();
  result = std::_Copy_memmove<unsigned int *,unsigned int *>(a2);
  a1[1] = result;
  return result;
}
