/*
 * XREFs of ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x180043F4C
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@std@@@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA_NPEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@1@_N@Z @ 0x180042594 (--$_Match@V-$allocator@V-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@.c)
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180043C18 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x180043D6C (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x180150AAC (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::vector<bool>::end(unsigned __int64 *a1, _OWORD *a2)
{
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  _OWORD *result; // rax

  v2 = (unsigned __int64 *)a2 + 1;
  v3 = a1[3];
  *a2 = *a1;
  if ( v3 >= 0 || *v2 >= -v3 )
  {
    v4 = *v2 + v3;
    v5 = 4 * (v4 >> 5);
  }
  else
  {
    v4 = *v2 + v3;
    v5 = -4LL - 4 * (~v4 >> 5);
  }
  *(_QWORD *)a2 += v5;
  result = a2;
  *v2 = v4;
  *v2 = v4 & 0x1F;
  return result;
}
