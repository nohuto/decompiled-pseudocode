/*
 * XREFs of ??$_Uninitialized_copy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEBV10@0PEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18010B130
 * Callers:
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x18010B038 (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Uninitialized_copy<std::vector<Windows::UI::Color> const *,std::allocator<std::vector<Windows::UI::Color>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 i; // rbx
  const void *v6; // r15
  __int64 v7; // rbp
  signed __int64 v8; // rbp
  size_t v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdi
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void *v16; // rcx

  for ( i = a1; i != a2; i += 24LL )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    v6 = *(const void **)i;
    v7 = *(_QWORD *)(i + 8);
    if ( *(_QWORD *)i != v7 )
    {
      v8 = v7 - (_QWORD)v6;
      if ( (unsigned __int64)(v8 >> 2) > 0x3FFFFFFFFFFFFFFFLL )
        goto LABEL_11;
      v9 = 4 * (v8 >> 2);
      if ( v9 >= 0x1000 )
      {
        if ( v9 + 39 < v9 )
LABEL_11:
          std::_Throw_bad_array_new_length();
        v13 = operator new(v9 + 39);
        v16 = v13;
        if ( !v13 )
        {
          _o__invalid_parameter_noinfo_noreturn(0LL, v14, v15);
          __debugbreak();
          JUMPOUT(0x1802B50D6LL);
        }
        v10 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v10 - 1) = v16;
      }
      else if ( v9 )
      {
        v10 = operator new(v9);
      }
      else
      {
        v10 = 0LL;
      }
      *a3 = (__int64)v10;
      a3[1] = (__int64)v10;
      a3[2] = (__int64)v10 + v9;
      v11 = *a3;
      memmove_0((void *)*a3, v6, v8);
      a3[1] = v9 + v11;
    }
    a3 += 3;
  }
  return a3;
}
