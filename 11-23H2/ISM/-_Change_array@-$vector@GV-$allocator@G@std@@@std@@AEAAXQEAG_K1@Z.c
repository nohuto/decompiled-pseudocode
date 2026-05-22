/*
 * XREFs of ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x1800DE80C
 * Callers:
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x1800DCDB4 (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 1));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 2 * a3;
  result = a2 + 2 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
