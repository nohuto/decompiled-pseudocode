/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x18002B530
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002B078 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-.c)
 *     ??1?$list@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002B218 (--1-$list@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@std@.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18002B418 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18002BA9C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180031530 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSessio.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180031710 (-clear@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003181C (-erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$forward_list@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V?$allocator@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002B178 (--1-$forward_list@V-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAnd.c)
 *     ??1CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18002B448 (--1CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TSSession::~TSSession(TSSession *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v11; // rcx
  char *v12; // rcx
  char *v13; // rdi
  char *v14; // rsi
  volatile signed __int32 *v15; // rcx
  void *v16; // rcx
  char *v17; // rdi
  char *v18; // rbx
  void *v19; // rcx

  v2 = (void *)*((_QWORD *)this + 128);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *((_QWORD *)this + 128) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 129);
  if ( v3 )
  {
    PowerSettingUnregisterNotification(v3);
    *((_QWORD *)this + 129) = 0LL;
  }
  *((_DWORD *)this + 253) = 1;
  v4 = (void *)*((_QWORD *)this + 138);
  if ( v4 )
    CoTaskMemFree(v4);
  v5 = (void *)*((_QWORD *)this + 137);
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 135);
  if ( v7 )
    (**v7)(v7, 1LL);
  std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::~forward_list<std::unique_ptr<DuckingDescriptorAndId>>((char **)this + 133);
  v8 = *((_QWORD *)this + 132);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 131);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 130);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (char *)*((_QWORD *)this + 123);
  if ( v11 )
  {
    std::_Deallocate<16,0>(v11, (*((_QWORD *)this + 125) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 123) = 0LL;
    *((_QWORD *)this + 124) = 0LL;
    *((_QWORD *)this + 125) = 0LL;
  }
  CStreamClassPolicyGainsWrapper::~CStreamClassPolicyGainsWrapper((TSSession *)((char *)this + 72));
  v12 = (char *)*((_QWORD *)this + 6);
  if ( v12 )
  {
    std::_Deallocate<16,0>(v12, (*((_QWORD *)this + 8) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v13 = (char *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = *(char **)v13;
      v15 = (volatile signed __int32 *)*((_QWORD *)v13 + 1);
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v15);
      std::_Deallocate<16,0>(v13, 0x10uLL);
      v13 = v14;
    }
    while ( v14 );
  }
  v16 = (void *)*((_QWORD *)this + 3);
  if ( v16 )
    WTSFreeMemory(v16);
  v17 = (char *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v17 )
  {
    do
    {
      v18 = *(char **)v17;
      v19 = (void *)*((_QWORD *)v17 + 1);
      if ( v19 )
        operator delete(v19);
      std::_Deallocate<16,0>(v17, 0x10uLL);
      v17 = v18;
    }
    while ( v18 );
  }
}
