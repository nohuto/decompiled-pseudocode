/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800891F0
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180085E80 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180120CE4 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180350F2C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::stringbuf::str(__int64 a1, _QWORD *a2)
{
  const void *v4; // r15
  unsigned __int64 v5; // rbp
  size_t v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  size_t v10; // rcx
  void *v11; // rax
  void *v12; // rsi
  void *v14; // rbx

  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 || !std::streambuf::pptr(a1) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::streambuf::gptr(a1) )
    {
      std::streambuf::eback(a1);
      std::streambuf::egptr(a1);
      std::string::assign(a2);
    }
  }
  else
  {
    v4 = (const void *)std::streambuf::pbase(a1);
    v5 = std::streambuf::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    v6 = v5 - (_QWORD)v4;
    v7 = a2[3];
    if ( v6 > v7 )
    {
      v8 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
        std::_Xlen_string();
      if ( (v6 | 0xF) > 0x7FFFFFFFFFFFFFFFLL || (v9 = v7 >> 1, v7 > 0x7FFFFFFFFFFFFFFFLL - (v7 >> 1)) )
      {
        v10 = 0x8000000000000000uLL;
      }
      else
      {
        v8 = v9 + v7;
        if ( (v6 | 0xF) >= v9 + v7 )
          v8 = v6 | 0xF;
        v10 = v8 + 1;
        if ( (unsigned __int64)(v8 + 1) < 0x1000 )
        {
          if ( v8 == -1 )
          {
            v12 = 0LL;
            goto LABEL_15;
          }
          v11 = operator new(v10);
LABEL_14:
          v12 = v11;
LABEL_15:
          a2[2] = v6;
          a2[3] = v8;
          memcpy_0(v12, v4, v6);
          *((_BYTE *)v12 + v6) = 0;
          if ( v7 >= 0x10 )
            std::_Deallocate<16,0>(*a2, v7 + 1);
          *a2 = v12;
          return a2;
        }
      }
      v11 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v10);
      goto LABEL_14;
    }
    v14 = a2;
    if ( v7 >= 0x10 )
      v14 = (void *)*a2;
    a2[2] = v6;
    memmove_0(v14, v4, v6);
    *((_BYTE *)v14 + v6) = 0;
  }
  return a2;
}
