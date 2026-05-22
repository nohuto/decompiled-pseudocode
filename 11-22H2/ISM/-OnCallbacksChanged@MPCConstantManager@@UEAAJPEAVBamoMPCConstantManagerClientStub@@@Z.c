/*
 * XREFs of ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x1800BE900
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180051930 (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800B0214 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800BD064 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$ba.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x1800BE80C (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 *     StubCallback @ 0x1800BF8E0 (StubCallback.c)
 */

__int64 __fastcall MPCConstantManager::OnCallbacksChanged(
        MPCConstantManager *this,
        struct BamoMPCConstantManagerClientStub *a2)
{
  int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  int *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  const char *v12; // r9
  int v14; // edx
  __int128 v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+40h] [rbp-49h]
  __int128 v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-29h]
  __int128 v20; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+80h] [rbp-9h]
  char v22; // [rsp+88h] [rbp-1h]
  __int128 v23; // [rsp+90h] [rbp+7h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+17h]
  char v25; // [rsp+A8h] [rbp+1Fh]
  _BYTE v26[16]; // [rsp+B0h] [rbp+27h] BYREF
  _BYTE v27[16]; // [rsp+C0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  __int64 v29; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+100h] [rbp+77h] BYREF

  v2 = (int)a2;
  if ( a2 && (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8) )
  {
    v5 = **((_QWORD **)this + 9);
    v30 = v5;
    while ( !*(_BYTE *)(v5 + 25) )
    {
      v6 = (int *)(v5 + 32);
      v7 = **(_QWORD **)(v5 + 40);
      v29 = v7;
      while ( !*(_BYTE *)(v7 + 25) )
      {
        v8 = (_QWORD *)(v7 + 32);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v4, (__int64)&v23, *(_QWORD *)(v7 + 64));
        v9 = std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
               (__int64 *)this + 7,
               (__int64)v26,
               (__int64)v6);
        v10 = std::map<std::wstring,std::variant<unsigned long,bool,float>>::_Try_emplace<std::wstring const &,>(
                (__int64 *)(*(_QWORD *)v9 + 40LL),
                (__int64)v27,
                v8);
        MPCConstantManager::GetPROPVARIANTFromConstantValue(v11, (__int64)&v20, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
        if ( !v25 || !v22 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x16C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v12);
        if ( !v22 || !v25 )
          std::_Throw_bad_optional_access();
        if ( v8[3] >= 8uLL )
          v8 = (_QWORD *)*v8;
        v14 = *v6;
        v16 = v20;
        v17 = v21;
        v18 = v23;
        v19 = v24;
        StubCallback(v2, v14, (int)v8, (int)&v18, (__int64)&v16);
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v29);
        v7 = v29;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v30);
      v5 = v30;
    }
  }
  return 0LL;
}
