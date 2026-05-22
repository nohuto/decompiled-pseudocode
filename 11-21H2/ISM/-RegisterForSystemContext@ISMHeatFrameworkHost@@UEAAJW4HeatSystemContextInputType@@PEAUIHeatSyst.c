/*
 * XREFs of ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180184820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180040EF8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800FA2C4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180128A80 (--$-4VInputConfigContextProvider@@@-$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??$emplace@AEBQEAUIHeatSystemContextClient@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1801835D8 (--$emplace@AEBQEAUIHeatSystemContextClient@@@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClien.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180183A60 (--$find@X@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSyste.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180184140 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x18019DDC4 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x18019EA44 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext(
        _QWORD *a1,
        int a2,
        void (__fastcall ***a3)(_QWORD, float *),
        const char *a4)
{
  int v5; // edx
  int v6; // edx
  float *v7; // rbx
  const char *v8; // r9
  __int64 v9; // rcx
  struct VirtualTouchpadContextProvider *Instance; // rbx
  int v11; // ebx
  __int64 v12; // rdx
  const char *v13; // r9
  int v14; // eax
  float *v15; // rbx
  const char *v16; // r9
  __int64 v17; // rcx
  struct DisplayOcclusionContextProvider *v18; // rbx
  const char *v19; // r9
  int v20; // eax
  const char *v21; // r9
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  struct InputConfigContextProvider *v24; // rax
  int v25; // eax
  unsigned int v26; // esi
  const char *v28; // r9
  int v29; // eax
  _BYTE v30[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v31[24]; // [rsp+30h] [rbp-20h] BYREF
  char v32; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void (__fastcall ***v34)(_QWORD, float *); // [rsp+80h] [rbp+30h] BYREF
  struct VirtualTouchpadContextProvider *v35; // [rsp+88h] [rbp+38h] BYREF

  v34 = a3;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      if ( v6 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          232LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          a4);
      v7 = (float *)(a1 + 28);
      if ( *std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
              a1 + 28,
              &v35,
              (const unsigned __int8 *)&v34) != a1[29] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          211LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v8);
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::emplace<IHeatSystemContextClient * const &>(
        v7,
        (__int64)v30,
        (unsigned __int8 *)&v34);
      v9 = a1[27];
      if ( !v9 )
      {
        Instance = VirtualTouchpadContextProvider::GetInstance();
        v35 = Instance;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v35);
        v35 = (struct VirtualTouchpadContextProvider *)a1[27];
        a1[27] = Instance;
        Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v35);
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[27] + 24LL))(a1[27], a1 + 1);
        if ( v11 < 0 )
        {
          v12 = 218LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v11);
          return (unsigned int)v11;
        }
        v9 = a1[27];
      }
      v32 = 0;
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 40LL))(v9, v31) >= 0 )
      {
        v14 = ISMHeatFrameworkHost::BroadcastContextMessage(a1, (__int64)v31, v34, v13);
        v11 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE1,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v14);
LABEL_35:
          std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v31);
          return (unsigned int)v11;
        }
      }
    }
    else
    {
      v15 = (float *)(a1 + 16);
      if ( *std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
              a1 + 16,
              &v35,
              (const unsigned __int8 *)&v34) != a1[17] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          190LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          v16);
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::emplace<IHeatSystemContextClient * const &>(
        v15,
        (__int64)v30,
        (unsigned __int8 *)&v34);
      v17 = a1[15];
      if ( !v17 )
      {
        v18 = DisplayOcclusionContextProvider::GetInstance();
        v35 = v18;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v35);
        v35 = (struct VirtualTouchpadContextProvider *)a1[15];
        a1[15] = v18;
        Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v35);
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[15] + 24LL))(a1[15], a1 + 1);
        if ( v11 < 0 )
        {
          v12 = 197LL;
          goto LABEL_20;
        }
        v17 = a1[15];
      }
      v32 = 0;
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 40LL))(v17, v31) >= 0 )
      {
        v20 = ISMHeatFrameworkHost::BroadcastContextMessage(a1, (__int64)v31, v34, v19);
        v11 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xCC,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
            (const char *)(unsigned int)v20);
          goto LABEL_35;
        }
      }
    }
  }
  else
  {
    if ( *std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
            a1 + 7,
            &v35,
            (const unsigned __int8 *)&v34) != a1[8] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        164LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        v21);
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::emplace<IHeatSystemContextClient * const &>(
      (float *)a1 + 14,
      (__int64)v30,
      (unsigned __int8 *)&v34);
    v22 = a1 + 6;
    v23 = a1[6];
    if ( !v23 )
    {
      v24 = InputConfigContextProvider::GetInstance();
      Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>(a1 + 6, (__int64)v24);
      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v22 + 24LL))(*v22, a1 + 1);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v25);
        return v26;
      }
      v23 = *v22;
    }
    v32 = 0;
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 40LL))(v23, v31) >= 0 )
    {
      v29 = ISMHeatFrameworkHost::BroadcastContextMessage(a1, (__int64)v31, v34, v28);
      v11 = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v29);
        goto LABEL_35;
      }
    }
  }
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v31);
  return 0LL;
}
