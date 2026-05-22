/*
 * XREFs of ?OnInput@InputForwardProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D4D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180045660 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800B2F00 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$al.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18016969C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uh.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180169964 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compar.c)
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1801D4454 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uha.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1801D4F5C (-erase@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@_KU-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputForwardProcessor::OnInput(
        InputForwardProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  InputForwardProcessor *v6; // r15
  __int64 v7; // rbx
  float *v8; // rsi
  __int64 v9; // r12
  unsigned __int64 appended; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+58h] BYREF

  v6 = this;
  *((_DWORD *)a4 + 2) = 4;
  v7 = 0LL;
  if ( *((_DWORD *)a2 + 79) )
  {
    v8 = (float *)((char *)this + 32);
    do
    {
      v18 = *((_DWORD *)a2 + 36 * v7 + 81);
      v9 = v18;
      v19 = v18;
      appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v19, 8uLL);
      this = (InputForwardProcessor *)std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Find_last<unsigned __int64>(
                                        v8,
                                        &v14,
                                        &v19,
                                        appended)[1];
      if ( !this )
        this = (InputForwardProcessor *)*((_QWORD *)v8 + 1);
      if ( this != *((InputForwardProcessor **)v6 + 5) )
      {
        v13 = v9;
        v19 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned __int64,>(
                                       v8,
                                       (__int64)v15,
                                       (unsigned __int8 *)&v13)
                        + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v19);
        v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                (_QWORD *)a4 + 11,
                (__int64)v16,
                (unsigned __int8 *)&v18);
        Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), &v19);
        *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
                                 (_QWORD *)a4 + 2,
                                 (__int64)v17,
                                 (unsigned __int8 *)&v18)
                  + 20LL) = 2;
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v19);
        LODWORD(v9) = v18;
      }
      if ( (*((_BYTE *)a2 + 144 * v7 + 332) & 4) == 0 )
      {
        v19 = (unsigned int)v9;
        std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::erase(
          v8,
          &v19);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *((_DWORD *)a2 + 79) );
  }
  return 0LL;
}
