/*
 * XREFs of _lambda_b2b2edcacba8310f83e1be2040a50861_::operator() @ 0x1800FBDC4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b2b2edcacba8310f83e1be2040a50861__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800FD5B0 (std--_Func_impl_no_alloc__lambda_b2b2edcacba8310f83e1be2040a50861__long_wil--com_pt_ea_1800FD5B0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     ??$emplace@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800FB648 (--$emplace@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Use.c)
 *     ??0?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixProxy@@@Z @ 0x1800FB854 (--0-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixPr.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_b2b2edcacba8310f83e1be2040a50861_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 *k; // rdi
  _QWORD *i; // rsi
  int v7; // eax
  _QWORD *j; // rbx
  int v9; // eax
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
  LODWORD(k) = v4;
  if ( v4 >= 0 )
  {
    for ( i = (_QWORD *)v18; ; ++i )
    {
      if ( i == *((_QWORD **)&v18 + 1) )
      {
        LODWORD(k) = 0;
        goto LABEL_30;
      }
      v16 = 0LL;
      v17 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)a2 + 104LL) + 112LL))(
             *(_QWORD *)(*(_QWORD *)a2 + 104LL),
             *i,
             &v16);
      LODWORD(k) = v7;
      if ( v7 < 0 )
        break;
      for ( j = (_QWORD *)v16; j != *((_QWORD **)&v16 + 1); ++j )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 152LL))(*j)
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 232LL))(*j) )
        {
          v14 = 0LL;
          v15 = 0LL;
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*j + 344LL))(*j, &v14);
          LODWORD(k) = v9;
          if ( v9 < 0 )
          {
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x302,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
              (const char *)(unsigned int)v9);
            if ( (_QWORD)v14 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
                (__int64 *)v14,
                *((__int64 **)&v14 + 1));
              std::_Deallocate<16,0>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
              v14 = 0LL;
              v15 = 0LL;
            }
            goto LABEL_27;
          }
          for ( k = (__int64 *)v14; k != *((__int64 **)&v14 + 1); ++k )
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
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
            }
          }
          if ( (_QWORD)v14 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
              (__int64 *)v14,
              *((__int64 **)&v14 + 1));
            std::_Deallocate<16,0>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
          }
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
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x302,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
      (const char *)(unsigned int)v7);
LABEL_27:
    if ( (_QWORD)v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v16,
        *((__int64 **)&v16 + 1));
      std::_Deallocate<16,0>((void *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x302,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_30:
  if ( (_QWORD)v18 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>((__int64 *)v18, *((__int64 **)&v18 + 1));
    std::_Deallocate<16,0>((void *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return (unsigned int)k;
}
