/*
 * XREFs of ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x180043D6C
 * Callers:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x180043C90 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 * Callees:
 *     ??$copy_backward@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x180041A4C (--$copy_backward@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@@std@@YA-AV-.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x180043F4C (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 *     ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x180044848 (--$_Resize_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBI@Z.c)
 *     ??$_Uninitialized_fill_n@V?$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV?$allocator@I@0@@Z @ 0x18004493C (--$_Uninitialized_fill_n@V-$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV-$allocator@I@0@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<bool>::_Insert_x(__int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  __int64 v6; // rdi
  const char *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v12; // r10
  __int128 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v23; // [rsp+60h] [rbp-10h] BYREF
  int v24; // [rsp+80h] [rbp+10h] BYREF

  v3 = *a1;
  v6 = a2[1] + 32 * ((*a2 - *a1) >> 2);
  if ( !a3 )
    return v6;
  v7 = (const char *)a1[3];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v7 < a3 )
    std::_Dwm_Xlength_error(v7);
  v24 = 0;
  v8 = (unsigned __int64)&v7[a3 + 31] >> 5;
  v9 = (a1[1] - v3) >> 2;
  if ( v8 < v9 )
  {
    v18 = v3 + 4 * v8;
  }
  else
  {
    if ( v8 <= v9 )
      goto LABEL_7;
    if ( v8 > (a1[2] - v3) >> 2 )
    {
      std::vector<unsigned int>::_Resize_reallocate<unsigned int>(a1, v8, &v24);
      goto LABEL_7;
    }
    v18 = std::_Uninitialized_fill_n<std::allocator<unsigned int>>(a1[1], v8 - v9, &v24);
  }
  a1[1] = v18;
LABEL_7:
  if ( a1[3] )
  {
    std::vector<bool>::end(a1, &v19);
    a1[3] = v12;
    v13 = (__int128 *)std::vector<bool>::end(a1, v22);
    v14 = *a1;
    if ( v6 < 0 )
      v15 = v14 - (4 * ((unsigned __int64)~v6 >> 5) + 4);
    else
      v15 = v14 + 4 * ((unsigned __int64)v6 >> 5);
    v16 = v19;
    v17 = *v13;
    *(_QWORD *)&v19 = v15;
    v21 = v16;
    *((_QWORD *)&v19 + 1) = v6 & 0x1F;
    v20 = v17;
    std::copy_backward<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
      &v23,
      &v19,
      &v21,
      &v20);
  }
  else
  {
    a1[3] = a3;
  }
  return v6;
}
