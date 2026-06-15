/*
 * XREFs of _lambda_b2b2edcacba8310f83e1be2040a50861_::operator() @ 0x18010B3CC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b2b2edcacba8310f83e1be2040a50861__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x180082B50 (std--_Func_impl_no_alloc__lambda_b2b2edcacba8310f83e1be2040a50861__long_wil--com_pt_ea_180082B50.c)
 * Callees:
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$emplace@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800D0E34 (--$emplace@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Use.c)
 *     ??0?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixProxy@@@Z @ 0x1800D12C0 (--0-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixPr.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8770 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_b2b2edcacba8310f83e1be2040a50861_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *i; // rsi
  int v7; // eax
  _QWORD *j; // rbx
  __int64 *k; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // r14
  _BYTE v13[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v21; // [rsp+B8h] [rbp+38h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)a2 + 104LL) + 88LL))(
         *(_QWORD *)(*(_QWORD *)a2 + 104LL),
         &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    for ( i = (_QWORD *)v18; i != *((_QWORD **)&v18 + 1); ++i )
    {
      v14 = 0LL;
      v15 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)a2 + 104LL) + 112LL))(
             *(_QWORD *)(*(_QWORD *)a2 + 104LL),
             *i,
             &v14);
      v5 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x302,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v7);
        std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v14);
        goto LABEL_30;
      }
      for ( j = (_QWORD *)v14; j != *((_QWORD **)&v14 + 1); ++j )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 192LL))(*j)
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 272LL))(*j) )
        {
          v16 = 0LL;
          v17 = 0LL;
          LODWORD(k) = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*j + 376LL))(*j, &v16);
          if ( (int)k < 0 )
          {
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x302,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
              (const char *)(unsigned int)k);
            if ( (_QWORD)v16 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                (__int64 *)v16,
                *((__int64 **)&v16 + 1));
              std::_Deallocate<16,0>((void *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL);
              v16 = 0LL;
              v17 = 0LL;
            }
            if ( (_QWORD)v14 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                (__int64 *)v14,
                *((__int64 **)&v14 + 1));
              std::_Deallocate<16,0>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
              v14 = 0LL;
              v15 = 0LL;
            }
            v5 = (unsigned int)k;
            goto LABEL_30;
          }
          for ( k = (__int64 *)v16; k != *((__int64 **)&v16 + 1); ++k )
          {
            v10 = *(_QWORD *)(*a1 + 56LL);
            if ( !v10 )
            {
              std::_Xbad_function_call();
              __debugbreak();
              goto LABEL_24;
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 16LL))(v10, k) )
            {
              v11 = (_QWORD *)a1[1];
              wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>(
                &v21,
                *k);
              std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::emplace<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
                v11,
                (__int64)v13,
                &v21);
              wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(&v21);
            }
          }
          if ( (_QWORD)v16 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              (__int64 *)v16,
              *((__int64 **)&v16 + 1));
            std::_Deallocate<16,0>((void *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL);
          }
        }
      }
      if ( (_QWORD)v14 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v14,
          *((__int64 **)&v14 + 1));
        std::_Deallocate<16,0>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    if ( (_QWORD)v18 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v18,
        *((__int64 **)&v18 + 1));
      std::_Deallocate<16,0>((void *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x302,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
      (const char *)(unsigned int)v4);
LABEL_30:
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v18);
    return v5;
  }
}
