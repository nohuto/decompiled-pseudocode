/*
 * XREFs of ?_Change_array@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXQEAU?$pair@II@2@_K1@Z @ 0x18008393C
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@II@std@@@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@QEAAPEAU?$pair@II@1@QEAU21@$$QEAU21@@Z @ 0x180081864 (--$_Emplace_reallocate@U-$pair@II@std@@@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned int,unsigned int>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
