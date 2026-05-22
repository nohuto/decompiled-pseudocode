/*
 * XREFs of ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180018A80
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x180018270 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$As@UIContextualProcessorBufferTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DCE90 (--$As@UIContextualProcessorBufferTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800DD5AC (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@W.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800DD73C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800E23DC (-erase@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Win32kInterop::ProcessInputStreamEndedMessage(
        Win32kInterop *this,
        const struct MIT_INPUTSTREAM_ENDED_MESSAGE *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  GUID *v5; // rbx
  GUID *v6; // rdx
  GUID *v7; // r9
  int (__fastcall ***v8)(_QWORD, GUID *, char *, __int64); // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int (__fastcall *v12)(_QWORD, GUID *, char *, __int64); // rbp
  __int64 v13; // rcx
  void **v14; // rdx
  GUID *v15; // rax
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rdi
  _QWORD *v24; // rax
  _BYTE v25[72]; // [rsp+20h] [rbp-48h] BYREF
  int (__fastcall ***v26)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+10h] BYREF
  int v27; // [rsp+80h] [rbp+18h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((unsigned int *)a2 + 4);
  LODWORD(v26) = *((_DWORD *)a2 + 4);
  if ( *((_DWORD *)a2 + 2) == 4 )
  {
    v4 = *((_QWORD *)this + 30);
    v5 = *(GUID **)(v4
                  + 16
                  * (*((_QWORD *)this + 33) & (0x100000001B3LL
                                             * (BYTE3(v26) ^ (0x100000001B3LL
                                                            * (BYTE2(v26) ^ (0x100000001B3LL
                                                                           * (BYTE1(v26) ^ (0x100000001B3LL
                                                                                          * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
    v6 = (GUID *)*((_QWORD *)this + 28);
    if ( v5 != v6 )
    {
      v7 = *(GUID **)(v4
                    + 16
                    * (*((_QWORD *)this + 33) & (0x100000001B3LL
                                               * (BYTE3(v26) ^ (0x100000001B3LL
                                                              * (BYTE2(v26) ^ (0x100000001B3LL
                                                                             * (BYTE1(v26) ^ (0x100000001B3LL
                                                                                            * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL))))))))));
      while ( (_DWORD)v3 != v5[1].Data1 )
      {
        if ( v5 == v7 )
          return;
        v5 = *(GUID **)v5->Data4;
      }
      if ( v5 != v6 )
      {
        v8 = *(int (__fastcall ****)(_QWORD, GUID *, char *, __int64))&v5[2].Data1;
        v26 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD))v8;
        if ( v8 )
        {
          (*v8)[1](v8, v6, (char *)v3, (__int64)v7);
          v12 = **v8;
          v13 = *((_QWORD *)this + 35);
          if ( v13 )
          {
            *((_QWORD *)this + 35) = 0LL;
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v13 + 16LL))(v13, v9, v10, v11);
          }
          if ( v12(v8, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, (char *)this + 280, v11) >= 0 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 80LL))(*((_QWORD *)this + 35));
        }
        v14 = (void **)(*((_QWORD *)this + 30)
                      + 16
                      * (*((_QWORD *)this + 33) & (0x100000001B3LL
                                                 * (HIBYTE(v5[1].Data1) ^ (0x100000001B3LL
                                                                         * (BYTE2(v5[1].Data1) ^ (0x100000001B3LL
                                                                                                * (BYTE1(v5[1].Data1) ^ (0x100000001B3LL * (LOBYTE(v5[1].Data1) ^ 0xCBF29CE484222325uLL))))))))));
        v15 = (GUID *)*v14;
        if ( v14[1] == v5 )
        {
          if ( v15 == v5 )
          {
            v16 = (void *)*((_QWORD *)this + 28);
            *v14 = v16;
          }
          else
          {
            v16 = *(void **)v5->Data4;
          }
          v14[1] = v16;
        }
        else if ( v15 == v5 )
        {
          *v14 = *(void **)&v5->Data1;
        }
        v17 = *(_QWORD *)&v5->Data1;
        --*((_QWORD *)this + 29);
        **(_QWORD **)v5->Data4 = v17;
        *(_QWORD *)(v17 + 8) = *(_QWORD *)v5->Data4;
        v18 = *(_QWORD *)&v5[2].Data1;
        if ( v18 )
        {
          *(_QWORD *)&v5[2].Data1 = 0LL;
          (*(void (__fastcall **)(__int64, void **, __int64, GUID *))(*(_QWORD *)v18 + 16LL))(v18, v14, v3, v7);
        }
        v19 = *(_QWORD *)v5[1].Data4;
        if ( v19 )
        {
          *(_QWORD *)v5[1].Data4 = 0LL;
          (*(void (__fastcall **)(__int64, void **, __int64, GUID *))(*(_QWORD *)v19 + 16LL))(v19, v14, v3, v7);
        }
        operator delete(v5, 0x28uLL);
        if ( v8 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, char *, __int64)))(*v8)[2])(v8);
      }
    }
  }
  else
  {
    v20 = *(_DWORD *)a2;
    if ( !*(_DWORD *)a2 )
      v20 = -1;
    v27 = v20;
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (char *)this + 288,
      &v28,
      &v27);
    v21 = v28;
    if ( v28 != *((_QWORD *)this + 37) )
    {
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        v28 + 24,
        &v28,
        &v26);
      if ( v28 != *(_QWORD *)(v21 + 32) )
      {
        v28 = *(_QWORD *)(v28 + 32);
        v22 = v28;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v28);
        v23 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                           (char *)this + 352,
                           v25,
                           &v27);
        if ( v22 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IContextualProcessorBufferTarget>(&v28, v23 + 24) >= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 24) + 80LL))(*(_QWORD *)(v23 + 24));
        v24 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::_Try_emplace<unsigned long const &,>(
                          (char *)this + 288,
                          v25,
                          &v27);
        std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::erase(
          *v24 + 24LL,
          &v26);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v28);
      }
    }
  }
}
