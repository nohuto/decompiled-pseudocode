/*
 * XREFs of ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x180150AAC
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@std@@@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA_NPEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@1@_N@Z @ 0x180042594 (--$_Match@V-$allocator@V-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@.c)
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180043C18 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 * Callees:
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x180043F4C (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 *     ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18007D4DC (-_Trim@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K@Z.c)
 *     ??$_Copy_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x18014E478 (--$_Copy_unchecked@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@@std@@YA-A.c)
 *     ?_Make_iter@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@@Z @ 0x1801507F0 (-_Make_iter@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$alloca.c)
 */

_OWORD *__fastcall std::vector<bool>::erase(__int64 *a1, _OWORD *a2, __int128 *a3)
{
  __int128 *v5; // r10
  __int64 v6; // rdi
  __int128 *v7; // rax
  __m128i *v8; // rax
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  _OWORD *result; // rax
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int128 v18; // [rsp+60h] [rbp-10h] BYREF

  v15 = *a3;
  std::vector<bool>::_Make_iter(a1, (__int64 *)&v14, &v15);
  v16 = *v5;
  std::vector<bool>::_Make_iter(a1, (__int64 *)&v15, &v16);
  v6 = *((_QWORD *)&v14 + 1) + 32 * (((__int64)v14 - *a1) >> 2);
  if ( v14 != v15 )
  {
    v7 = std::vector<bool>::end((unsigned __int64 *)a1, &v17);
    v16 = v14;
    v14 = *v7;
    v8 = (__m128i *)std::_Copy_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
                      &v18,
                      (__int64)&v15,
                      (__int64 *)&v14,
                      (__int64 *)&v16);
    std::vector<bool>::_Trim(
      (const char *)a1,
      _mm_srli_si128(*v8, 8).m128i_u64[0] + 32 * ((v8->m128i_i64[0] - *a1) >> 2));
  }
  *((_QWORD *)&v15 + 1) = 0LL;
  v9 = (unsigned __int64 *)a2 + 1;
  *(_QWORD *)&v15 = *a1;
  *a2 = (unsigned __int64)v15;
  if ( v6 >= 0 || (v10 = *v9, *v9 >= -v6) )
  {
    v11 = v6 + *v9;
    v12 = 4 * (v11 >> 5);
  }
  else
  {
    v11 = v10 + v6;
    v12 = -4LL - 4 * (~(v10 + v6) >> 5);
  }
  *(_QWORD *)a2 += v12;
  *v9 = v11;
  result = a2;
  *v9 = v11 & 0x1F;
  return result;
}
