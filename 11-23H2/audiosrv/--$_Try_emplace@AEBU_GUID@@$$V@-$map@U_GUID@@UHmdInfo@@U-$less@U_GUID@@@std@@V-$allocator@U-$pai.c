/*
 * XREFs of ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x180139C04
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18013A780 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18013AA00 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     memcmp_0 @ 0x18006A80D (memcmp_0.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800FB24C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800FB4B0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801398F8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180139E30 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@s.c)
 */

__int64 __fastcall std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4)
{
  __int64 v4; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int128 Buf2; // [rsp+30h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h]
  _OWORD *v18; // [rsp+A0h] [rbp+30h] BYREF

  v4 = *a1;
  DWORD2(v17) = 0;
  v8 = v4;
  v9 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)&v17 = v9;
  if ( !*(_BYTE *)(v9 + 25) )
  {
    Buf2 = *a3;
    do
    {
      v10 = *(_OWORD *)(v9 + 32);
      *(_QWORD *)&v17 = v9;
      Buf1 = v10;
      if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) >= 0 )
      {
        v8 = v9;
        DWORD2(v17) = 1;
        v9 = *(_QWORD *)v9;
      }
      else
      {
        DWORD2(v17) = 0;
        v9 = *(_QWORD *)(v9 + 16);
      }
    }
    while ( !*(_BYTE *)(v9 + 25) );
  }
  if ( *(_BYTE *)(v8 + 25) || (v11 = *a3, Buf1 = *(_OWORD *)(v8 + 32), Buf2 = v11, memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v18 = a3;
    v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(
            &Buf1,
            (__int64)a1,
            v4,
            a4,
            &v18);
    v13 = v12[1];
    v12[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(&Buf1);
    Buf2 = v17;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&Buf2,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
