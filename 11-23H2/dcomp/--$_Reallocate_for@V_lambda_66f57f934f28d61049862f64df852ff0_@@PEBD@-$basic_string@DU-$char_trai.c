/*
 * XREFs of ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x18014E8B0
 * Callers:
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18007D778 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>(
        __int64 a1,
        size_t a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rax
  _BYTE *v12; // r14

  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a2 | 0xF;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v4 = v10 + v8;
      if ( v9 >= v10 + v8 )
        v4 = v9;
    }
  }
  v11 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v4 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v4;
  v12 = v11;
  memcpy_0(v11, a4, a2);
  v12[a2] = 0;
  if ( v8 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, v8 + 1);
  *(_QWORD *)a1 = v12;
  return a1;
}
