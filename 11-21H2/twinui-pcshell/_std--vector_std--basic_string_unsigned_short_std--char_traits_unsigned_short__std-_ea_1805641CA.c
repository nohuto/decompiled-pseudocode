/*
 * XREFs of _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch$26 @ 0x1805641CA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x180175438 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Move_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180328B3C (--$_Move_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@@std@.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803295BC (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 */

void __fastcall __noreturn std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch_26(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  _OWORD *v4; // r8
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _OWORD *v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // rbx

  v3 = a2[17];
  v4 = (_OWORD *)a2[15];
  v5 = &v4[4 * v3];
  v6 = &v4[2 * v3];
  std::_Uninitialized_move<std::wstring *>(v6, v5, v4);
  v7 = v6;
  v8 = (__int64 *)a2[16];
  std::_Move_unchecked<std::wstring *,std::wstring *>((__int64)v5, *v8, v7);
  v9 = a2[4];
  std::_Destroy_range<std::allocator<std::wstring>>(v9, *v8);
  *v8 = v9;
  throw;
}
