/*
 * XREFs of ??$_Uninitialized_copy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEBV10@0PEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x1800BE6D0
 * Callers:
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x1800BE7E0 (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18039122C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Uninitialized_copy<std::vector<Windows::UI::Color> const *,std::allocator<std::vector<Windows::UI::Color>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 i; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // r14
  signed __int64 v9; // rbx

  for ( i = a1; i != a2; i += 24LL )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    v6 = (__int64)(*(_QWORD *)(i + 8) - *(_QWORD *)i) >> 2;
    if ( v6 )
    {
      if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector too long");
      v7 = 4 * v6;
      if ( 4 * v6 >= 0x1000 )
      {
        v8 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(4 * v6);
      }
      else if ( v7 )
      {
        v8 = (char *)operator new(4 * v6);
      }
      else
      {
        v8 = 0LL;
      }
      *a3 = v8;
      a3[1] = v8;
      a3[2] = &v8[v7];
      v9 = *(_QWORD *)(i + 8) - *(_QWORD *)i;
      memmove_0(v8, *(const void **)i, v9);
      a3[1] = &v8[4 * (v9 >> 2)];
    }
    a3 += 3;
  }
  return a3;
}
