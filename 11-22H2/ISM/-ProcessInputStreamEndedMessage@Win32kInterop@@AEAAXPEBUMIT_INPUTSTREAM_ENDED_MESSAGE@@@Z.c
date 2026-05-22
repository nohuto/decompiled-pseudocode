/*
 * XREFs of ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180021430
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x180020230 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@AEBK@Z @ 0x18000B074 (--$find@X@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800E6314 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$As@UIContextualProcessorBufferTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801054E0 (--$As@UIContextualProcessorBufferTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180105C7C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@W.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180105E1C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18010A59C (-erase@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Win32kInterop::ProcessInputStreamEndedMessage(
        Win32kInterop *this,
        const struct MIT_INPUTSTREAM_ENDED_MESSAGE *a2,
        __int64 a3,
        GUID *a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  GUID *v8; // rbx
  GUID *v9; // rdx
  int (__fastcall ***v10)(_QWORD, GUID *, char *, __int64); // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int (__fastcall *v14)(_QWORD, GUID *, char *, __int64); // rbp
  __int64 v15; // rcx
  void **v16; // rdx
  GUID *v17; // rax
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  _BYTE v27[72]; // [rsp+20h] [rbp-48h] BYREF
  int (__fastcall ***v28)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+10h] BYREF
  int v29; // [rsp+80h] [rbp+18h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a2 + 4);
  LODWORD(v28) = *((_DWORD *)a2 + 4);
  if ( *((_DWORD *)a2 + 2) == 4 )
  {
    v6 = 2
       * ((0x100000001B3LL
         * (BYTE3(v28) ^ (0x100000001B3LL
                        * (BYTE2(v28) ^ (0x100000001B3LL
                                       * (BYTE1(v28) ^ (0x100000001B3LL * ((unsigned __int8)v5 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)this + 33));
    v7 = *((_QWORD *)this + 30);
    v8 = *(GUID **)(v7 + 8 * v6 + 8);
    v9 = (GUID *)*((_QWORD *)this + 28);
    if ( v8 == v9 )
    {
LABEL_33:
      v8 = 0LL;
    }
    else
    {
      a4 = *(GUID **)(v7 + 8 * v6);
      while ( (_DWORD)v5 != v8[1].Data1 )
      {
        if ( v8 == a4 )
          goto LABEL_33;
        v8 = *(GUID **)v8->Data4;
      }
    }
    if ( v8 && v8 != v9 )
    {
      v10 = *(int (__fastcall ****)(_QWORD, GUID *, char *, __int64))&v8[2].Data1;
      v28 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD))v10;
      if ( v10 )
      {
        (*v10)[1](v10, v9, (char *)v5, (__int64)a4);
        v14 = **v10;
        v15 = *((_QWORD *)this + 35);
        if ( v15 )
        {
          *((_QWORD *)this + 35) = 0LL;
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v11, v12, v13);
        }
        if ( v14(v10, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, (char *)this + 280, v13) >= 0 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 80LL))(*((_QWORD *)this + 35));
      }
      v16 = (void **)(*((_QWORD *)this + 30)
                    + 16
                    * (*((_QWORD *)this + 33) & (0x100000001B3LL
                                               * (HIBYTE(v8[1].Data1) ^ (0x100000001B3LL
                                                                       * (BYTE2(v8[1].Data1) ^ (0x100000001B3LL
                                                                                              * (BYTE1(v8[1].Data1) ^ (0x100000001B3LL * (LOBYTE(v8[1].Data1) ^ 0xCBF29CE484222325uLL))))))))));
      v17 = (GUID *)*v16;
      if ( v16[1] == v8 )
      {
        if ( v17 == v8 )
        {
          v18 = (void *)*((_QWORD *)this + 28);
          *v16 = v18;
        }
        else
        {
          v18 = *(void **)v8->Data4;
        }
        v16[1] = v18;
      }
      else if ( v17 == v8 )
      {
        *v16 = *(void **)&v8->Data1;
      }
      v19 = *(_QWORD *)&v8->Data1;
      --*((_QWORD *)this + 29);
      **(_QWORD **)v8->Data4 = v19;
      *(_QWORD *)(v19 + 8) = *(_QWORD *)v8->Data4;
      v20 = *(_QWORD *)&v8[2].Data1;
      if ( v20 )
      {
        *(_QWORD *)&v8[2].Data1 = 0LL;
        (*(void (__fastcall **)(__int64, void **, __int64, GUID *))(*(_QWORD *)v20 + 16LL))(v20, v16, v5, a4);
      }
      v21 = *(_QWORD *)v8[1].Data4;
      if ( v21 )
      {
        *(_QWORD *)v8[1].Data4 = 0LL;
        (*(void (__fastcall **)(__int64, void **, __int64, GUID *))(*(_QWORD *)v21 + 16LL))(v21, v16, v5, a4);
      }
      operator delete(v8, 0x28uLL);
      if ( v10 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, char *, __int64)))(*v10)[2])(v10);
    }
  }
  else
  {
    v22 = *(_DWORD *)a2;
    if ( !*(_DWORD *)a2 )
      v22 = -1;
    v29 = v22;
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (char *)this + 288,
      &v30,
      &v29);
    v23 = v30;
    if ( v30 != *((_QWORD *)this + 37) )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::find<void>(
        v30 + 24,
        &v30,
        (const unsigned __int8 *)&v28);
      if ( v30 != *(_QWORD *)(v23 + 32) )
      {
        v30 = *(_QWORD *)(v30 + 32);
        v24 = v30;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v30);
        v25 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                           (char *)this + 352,
                           v27,
                           &v29);
        if ( v24 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IContextualProcessorBufferTarget>(&v30, v25 + 24) >= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 24) + 80LL))(*(_QWORD *)(v25 + 24));
        v26 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::_Try_emplace<unsigned long const &,>(
                          (char *)this + 288,
                          v27,
                          &v29);
        std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::erase(
          *v26 + 24LL,
          &v28);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v30);
      }
    }
  }
}
