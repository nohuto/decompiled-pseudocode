/*
 * XREFs of ?_Change_array@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEAAXQEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@2@_K1@Z @ 0x1800118EC
 * Callers:
 *     ??$_Emplace_reallocate@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x1800109F0 (--$_Emplace_reallocate@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr.c)
 *     ??$_Emplace_reallocate@AEBV?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$weak_ptr@VLoaderBase@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E634 (--$_Emplace_reallocate@AEBV-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VL.c)
 *     ??$_Insert_range@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@1@PEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x18002F200 (--$_Insert_range@PEAV-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VR.c)
 *     ??$_Emplace_reallocate@V?$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@@?$vector@V?$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$weak_ptr@VIRenderOutput@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x180056D3C (--$_Emplace_reallocate@V-$weak_ptr@VIRenderOutput@Engine@Spectre@@@std@@@-$vector@V-$weak_ptr@VI.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@0@@Z @ 0x1800109B0 (--$_Destroy_range@V-$allocator@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@Y.c)
 */

void __fastcall std::vector<std::weak_ptr<Spectre::Engine::LoaderBase>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::weak_ptr<Spectre::Engine::RendererResource>>>(
      (__int64)v6,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
