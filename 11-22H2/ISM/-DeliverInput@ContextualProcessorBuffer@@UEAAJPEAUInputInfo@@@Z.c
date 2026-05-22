/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801CDC10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??$?0V?$allocator@U?$_List_node@KPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@KPEAX@std@@@1@@Z @ 0x180047DEC (--$-0V-$allocator@U-$_List_node@KPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180051E54 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x1800AA6F4 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA918 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800B33F0 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800FC1D8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180105B5C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x180106168 (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x180106420 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x180106450 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18016A104 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x1801A7E8C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x1801CBC94 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX.c)
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1801CC3A8 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801CCDCC (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp_ea_1801CCDCC.c)
 *     ??0?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801CCFDC (--0-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@_ea_1801CCFDC.c)
 *     ??1ContextualProcessorResponse@@QEAA@XZ @ 0x1801CD534 (--1ContextualProcessorResponse@@QEAA@XZ.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801CD64C (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ?CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4ContextualProcessorState@@@Z @ 0x1801CDA54 (-CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801CE198 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801CEF50 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x1801CFE9C (-clear@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProc.c)
 */

__int64 __fastcall ContextualProcessorBuffer::DeliverInput(ContextualProcessorBuffer *this, struct InputInfo *a2)
{
  ContextualProcessorBuffer *v2; // rdi
  const char *v3; // r9
  __int64 v4; // rcx
  void *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 **i; // rbx
  __int64 v10; // rcx
  unsigned __int64 appended; // rax
  _QWORD **v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 *v19; // r15
  unsigned __int64 v20; // r12
  __int64 j; // rbx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  char *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r13
  int *v32; // rbx
  __int64 *k; // rax
  __int64 v34; // r8
  const char *v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  void *v39; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B8h]
  char *v42; // [rsp+50h] [rbp-B0h]
  ContextualProcessorBuffer *v43; // [rsp+58h] [rbp-A8h]
  char v44[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD **v45; // [rsp+68h] [rbp-98h]
  void *v46; // [rsp+78h] [rbp-88h]
  __int128 v47; // [rsp+80h] [rbp-80h]
  char v48[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD **v49; // [rsp+A8h] [rbp-58h]
  void *v50; // [rsp+B8h] [rbp-48h]
  __int128 v51; // [rsp+C0h] [rbp-40h]
  __int128 v52; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v53[64]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v54; // [rsp+130h] [rbp+30h] BYREF
  char v55[56]; // [rsp+138h] [rbp+38h] BYREF
  char v56[8]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v57[9]; // [rsp+178h] [rbp+78h] BYREF
  char v58[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v59; // [rsp+1D0h] [rbp+D0h] BYREF
  char v60[64]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v61; // [rsp+220h] [rbp+120h]
  char v62[64]; // [rsp+228h] [rbp+128h] BYREF
  char v63[72]; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v64[48]; // [rsp+2B0h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  v40 = (unsigned __int64)a2;
  v2 = this;
  v43 = this;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v64, "ContextualProcessingInput", 0LL);
  if ( !*((_QWORD *)v2 + 18) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x325,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      v3);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v48);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v44);
  v5 = (void *)*((_QWORD *)v2 + 5);
  v6 = *((_QWORD *)v2 + 4);
  v39 = v5;
  if ( (void *)v6 != v5 )
  {
    v7 = v6 + 16;
    do
    {
      if ( !ContextualProcessorBuffer::CheckProcessorHasAllState(v4, v6, 0) )
      {
        v52 = 0LL;
        std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v53);
        v54 = 0LL;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v55);
        std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v57);
        i = *(__int64 ***)v7;
LABEL_7:
        for ( i = (__int64 **)*i;
              i != *(__int64 ***)v7;
              i = (__int64 **)std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(
                                v7,
                                v12) )
        {
          LODWORD(v38) = *((_DWORD *)i + 4);
          if ( !std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                  (__int64)v48,
                  (const unsigned __int8 *)&v38) )
            goto LABEL_7;
          if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                 (__int64)v44,
                 (const unsigned __int8 *)&v38) )
          {
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
              v57,
              (__int64)v58,
              (unsigned __int8 *)&v38);
            goto LABEL_7;
          }
          appended = std::_Fnv1a_append_bytes(v10, (const unsigned __int8 *const)i + 16, 4uLL);
          std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
            v7 - 8,
            i,
            appended & *(_QWORD *)(v7 + 40));
        }
        if ( ContextualProcessorBuffer::CheckProcessorHasAllState(v8, v6, 0) == 1 )
        {
          DWORD2(v52) = 0;
        }
        else
        {
          if ( !*(_BYTE *)(v7 + 200) )
          {
            v19 = (__int64 *)((char *)v2 + 56);
            if ( *((_QWORD *)v2 + 7) != *((_QWORD *)v2 + 8) )
            {
              v38 = 0LL;
              v20 = 0LL;
              for ( j = 0LL; ; j += 208LL )
              {
                v22 = *v19;
                v23 = 0x4EC4EC4EC4EC4EC5LL;
                v24 = v19[1] - *v19;
                v41 = j;
                if ( v20 >= 0x4EC4EC4EC4EC4EC5LL * (v24 >> 4) )
                  break;
                if ( !ContextualProcessorBuffer::CheckProcessorHasAllState(0x4EC4EC4EC4EC4EC5LL, v6, 0) )
                {
                  v59 = 0LL;
                  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v60);
                  v61 = 0LL;
                  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v62);
                  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v63);
                  v25 = *(_QWORD *)(j + v22);
                  v42 = (char *)v2 - 8;
                  ContextualProcessorBuffer::MakeContextualProcessorDecision(
                    (_DWORD)v2 - 8,
                    v25,
                    (unsigned int)&v59,
                    v6,
                    j + v22 + 16,
                    j + v22 + 144);
                  if ( ContextualProcessorBuffer::CheckProcessorHasAllState(v26, v6, 2) )
                  {
                    if ( v38 <= v20 )
                    {
                      v29 = v42;
                      v30 = v20 - v38 + 1;
                      v31 = 208 * v38;
                      v38 = v20 + 1;
                      do
                      {
                        ContextualProcessorBuffer::DeliverInputToTarget(
                          v29,
                          *(_QWORD *)(*v19 + v31),
                          *v19 + v31 + 16,
                          *v19 + v31 + 80,
                          *v19 + v31 + 144);
                        v31 += 208LL;
                        --v30;
                      }
                      while ( v30 );
                      v2 = v43;
                      j = v41;
                    }
                  }
                  else if ( ContextualProcessorBuffer::CheckProcessorHasAllState(v28, v27, 0) )
                  {
                    ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v59);
                    break;
                  }
                  ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v59);
                }
                ++v20;
              }
              if ( ContextualProcessorBuffer::CheckProcessorHasAllState(v23, v6, 2) )
                std::vector<ContextualProcessorBuffer::InputSample>::clear(v19);
            }
          }
          v32 = (int *)v40;
          *(_BYTE *)(v7 + 200) = 1;
          ContextualProcessorBuffer::MakeContextualProcessorDecision(
            (_DWORD)v2 - 8,
            (_DWORD)v32,
            (unsigned int)&v52,
            v6,
            (__int64)v48,
            (__int64)v44);
          for ( k = **(__int64 ***)v7; k != *(__int64 **)v7; k = (__int64 *)*k )
          {
            if ( *((_DWORD *)k + 5) == 1 )
            {
              ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v52);
              VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
                (__int64)&v52,
                v32,
                v34,
                v35);
              std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                (__int64)v53,
                (__int64)v48);
              std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                (__int64)&v54,
                *((_QWORD *)v2 + 18) + 24LL);
              std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
                (__int64)v56,
                (__int64)v44);
              v36 = *((_QWORD *)v2 + 8);
              if ( v36 == *((_QWORD *)v2 + 9) )
              {
                std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
                  (__int64 *)v2 + 7,
                  *((_QWORD *)v2 + 8),
                  (__int64 *)&v52);
              }
              else
              {
                v37 = v52;
                *(_QWORD *)&v52 = 0LL;
                *(_QWORD *)v36 = v37;
                *(_DWORD *)(v36 + 8) = DWORD2(v52);
                std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                  v36 + 16,
                  (__int64)v53);
                std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                  v36 + 80,
                  (__int64)&v54);
                std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
                  v36 + 144,
                  (__int64)v56);
                *((_QWORD *)v2 + 8) += 208LL;
              }
              ContextualProcessorBuffer::InputSample::~InputSample((void **)&v52);
              goto LABEL_21;
            }
          }
        }
        ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v52);
        v5 = v39;
      }
      v6 += 224LL;
      v7 += 224LL;
    }
    while ( (void *)v6 != v5 );
  }
  v13 = (_QWORD *)*((_QWORD *)v2 + 7);
  v14 = (_QWORD *)*((_QWORD *)v2 + 8);
  if ( v13 != v14 )
  {
    do
    {
      ContextualProcessorBuffer::DeliverInputToTarget((char *)v2 - 8, *v13, v13 + 2, v13 + 10, v13 + 18);
      v13 += 26;
    }
    while ( v13 != v14 );
    std::vector<ContextualProcessorBuffer::InputSample>::clear((char *)v2 + 56);
  }
  ContextualProcessorBuffer::DeliverInputToTarget((char *)v2 - 8, v40, v48, *((_QWORD *)v2 + 18) + 24LL, v44);
LABEL_21:
  std::_Deallocate<16,0>(v46, (v47 - (_QWORD)v46) & 0xFFFFFFFFFFFFFFF8uLL);
  v47 = 0LL;
  v46 = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v15,
    v45);
  std::_Deallocate<16,0>(v45, 0x18uLL);
  v16 = v50;
  v39 = v50;
  v40 = (v51 - (_QWORD)v50) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v40 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v39, &v40);
    v16 = v39;
  }
  operator delete(v16);
  v51 = 0LL;
  v50 = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    v17,
    v49);
  std::_Deallocate<16,0>(v49, 0x20uLL);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v64);
  return 0LL;
}
