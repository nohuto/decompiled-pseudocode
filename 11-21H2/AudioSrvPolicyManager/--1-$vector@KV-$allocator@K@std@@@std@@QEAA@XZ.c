/*
 * XREFs of ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x180014DBC
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$21 @ 0x1800455B2 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$21.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned long>::~vector<unsigned long>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
