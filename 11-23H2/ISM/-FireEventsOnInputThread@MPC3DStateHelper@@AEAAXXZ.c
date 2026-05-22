/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800A7074
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x1800A6B20 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180031C78 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$MPC3DStateHelper_FireEventsOnInputThread@AEA_NAEA_N@ISMTracing@@SAXAEA_N0@Z @ 0x1800A6B38 (--$MPC3DStateHelper_FireEventsOnInputThread@AEA_NAEA_N@ISMTracing@@SAXAEA_N0@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800A6C78 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA?A_TAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x1800A6EE8 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A6FE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800A702C (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // r13
  char Ptr_high; // r14
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 i; // rdi
  void *v8; // r14
  __int64 j; // rdi
  void *v10; // rdx
  wil::details *Ptr; // rcx
  __int128 v12; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  char v16; // [rsp+90h] [rbp+30h]
  char v17; // [rsp+98h] [rbp+38h] BYREF
  char v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v2 = BYTE6(SRWLock[2].Ptr);
  v16 = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v4 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = Ptr_high;
  v18 = v2;
  v17 = Ptr_high;
  v5 = *(_QWORD *)SRWLock[6].Ptr;
  v19 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v12, v5 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v19);
    v5 = v19;
  }
  v6 = *(_QWORD *)SRWLock[4].Ptr;
  v19 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v14, v6 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v19);
    v6 = v19;
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr_high != v4 )
  {
    for ( i = v12; i != *((_QWORD *)&v12 + 1); i += 64LL )
      std::_Func_class<void,bool>::operator()(i, Ptr_high);
  }
  v8 = (void *)v14;
  if ( v2 != v16 )
  {
    for ( j = v14; j != *((_QWORD *)&v14 + 1); j += 64LL )
      std::_Func_class<void,bool>::operator()(j, v2);
    AcquireSRWLockExclusive(SRWLock);
    if ( v2 )
      Ptr = (wil::details *)SRWLock[8].Ptr;
    else
      Ptr = (wil::details *)SRWLock[9].Ptr;
    wil::details::SetEvent(Ptr, v10);
    ReleaseSRWLockExclusive(SRWLock);
  }
  ISMTracing::MPC3DStateHelper_FireEventsOnInputThread<bool &,bool &>((bool *)&v18, (bool *)&v17);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>((__int64)v8, *((__int64 *)&v14 + 1));
    std::_Deallocate<16,0>(v8, (v15 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  if ( (_QWORD)v12 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v12, *((__int64 *)&v12 + 1));
    std::_Deallocate<16,0>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFC0uLL);
  }
}
