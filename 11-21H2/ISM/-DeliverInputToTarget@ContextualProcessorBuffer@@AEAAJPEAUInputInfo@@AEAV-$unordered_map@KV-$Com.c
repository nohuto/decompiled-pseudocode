/*
 * XREFs of ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801A2A7C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801A2520 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180081048 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180089700 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUIInputTarget@@V-$unordered_set@KU-$hash.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18008C80C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18008C80C.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800D34A4 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800DDA6C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800DDD38 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C230 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uh.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18013CC84 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ??$_Try_emplace@K$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@$$QEAK@Z @ 0x1801A0D08 (--$_Try_emplace@K$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash.c)
 *     ??$_Try_emplace@PEAUIInputTarget@@$$V@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x1801A0F4C (--$_Try_emplace@PEAUIInputTarget@@$$V@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@QEBAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@1@@Z @ 0x1801A2004 (--R-$_Func_class@XPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocato.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAU1@@std@@QEBAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@1@0@Z @ 0x1801A204C (--R-$_Func_class@XPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@_ea_1801A204C.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@PEAK@std@@QEBAXPEAUInputInfo@@PEAK@Z @ 0x1801A20A0 (--R-$_Func_class@XPEAUInputInfo@@PEAK@std@@QEBAXPEAUInputInfo@@PEAK@Z.c)
 *     ?OnlyObserve@@YA_NPEAUInputInfo@@@Z @ 0x1801A3D30 (-OnlyObserve@@YA_NPEAUInputInfo@@@Z.c)
 *     ?Get@InfoMetadata@@SAPEAV1@XZ @ 0x1801A535C (-Get@InfoMetadata@@SAPEAV1@XZ.c)
 *     ?GetInput@InfoMetadata@@QEAAPEBUInputInfoMetadata@1@W4InputType@@@Z @ 0x1801A5394 (-GetInput@InfoMetadata@@QEAAPEBUInputInfoMetadata@1@W4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ContextualProcessorBuffer::DeliverInputToTarget(
        _QWORD *a1,
        struct InputInfo *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 **v9; // rdi
  __int64 *i; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  struct InfoMetadata *v14; // rax
  __int64 Input; // r15
  _QWORD *v16; // rax
  __int64 v17; // r8
  const char *v18; // r9
  unsigned __int8 *v19; // rsi
  unsigned __int8 *j; // rdi
  __int64 v21; // rax
  _QWORD *v22; // r14
  _QWORD *k; // rdi
  void *v24; // rsi
  unsigned __int8 *v25; // r15
  unsigned __int8 *m; // rsi
  void *v27; // rsi
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r11
  unsigned int v40; // eax
  unsigned __int8 v41; // [rsp+38h] [rbp-D0h]
  int v42; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v43; // [rsp+40h] [rbp-C8h] BYREF
  void *v44; // [rsp+48h] [rbp-C0h] BYREF
  void *v45[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v47; // [rsp+70h] [rbp-98h]
  __int64 v48; // [rsp+78h] [rbp-90h]
  void *v49; // [rsp+80h] [rbp-88h] BYREF
  __int128 v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+98h] [rbp-70h]
  __int64 v52; // [rsp+A0h] [rbp-68h]
  __int64 v53; // [rsp+A8h] [rbp-60h]
  char v54[8]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int8 *v55; // [rsp+C0h] [rbp-48h]
  void *v56; // [rsp+D0h] [rbp-38h]
  __int128 v57; // [rsp+D8h] [rbp-30h]
  float v58; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD **v59; // [rsp+100h] [rbp-8h]
  void *v60; // [rsp+110h] [rbp+8h]
  __int128 v61; // [rsp+118h] [rbp+10h]
  _BYTE v62[16]; // [rsp+138h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  if ( OnlyObserve(a2) )
    return 0LL;
  v9 = (__int64 **)a1[12];
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    if ( !std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
            a3,
            (const unsigned __int8 *)i + 16) )
    {
      v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
              (float *)a3,
              (__int64)v45,
              (unsigned __int8 *)i + 16);
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), i + 3);
    }
  }
  v41 = 0;
  v12 = *(_QWORD *)(a1[19] + 16LL);
  v43 = v12;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v43);
  v42 = 0;
  if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
         a3,
         (const unsigned __int8 *)&v42) )
  {
    v42 = 0;
    v13 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Try_emplace<unsigned long,>(
            (float *)a3,
            (__int64)v45,
            (unsigned __int8 *)&v42);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(&v43, (__int64 *)(*(_QWORD *)v13 + 24LL));
    v41 = 1;
    v12 = v43;
  }
  v14 = InfoMetadata::Get();
  Input = InfoMetadata::GetInput(v14, *(unsigned int *)a2);
  v53 = Input;
  if ( Input )
  {
    LODWORD(v46) = 0;
    v47 = 0LL;
    v48 = 0LL;
    v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
    *v16 = v16;
    v16[1] = v16;
    v47 = v16;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 7LL;
    v52 = 8LL;
    *(float *)&v46 = FLOAT_1_0;
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
      (__int64)&v49,
      0x10uLL,
      (unsigned __int64)v16);
    v19 = *(unsigned __int8 **)(a3 + 8);
    for ( j = *(unsigned __int8 **)v19; j != v19; j = *(unsigned __int8 **)j )
    {
      if ( *((_DWORD *)j + 4) && *((_QWORD *)j + 3) != v12 )
      {
        v44 = (void *)*((_QWORD *)j + 3);
        v21 = std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::_Try_emplace<IInputTarget *,>(
                (float *)&v46,
                (__int64)v45,
                (unsigned __int8 *)&v44);
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
          (float *)(*(_QWORD *)v21 + 24LL),
          (__int64)v62,
          j + 16);
      }
    }
    if ( v48 )
    {
      v22 = v47;
      for ( k = (_QWORD *)*v47; k != v22; k = (_QWORD *)*k )
      {
        VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
          (__int64)v45,
          (int *)a2,
          v17,
          v18);
        v24 = v45[0];
        v44 = v45[0];
        std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::operator()(
          Input,
          (__int64)a2,
          (__int64)(k + 3),
          v45[0]);
        std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)&v58);
        std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v54);
        std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &>::operator()(Input + 192, (__int64)v24);
        v25 = v55;
        for ( m = *(unsigned __int8 **)v55; m != v25; m = *(unsigned __int8 **)m )
        {
          if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                 a5,
                 m + 16) )
          {
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
              &v58,
              (__int64)v62,
              m + 16);
          }
        }
        Input = v53;
        v27 = v44;
        std::_Func_class<void,InputInfo *,unsigned long *>::operator()(v53 + 128, (__int64)v44, (__int64)&v42);
        if ( v42 )
        {
          v28 = a1[20];
          if ( v28 )
          {
            v29 = (*(__int64 (__fastcall **)(__int64, void *, float *, _QWORD, int))(*(_QWORD *)v28 + 24LL))(
                    v28,
                    v27,
                    &v58,
                    k[2],
                    1);
            v30 = v29;
            if ( v29 < 0 )
            {
              v31 = 1074LL;
              goto LABEL_35;
            }
          }
          else
          {
            v32 = k[2];
            if ( v32 )
            {
              v29 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v32 + 24LL))(v32, v27);
              v30 = v29;
              if ( v29 < 0 )
              {
                v31 = 1078LL;
LABEL_35:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v31,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
                  (const char *)(unsigned int)v29);
                std::_Deallocate<16,0>(v56, (v57 - (_QWORD)v56) & 0xFFFFFFFFFFFFFFF8uLL);
                v56 = 0LL;
                v57 = 0LL;
                std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
                  v35,
                  (_QWORD **)v55);
                std::_Deallocate<16,0>(v55, 0x18uLL);
                std::_Deallocate<16,0>(v60, (v61 - (_QWORD)v60) & 0xFFFFFFFFFFFFFFF8uLL);
                v60 = 0LL;
                v61 = 0LL;
                std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
                  v36,
                  v59);
                std::_Deallocate<16,0>(v59, 0x18uLL);
                if ( v45[0] )
                  operator delete[](v45[0]);
                goto LABEL_39;
              }
            }
          }
        }
        std::_Deallocate<16,0>(v56, (v57 - (_QWORD)v56) & 0xFFFFFFFFFFFFFFF8uLL);
        v56 = 0LL;
        v57 = 0LL;
        std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
          v33,
          (_QWORD **)v55);
        std::_Deallocate<16,0>(v55, 0x18uLL);
        std::_Deallocate<16,0>(v60, (v61 - (_QWORD)v60) & 0xFFFFFFFFFFFFFFF8uLL);
        v60 = 0LL;
        v61 = 0LL;
        std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
          v34,
          v59);
        std::_Deallocate<16,0>(v59, 0x18uLL);
        if ( v45[0] )
          operator delete[](v45[0]);
      }
    }
    std::_Func_class<void,InputInfo *,unsigned long *>::operator()(Input + 128, (__int64)a2, (__int64)&v42);
    if ( !v42 )
    {
      v30 = 0;
LABEL_39:
      std::_Deallocate<16,0>(v49, (v50 - (_QWORD)v49) & 0xFFFFFFFFFFFFFFF8uLL);
      v49 = 0LL;
      v50 = 0LL;
      std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>(
        v37,
        (__int64)v47);
      std::_Deallocate<16,0>(v47, 0x58uLL);
      goto LABEL_50;
    }
    std::_Deallocate<16,0>(v49, (v50 - (_QWORD)v49) & 0xFFFFFFFFFFFFFFF8uLL);
    v49 = 0LL;
    v50 = 0LL;
    std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>(
      v38,
      (__int64)v47);
    std::_Deallocate<16,0>(v47, 0x58uLL);
  }
  v39 = a1[20];
  if ( v39 )
  {
    if ( v41 || !*(_QWORD *)(a4 + 16) )
      v40 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *, __int64, __int64, _DWORD))(*(_QWORD *)v39 + 24LL))(
              v39,
              a2,
              a5,
              v12,
              v41);
    else
      v40 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, __int64))(*(_QWORD *)v39 + 32LL))(a1[20], a2, a4);
  }
  else
  {
    if ( !v12 )
    {
      v30 = 0;
      goto LABEL_50;
    }
    v40 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v12 + 24LL))(v12, a2);
  }
  v30 = v40;
LABEL_50:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v43);
  return v30;
}
