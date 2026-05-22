/*
 * XREFs of ??1?$unordered_map@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@U?$hash@G@2@U?$equal_to@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18018B0F8
 * Callers:
 *     _HapticInterface::HapticInterface_::_1_::dtor$2 @ 0x18018B049 (_HapticInterface--HapticInterface_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18018AA9C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

void __fastcall std::unordered_map<unsigned short,std::unique_ptr<unsigned char [0]>>::~unordered_map<unsigned short,std::unique_ptr<unsigned char [0]>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
