/*
 * XREFs of ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18017B358
 * Callers:
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18015B970 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 *     ??1?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x180316A18 (--1-$vector@GV-$allocator@G@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned short>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 1));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
