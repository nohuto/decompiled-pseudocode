/*
 * XREFs of ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x180019390
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@EEAAXXZ @ 0x180019380 (-_Destroy@-$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@EEAAXXZ.c)
 * Callees:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________lambda_78b0f3466128b2cc365cc1d34b7f49ae___ @ 0x180019430 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--weak_ptr_CWindowB.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800194D8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CWindowBorder::CCachedBorderBrush::~CCachedBorderBrush(CWindowBorder::CCachedBorderBrush *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  std::_Ref_count_base *v7; // rcx
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________lambda_78b0f3466128b2cc365cc1d34b7f49ae___(
    &v8,
    *(_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache,
    CWindowBorder::CCachedBorderBrush::s_cache);
  v2 = (_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache;
  v3 = v8;
  if ( v8 != (_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache )
  {
    v4 = (_QWORD *)v8[1];
    *v4 = CWindowBorder::CCachedBorderBrush::s_cache;
    v2[1] = v4;
    v5 = 0LL;
    do
    {
      v6 = (_QWORD *)*v3;
      v7 = (std::_Ref_count_base *)v3[3];
      if ( v7 )
        std::_Ref_count_base::_Decwref(v7);
      std::_Deallocate<16,0>(v3, 32LL);
      v3 = v6;
      ++v5;
    }
    while ( v6 != v2 );
    *((_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache + 1) -= v5;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 48);
}
