/*
 * XREFs of ?_Change_array@?$vector@UDeferredZOrder@CShellSnapComponent@@V?$allocator@UDeferredZOrder@CShellSnapComponent@@@std@@@std@@AEAAXQEAUDeferredZOrder@CShellSnapComponent@@_K1@Z @ 0x1806658B8
 * Callers:
 *     ??$_Emplace_reallocate@UDeferredZOrder@CShellSnapComponent@@@?$vector@UDeferredZOrder@CShellSnapComponent@@V?$allocator@UDeferredZOrder@CShellSnapComponent@@@std@@@std@@QEAAPEAUDeferredZOrder@CShellSnapComponent@@QEAU23@$$QEAU23@@Z @ 0x18065E53C (--$_Emplace_reallocate@UDeferredZOrder@CShellSnapComponent@@@-$vector@UDeferredZOrder@CShellSnap.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CShellSnapComponent::DeferredZOrder>::_Change_array(
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
