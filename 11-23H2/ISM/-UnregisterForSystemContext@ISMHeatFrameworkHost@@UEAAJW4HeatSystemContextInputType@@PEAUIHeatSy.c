/*
 * XREFs of ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x1801A3DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1801A2BC4 (--$find@X@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSyste.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIHeatSystemContextClient@@@Z @ 0x1801A4260 (-erase@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSystemCo.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::UnregisterForSystemContext(__int64 *a1, int a2, __int64 a3, const char *a4)
{
  int v5; // edx
  int v6; // edx
  __int64 *v7; // rdi
  const char *v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  const char *v11; // r9
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  v15 = a3;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      if ( v6 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x128,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      v7 = a1 + 27;
      if ( !a1[27] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x118,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      if ( *std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
              a1 + 28,
              &v16,
              (const unsigned __int8 *)&v15) == a1[29] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x11A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v8);
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::erase(
        a1 + 28,
        &v15);
      if ( a1[30] )
        return 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v7 + 32LL))(
             *v7,
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v9 < 0 )
      {
        v10 = 288LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      v7 = a1 + 15;
      if ( !a1[15] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x108,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      if ( *std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
              a1 + 16,
              &v16,
              (const unsigned __int8 *)&v15) == a1[17] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x10A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v11);
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::erase(
        a1 + 16,
        &v15);
      if ( a1[18] )
        return 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v7 + 32LL))(
             *v7,
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v9 < 0 )
      {
        v10 = 272LL;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v7 = a1 + 6;
    if ( !a1[6] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xF8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        a4);
    if ( *std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
            a1 + 7,
            &v16,
            (const unsigned __int8 *)&v15) == a1[8] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xFA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        v12);
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::erase(
      a1 + 7,
      &v15);
    if ( a1[9] )
      return 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v7 + 32LL))(
           *v7,
           (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
    if ( v9 < 0 )
    {
      v10 = 256LL;
      goto LABEL_26;
    }
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v7);
  return 0LL;
}
