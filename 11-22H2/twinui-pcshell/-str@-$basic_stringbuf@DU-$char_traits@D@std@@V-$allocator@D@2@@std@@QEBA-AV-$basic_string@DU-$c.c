/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800C1538
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BD634 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BE188 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 * Callees:
 *     ?_Get_buffer_view@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x1800C1438 (-_Get_buffer_view@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AU_Buffer.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::stringbuf::str(__int64 a1, _QWORD *a2)
{
  size_t v3; // rbp
  size_t v4; // rsi
  size_t v5; // rdi
  size_t v6; // rcx
  void *v7; // r14
  void *v9; // rdi
  void *Src; // [rsp+28h] [rbp-30h] BYREF
  size_t Size; // [rsp+30h] [rbp-28h]

  *a2 = 0LL;
  a2[2] = 0LL;
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  std::stringbuf::_Get_buffer_view(a1, (__int64)&Src);
  if ( Src )
  {
    v3 = a2[3];
    v4 = Size;
    if ( Size <= v3 )
    {
      v9 = a2;
      if ( v3 >= 0x10 )
        v9 = (void *)*a2;
      a2[2] = Size;
      memmove_0(v9, Src, v4);
      *((_BYTE *)v9 + v4) = 0;
    }
    else
    {
      v5 = 0x7FFFFFFFFFFFFFFFLL;
      if ( Size > 0x7FFFFFFFFFFFFFFFLL )
        std::_Xlen_string();
      if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
      {
        v6 = v3 >> 1;
        if ( v3 <= 0x7FFFFFFFFFFFFFFFLL - (v3 >> 1) )
        {
          v5 = v6 + v3;
          if ( (Size | 0xF) >= v6 + v3 )
            v5 = Size | 0xF;
        }
      }
      v7 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5 + 1);
      a2[2] = v4;
      a2[3] = v5;
      memcpy_0(v7, Src, v4);
      *((_BYTE *)v7 + v4) = 0;
      if ( v3 >= 0x10 )
        std::_Deallocate<16,0>(*a2, v3 + 1);
      *a2 = v7;
    }
  }
  return a2;
}
