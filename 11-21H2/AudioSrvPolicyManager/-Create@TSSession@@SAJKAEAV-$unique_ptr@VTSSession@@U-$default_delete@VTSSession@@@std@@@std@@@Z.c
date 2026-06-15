/*
 * XREFs of ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18002BA9C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0TSSession@@AEAA@XZ @ 0x18002AF1C (--0TSSession@@AEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessionCallbacks@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessi.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038F40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpoint.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall TSSession::Create(int a1, TSSession **a2)
{
  TSSession *v4; // rax
  TSSession *v5; // r14
  TSSession *v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // rcx
  struct IVolumeProvider *v10; // r12
  _DWORD *v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rsi
  int Interface; // edi
  HANDLE ProcessHeap; // rax
  _QWORD *v16; // rax
  TSSession *v17; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  TSSession *v19; // [rsp+88h] [rbp+20h] BYREF

  v4 = (TSSession *)operator new(0x460uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    if ( v4 )
      v5 = TSSession::TSSession(v4);
    else
      v5 = 0LL;
    v6 = v5;
    v19 = v5;
    if ( !v5 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    *(_DWORD *)v5 = a1;
    v9 = *((_QWORD *)v5 + 130);
    *((_QWORD *)v5 + 130) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = g_VolumeProvider;
    *((_QWORD *)v5 + 130) = 0LL;
    v11 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v11;
    if ( !v11 )
    {
      Interface = -2147024882;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)Interface);
      TSSession::~TSSession(v5);
      operator delete(v5);
      return (unsigned int)Interface;
    }
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointVolumeStateManager>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                    + 8LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        v12);
    *(_QWORD *)v13 = &CEndpointVolumeStateManager::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v13 + 4), 0, 0);
    v13[14] = 0;
    *((_QWORD *)v13 + 8) = 0LL;
    *((_QWORD *)v13 + 9) = 0LL;
    ProcessHeap = GetProcessHeap();
    v16 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
    *v16 = v16;
    v16[1] = v16;
    *((_QWORD *)v13 + 8) = v16;
    *((_QWORD *)v13 + 10) = 0LL;
    *((_QWORD *)v13 + 11) = 0LL;
    *((_QWORD *)v13 + 12) = 0LL;
    *((_QWORD *)v13 + 13) = 7LL;
    *((_QWORD *)v13 + 14) = 8LL;
    v13[14] = 1065353216;
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
      (__int64)(v13 + 20),
      0x10uLL,
      *((_QWORD *)v13 + 8));
    *((_QWORD *)v13 + 15) = v10;
    if ( v10 )
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v10 + 8LL))(v10);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::QueryInterface(
                  v13,
                  &GUID_59d5b9a9_5e6e_4cd4_baae_95ad8d257a28,
                  (char *)v5 + 1040);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IBackgroundSessionCallbacks>::Release(v13);
    if ( Interface < 0 )
      goto LABEL_16;
    if ( a2 != &v19 )
    {
      v6 = 0LL;
      v17 = *a2;
      *a2 = v5;
      if ( v17 )
      {
        TSSession::~TSSession(v17);
        operator delete(v17);
      }
    }
    if ( v6 )
    {
      TSSession::~TSSession(v6);
      operator delete(v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBF,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v7);
  }
  return result;
}
