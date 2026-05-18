/*
 * XREFs of ?_Change_array@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXQEAU?$pair@PEBVMutex@Engine@Spectre@@_N@2@_K1@Z @ 0x18002A40C
 * Callers:
 *     ??$_Emplace_reallocate@PEAVMutex@Engine@Spectre@@AEA_N@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@QEAAPEAU?$pair@PEBVMutex@Engine@Spectre@@_N@1@QEAU21@$$QEAPEAVMutex@Engine@Spectre@@AEA_N@Z @ 0x180029958 (--$_Emplace_reallocate@PEAVMutex@Engine@Spectre@@AEA_N@-$vector@U-$pair@PEBVMutex@Engine@Spectre.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
