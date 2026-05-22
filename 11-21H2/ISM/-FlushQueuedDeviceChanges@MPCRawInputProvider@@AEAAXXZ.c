/*
 * XREFs of ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800B6358
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800B6790 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x1800B68D0 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800B5380 (_lambda_7f3c0264f4cfe5c0819e572d89a9031e_--operator()_std--shared_ptr_LegacyDeviceInfo___.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800B5548 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800B5AAC (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6080 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x1800B6264 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800B6C0C (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCRawInputProvider::FlushQueuedDeviceChanges(MPCRawInputProvider *this)
{
  const char *v2; // r9
  __int64 v3; // rsi
  const char *v4; // r9
  void **v5; // rax
  int **v6; // r14
  __int64 v7; // rdi
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int **i; // rbx
  __int64 *j; // r15
  __int64 v14; // rbx
  int **k; // rbx
  unsigned int *v16; // r15
  unsigned int *m; // rbx
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
      273LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
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
    v7 = *((_QWORD *)&v20 + 1);
    v6 = (int **)v20;
  }
  else
  {
    v6 = (int **)*v5;
    *(_QWORD *)&v20 = *v5;
    *v5 = 0LL;
    v7 = *((_QWORD *)this + 18);
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
  for ( i = v6; i != (int **)v7; i += 2 )
  {
    if ( lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___((_QWORD **)&v23, i) )
      break;
  }
  if ( i != (int **)v7 )
  {
    for ( j = (__int64 *)(i + 2); j != (__int64 *)v7; j += 2 )
    {
      if ( !lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
              (_QWORD **)&v24,
              (int **)j) )
      {
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
          i,
          j);
        i += 2;
      }
    }
    if ( i != (int **)v7 )
    {
      v14 = std::_Move_unchecked<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *>(
              v7,
              v7,
              (__int64)i);
      std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v14, v7);
      v7 = v14;
      *((_QWORD *)&v20 + 1) = v14;
    }
  }
  for ( k = v6; k != (int **)v7; k += 2 )
    MPCRawInputProvider::AttachDeviceImpl((__int64)this, k, (__int64)v8, v4);
  v16 = (unsigned int *)*((_QWORD *)&v18 + 1);
  for ( m = (unsigned int *)v18; m != v16; ++m )
    MPCRawInputProvider::RemoveDeviceImpl(this, *m);
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v18);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>((__int64)v6, v7);
    std::_Deallocate<16,0>(v6, (v3 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
