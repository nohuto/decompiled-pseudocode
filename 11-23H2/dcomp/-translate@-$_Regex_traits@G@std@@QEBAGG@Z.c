/*
 * XREFs of ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180150D2C
 * Callers:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18004184C (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042FE0 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 *     ??R?$_Cmp_collate@V?$regex_traits@G@std@@@std@@QEAA_NGG@Z @ 0x18014EF80 (--R-$_Cmp_collate@V-$regex_traits@G@std@@@std@@QEAA_NGG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::translate(__int64 *a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  unsigned __int16 *v3; // rax
  unsigned __int16 v4; // bx
  unsigned __int16 v6; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[6]; // [rsp+32h] [rbp-36h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-30h] BYREF

  v2 = *a1;
  v6 = a2;
  (*(void (__fastcall **)(__int64, _QWORD *, unsigned __int16 *, _BYTE *))(*(_QWORD *)v2 + 32LL))(v2, v8, &v6, v7);
  if ( v8[2] == 1LL )
  {
    v3 = (unsigned __int16 *)v8;
    if ( v8[3] >= 8uLL )
      v3 = (unsigned __int16 *)v8[0];
    v4 = *v3;
  }
  else
  {
    v4 = v6;
  }
  std::wstring::_Tidy_deallocate((__int64)v8);
  return v4;
}
