/*
 * XREFs of ?_Change_array@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@AEAAXQEAPEAUIUnknown@@_K1@Z @ 0x1801AE7A0
 * Callers:
 *     ??$_Emplace_reallocate@PEAUIUnknown@@@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAAPEAPEAUIUnknown@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1800A7DF8 (--$_Emplace_reallocate@PEAUIUnknown@@@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@s.c)
 *     ??$_Emplace_reallocate@AEBQEAUIUnknown@@@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAAPEAPEAUIUnknown@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801ACB3C (--$_Emplace_reallocate@AEBQEAUIUnknown@@@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<IUnknown *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
