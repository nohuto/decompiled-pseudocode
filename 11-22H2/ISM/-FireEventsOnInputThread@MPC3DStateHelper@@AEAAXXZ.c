/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B99FC
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x1800B95C0 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18001ADB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800B95D8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800B9658 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA?A_TAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x1800B98C8 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800B99B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // r12
  char v3; // r14
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rdi
  void *v9; // r14
  __int64 j; // rdi
  void *v11; // rdx
  wil::details *Ptr; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]
  char v23; // [rsp+90h] [rbp+30h] BYREF
  char Ptr_high; // [rsp+98h] [rbp+38h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  PSRWLOCK v26; // [rsp+A8h] [rbp+48h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v26 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  v23 = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v3 = Ptr_high;
  v4 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = v3;
  v5 = *(_QWORD *)SRWLock[6].Ptr;
  v25 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v19, v5 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v25);
    v5 = v25;
  }
  v6 = *(_QWORD *)SRWLock[4].Ptr;
  v25 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v21, v6 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v25);
    v6 = v25;
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ( v3 != v4 )
  {
    for ( i = v19; i != *((_QWORD *)&v19 + 1); i += 64LL )
      std::_Func_class<void,bool>::operator()(i, v3);
  }
  v9 = (void *)v21;
  if ( v2 != v23 )
  {
    for ( j = v21; j != *((_QWORD *)&v21 + 1); j += 64LL )
      std::_Func_class<void,bool>::operator()(j, v2);
    AcquireSRWLockExclusive(SRWLock);
    if ( v2 )
      Ptr = (wil::details *)SRWLock[8].Ptr;
    else
      Ptr = (wil::details *)SRWLock[9].Ptr;
    wil::details::SetEvent(Ptr, v11);
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ( ISMTracing::IsEnabled(v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v13, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( ISMTracing::IsEnabled(v14) )
    {
      v16 = wil::details::static_lazy<ISMTracing>::get(
              v15,
              _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v16 > 4u
        && (*(_BYTE *)(v16 + 16) & 1) != 0
        && (*(_QWORD *)(v16 + 24) & 1LL) == *(_QWORD *)(v16 + 24) )
      {
        v23 = Ptr_high;
        Ptr_high = v2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v16,
          byte_18022FC9E,
          v17,
          v18,
          (__int64)&Ptr_high,
          (__int64)&v23);
      }
    }
  }
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>((__int64)v9, *((__int64 *)&v21 + 1));
    std::_Deallocate<16,0>(v9, (v22 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  if ( (_QWORD)v19 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v19, *((__int64 *)&v19 + 1));
    std::_Deallocate<16,0>((void *)v19, (v20 - v19) & 0xFFFFFFFFFFFFFFC0uLL);
  }
}
