/*
 * XREFs of ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180043C18
 * Callers:
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042D54 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x180043C90 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x180043F4C (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x180150AAC (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 */

void __fastcall std::vector<bool>::resize(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  int v4; // r11d
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v7; // rcx
  __int128 *v8; // rax
  __int64 v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int128 v13; // xmm0
  _BYTE v14[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-10h] BYREF

  v14[0] = 0;
  v3 = a1[3];
  v4 = (int)a1;
  if ( v3 >= a2 )
  {
    if ( v3 > a2 )
    {
      v8 = (__int128 *)std::vector<bool>::end(a1, v18);
      v11 = *v10;
      if ( v9 >= 0 )
        v12 = v11 + 4 * ((unsigned __int64)v9 >> 5);
      else
        v12 = v11 - (4 * ((unsigned __int64)~v9 >> 5) + 4);
      v13 = *v8;
      v15 = v12;
      v16 = v9 & 0x1F;
      v17 = v13;
      std::vector<bool>::erase(v10, v19, &v15, &v17);
    }
  }
  else
  {
    v5 = *a1;
    v6 = a2 - v3;
    if ( (v3 & 0x8000000000000000uLL) != 0LL )
      v7 = v5 - (4 * (~v3 >> 5) + 4);
    else
      v7 = v5 + 4 * (v3 >> 5);
    v15 = v7;
    v16 = v3 & 0x1F;
    std::vector<bool>::_Insert_n(v4, (unsigned int)&v17, (unsigned int)&v15, v6, (__int64)v14);
  }
}
