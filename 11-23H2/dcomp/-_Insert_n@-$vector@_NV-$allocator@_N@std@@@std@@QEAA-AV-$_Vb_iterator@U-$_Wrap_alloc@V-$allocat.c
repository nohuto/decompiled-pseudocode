/*
 * XREFs of ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x180043C90
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@std@@@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA_NPEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@1@_N@Z @ 0x180042594 (--$_Match@V-$allocator@V-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@.c)
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180043C18 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 * Callees:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x180043D6C (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 *     ??$_Fill_vbool@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@_N@std@@YAXV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@0AEB_N@Z @ 0x180043EAC (--$_Fill_vbool@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@_N@std@@YAXV-$_Vb_.c)
 */

_OWORD *__fastcall std::vector<bool>::_Insert_n(_QWORD *a1, _OWORD *a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 inserted; // rax
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // xmm0
  char v13; // dl
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a3;
  inserted = std::vector<bool>::_Insert_x(a1, &v16, a4);
  *((_QWORD *)&v16 + 1) = 0LL;
  v9 = (unsigned __int64 *)a2 + 1;
  *(_QWORD *)&v16 = *a1;
  *a2 = (unsigned __int64)v16;
  if ( inserted >= 0 || *v9 >= -inserted )
  {
    v10 = *v9 + inserted;
    v11 = 4 * (v10 >> 5);
  }
  else
  {
    v10 = *v9 + inserted;
    v11 = -4LL - 4 * (~v10 >> 5);
  }
  *(_QWORD *)a2 += v11;
  *v9 = v10;
  *v9 = v10 & 0x1F;
  v12 = *a2;
  v16 = *a2;
  if ( a4 >= 0 || *((_QWORD *)&v16 + 1) >= (unsigned __int64)-a4 )
  {
    v13 = BYTE8(v16) + a4;
    v14 = v16 + 4 * ((unsigned __int64)(*((_QWORD *)&v16 + 1) + a4) >> 5);
  }
  else
  {
    v13 = BYTE8(v16) + a4;
    v14 = v16 - (4 * ((unsigned __int64)~(*((_QWORD *)&v16 + 1) + a4) >> 5) + 4);
  }
  *((_QWORD *)&v16 + 1) = v13 & 0x1F;
  *(_QWORD *)&v16 = v14;
  v17 = v12;
  std::_Fill_vbool<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,bool>(&v17, &v16, a5);
  return a2;
}
