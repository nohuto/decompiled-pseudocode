/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180090964
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x180090040 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002DBC0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800903E8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x180090468 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Micro.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x1800906D8 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800908D0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18009091C (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // r12
  char v3; // r14
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // cl
  __int64 i; // rdi
  void *v10; // r14
  __int64 j; // rdi
  void *v12; // rdx
  wil::details *Ptr; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // cl
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h]
  RTL_SRWLOCK *v25; // [rsp+90h] [rbp+30h] BYREF
  char Ptr_high; // [rsp+98h] [rbp+38h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v28; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v28 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  LOBYTE(v25) = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v3 = Ptr_high;
  v4 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = v3;
  v5 = *(_QWORD *)SRWLock[6].Ptr;
  v27 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v21, v5 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v27);
    v5 = v27;
  }
  v6 = *(_QWORD *)SRWLock[4].Ptr;
  v27 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v23, v6 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v27);
    v6 = v27;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v28);
  if ( v3 != v4 )
  {
    for ( i = v21; i != *((_QWORD *)&v21 + 1); i += 64LL )
      std::_Func_class<void,bool>::operator()(i, v3);
  }
  v10 = (void *)v23;
  if ( v2 != (_BYTE)v25 )
  {
    for ( j = v23; j != *((_QWORD *)&v23 + 1); j += 64LL )
      std::_Func_class<void,bool>::operator()(j, v2);
    AcquireSRWLockExclusive(SRWLock);
    v25 = SRWLock;
    if ( v2 )
      Ptr = (wil::details *)SRWLock[8].Ptr;
    else
      Ptr = (wil::details *)SRWLock[9].Ptr;
    wil::details::SetEvent(Ptr, v12);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v25);
  }
  if ( ISMTracing::IsEnabled(v8, v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v14, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( ISMTracing::IsEnabled(v16, v15) )
    {
      v18 = wil::details::static_lazy<ISMTracing>::get(
              v17,
              _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v18 > 4u
        && (*(_BYTE *)(v18 + 16) & 1) != 0
        && (*(_QWORD *)(v18 + 24) & 1LL) == *(_QWORD *)(v18 + 24) )
      {
        LOBYTE(v25) = Ptr_high;
        Ptr_high = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v18,
          byte_1801FF79C,
          v19,
          v20,
          (__int64)&Ptr_high,
          (__int64)&v25);
      }
    }
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      (__int64)v10,
      *((__int64 *)&v23 + 1));
    std::_Deallocate<16,0>(v10, (v24 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  if ( (_QWORD)v21 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v21,
      *((__int64 *)&v21 + 1));
    std::_Deallocate<16,0>((void *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFC0uLL);
  }
}
