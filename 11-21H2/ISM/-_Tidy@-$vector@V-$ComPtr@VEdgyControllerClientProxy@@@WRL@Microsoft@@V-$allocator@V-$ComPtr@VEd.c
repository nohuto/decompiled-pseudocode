/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801A9D74
 * Callers:
 *     ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801A9468 (--1-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A9474 (--1Edge@@QEAA@XZ.c)
 *     ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x1801AB090 (--4Edge@@QEAAAEAV0@$$QEAV0@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A93F8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy(__int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
