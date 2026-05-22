/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18018AA9C
 * Callers:
 *     ??1?$list@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18018B0CC (--1-$list@U-$pair@$$CBGV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@@std@@V-$allo.c)
 *     ??1?$unordered_map@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@U?$hash@G@2@U?$equal_to@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18018B0F8 (--1-$unordered_map@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@U-$hash@G@2@U-$e.c)
 *     ??1HapticInterface@@UEAA@XZ @ 0x18018B148 (--1HapticInterface@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  _QWORD *v4; // rdi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (void *)v2[3];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        operator delete[](v3);
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
