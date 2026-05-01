/*
 * XREFs of ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180010804
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A91C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x18002E864 (_lambda_75b78523e3da460933f50e5d76bfa16b_--operator().c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002640 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800081F0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180010EBC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180013390 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        DWORD a2,
        int a3)
{
  char *v4; // rax
  char *v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rdi
  wil::details *v8; // rcx
  HANDLE Event; // rsi
  int v10; // eax
  int v11; // ebx
  char *v12; // rcx
  int LastErrorFailHr; // eax
  char *v15; // rcx
  HRESULT v16; // eax
  char *v17; // rcx
  __int64 (__fastcall *v18)(_QWORD, GUID *, __int64); // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  char *v21; // rcx
  char *v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  HANDLE pHandles; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  DWORD dwindex; // [rsp+78h] [rbp+38h] BYREF
  int v27; // [rsp+80h] [rbp+40h] BYREF
  char *v28; // [rsp+88h] [rbp+48h]

  v27 = a3;
  dwindex = a2;
  v28 = 0LL;
  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A4,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)v6);
    v15 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v6;
  }
  v7 = v4 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
  *((_DWORD *)v5 + 11) = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
  *v7 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::`vftable';
  *v7 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::`vftable';
  *((_DWORD *)v5 + 12) = 0;
  *((_QWORD *)v5 + 7) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (void **)v5 + 7,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v8);
    v6 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x587,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
        (const char *)(unsigned int)LastErrorFailHr);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      goto LABEL_13;
    }
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  v28 = v5;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), char *))(*a1)[6])(a1, v28);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A5,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v10);
    v12 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return (unsigned int)v11;
  }
  pHandles = (HANDLE)*((_QWORD *)v28 + 7);
  v16 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B1,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v16);
    v17 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return (unsigned int)v11;
  }
  if ( *((_DWORD *)v28 + 12) != 1 )
  {
    v23 = 0LL;
    v18 = **a1;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v23);
    v11 = v18(a1, &GUID_00000036_0000_0000_c000_000000000046, v19);
    if ( v11 >= 0 )
    {
      v27 = -2147418113;
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 64LL))(v23, &v27);
      if ( v11 >= 0 )
        v11 = v27;
    }
    v20 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return (unsigned int)v11;
  }
  v22 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
