/*
 * XREFs of ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800DE400
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800DE830 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x1800DE970 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073E1C (--4-$shared_ptr@VSystemCursor2@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800DD488 (_lambda_7f3c0264f4cfe5c0819e572d89a9031e_--operator()_std--shared_ptr_LegacyDeviceInfo___.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800DD650 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800DDB98 (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x1800DE314 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800DECB0 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCRawInputProvider::FlushQueuedDeviceChanges(MPCRawInputProvider *this)
{
  const char *v2; // r9
  __int64 v3; // rsi
  const char *v4; // r9
  void **v5; // rax
  __int64 *v6; // r14
  __int64 *v7; // rdi
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int **v12; // rbx
  __int64 *i; // r15
  __int64 *v14; // rbx
  __int64 *j; // rbx
  unsigned int *v16; // r15
  unsigned int *k; // rbx
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int128 *v23; // [rsp+80h] [rbp+30h] BYREF
  __int128 *v24; // [rsp+88h] [rbp+38h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x111,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v2);
  v20 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = (void **)((char *)this + 136);
  if ( &v20 == (__int128 *)((char *)this + 136) )
  {
    v7 = (__int64 *)*((_QWORD *)&v20 + 1);
    v6 = (__int64 *)v20;
  }
  else
  {
    v6 = (__int64 *)*v5;
    *(_QWORD *)&v20 = *v5;
    *v5 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + 18);
    *((_QWORD *)&v20 + 1) = v7;
    *((_QWORD *)this + 18) = 0LL;
    v3 = *((_QWORD *)this + 19);
    v21 = v3;
    *((_QWORD *)this + 19) = 0LL;
  }
  v8 = (_QWORD *)((char *)this + 160);
  if ( &v18 != (__int128 *)((char *)this + 160) )
  {
    v9 = v18;
    *(_QWORD *)&v18 = *v8;
    *v8 = v9;
    v10 = *((_QWORD *)&v18 + 1);
    *((_QWORD *)&v18 + 1) = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = v10;
    v11 = v19;
    v19 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v11;
  }
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v24 = &v18;
  v23 = &v18;
  v12 = (int **)v6;
  if ( v6 != v7 )
  {
    do
    {
      if ( lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
             (_QWORD **)&v23,
             v12) )
      {
        break;
      }
      v12 += 2;
    }
    while ( v12 != (int **)v7 );
  }
  if ( v12 != (int **)v7 )
  {
    for ( i = (__int64 *)(v12 + 2); i != v7; i += 2 )
    {
      if ( !lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
              (_QWORD **)&v24,
              (int **)i) )
      {
        std::shared_ptr<SystemCursor2>::operator=(v12, i);
        v12 += 2;
      }
    }
    if ( v12 != (int **)v7 )
    {
      v14 = std::_Move_unchecked<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *>(v7, v7, v12);
      std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>((__int64)v14, (__int64)v7);
      v7 = v14;
      *((_QWORD *)&v20 + 1) = v14;
    }
  }
  for ( j = v6; j != v7; j += 2 )
    MPCRawInputProvider::AttachDeviceImpl((__int64)this, j, (__int64)v8, v4);
  v16 = (unsigned int *)*((_QWORD *)&v18 + 1);
  for ( k = (unsigned int *)v18; k != v16; ++k )
    MPCRawInputProvider::RemoveDeviceImpl(this, *k);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v18);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>((__int64)v6, (__int64)v7);
    std::_Deallocate<16,0>(v6, (v3 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
