/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801A2520
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800183C0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180080B64 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180081048 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180089C20 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800D34A4 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DD48C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800DDA6C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800DDCD8 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800DDD08 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800DDD38 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18013CC84 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x18017AB34 (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 *     ??$?0V?$allocator@U?$_List_node@KPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@KPEAX@std@@@1@@Z @ 0x1801A02B8 (--$-0V-$allocator@U-$_List_node@KPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x1801A0380 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX.c)
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1801A0A88 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801A14A0 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp_ea_1801A14A0.c)
 *     ??0?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801A1850 (--0-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@_ea_1801A1850.c)
 *     ??1ContextualProcessorResponse@@QEAA@XZ @ 0x1801A1DE0 (--1ContextualProcessorResponse@@QEAA@XZ.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801A1ECC (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ?CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4ContextualProcessorState@@@Z @ 0x1801A2284 (-CheckProcessorHasAllState@ContextualProcessorBuffer@@AEAA_NAEBUContextualProcessorMetadata@1@W4.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1801A2A7C (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801A3814 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x1801A4808 (-clear@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProc.c)
 */

__int64 __fastcall ContextualProcessorBuffer::DeliverInput(ContextualProcessorBuffer *this, struct InputInfo *a2)
{
  ContextualProcessorBuffer *v2; // rsi
  const char *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 **i; // rbx
  __int64 v10; // rcx
  __int64 appended; // rax
  _QWORD **v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // r15
  unsigned __int64 v19; // r12
  __int64 j; // rbx
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // r13
  int *v31; // rbx
  __int64 *k; // rax
  __int64 v33; // r8
  const char *v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  struct InputInfo *v40; // [rsp+48h] [rbp-B8h]
  char *v41; // [rsp+50h] [rbp-B0h]
  ContextualProcessorBuffer *v42; // [rsp+58h] [rbp-A8h]
  char v43[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD **v44; // [rsp+68h] [rbp-98h]
  void *v45; // [rsp+78h] [rbp-88h]
  __int128 v46; // [rsp+80h] [rbp-80h]
  char v47[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD **v48; // [rsp+A8h] [rbp-58h]
  void *v49; // [rsp+B8h] [rbp-48h]
  __int128 v50; // [rsp+C0h] [rbp-40h]
  __int128 v51; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v52[64]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+130h] [rbp+30h] BYREF
  char v54[56]; // [rsp+138h] [rbp+38h] BYREF
  char v55[8]; // [rsp+170h] [rbp+70h] BYREF
  float v56[18]; // [rsp+178h] [rbp+78h] BYREF
  char v57[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v58; // [rsp+1D0h] [rbp+D0h] BYREF
  char v59[64]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v60; // [rsp+220h] [rbp+120h]
  char v61[64]; // [rsp+228h] [rbp+128h] BYREF
  char v62[72]; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v63[48]; // [rsp+2B0h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  v40 = a2;
  v2 = this;
  v42 = this;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v63, "ContextualProcessingInput", 0LL);
  if ( !*((_QWORD *)v2 + 18) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      778LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      v3);
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v47);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v43);
  v5 = *((_QWORD *)v2 + 5);
  v6 = *((_QWORD *)v2 + 4);
  v39 = v5;
  if ( v6 != v5 )
  {
    v7 = v6 + 16;
    do
    {
      if ( !ContextualProcessorBuffer::CheckProcessorHasAllState(v4, v6, 0) )
      {
        v51 = 0LL;
        std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v52);
        v53 = 0LL;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v54);
        std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v56);
        i = *(__int64 ***)v7;
LABEL_7:
        for ( i = (__int64 **)*i;
              i != *(__int64 ***)v7;
              i = (__int64 **)std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(
                                v7,
                                v12) )
        {
          LODWORD(v37) = *((_DWORD *)i + 4);
          if ( !std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                  (__int64)v47,
                  (const unsigned __int8 *)&v37) )
            goto LABEL_7;
          if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                 (__int64)v43,
                 (const unsigned __int8 *)&v37) )
          {
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
              v56,
              (__int64)v57,
              (unsigned __int8 *)&v37);
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
          DWORD2(v51) = 0;
        }
        else
        {
          if ( !*(_BYTE *)(v7 + 200) )
          {
            v18 = (__int64 *)((char *)v2 + 56);
            if ( *((_QWORD *)v2 + 7) != *((_QWORD *)v2 + 8) )
            {
              v37 = 0LL;
              v19 = 0LL;
              for ( j = 0LL; ; j += 208LL )
              {
                v21 = *v18;
                v22 = 0x4EC4EC4EC4EC4EC5LL;
                v23 = v18[1] - *v18;
                v38 = j;
                if ( v19 >= 0x4EC4EC4EC4EC4EC5LL * (v23 >> 4) )
                  break;
                if ( !ContextualProcessorBuffer::CheckProcessorHasAllState(0x4EC4EC4EC4EC4EC5LL, v6, 0) )
                {
                  v58 = 0LL;
                  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v59);
                  v60 = 0LL;
                  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v61);
                  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v62);
                  v24 = *(_QWORD *)(j + v21);
                  v41 = (char *)v2 - 8;
                  ContextualProcessorBuffer::MakeContextualProcessorDecision(
                    (_DWORD)v2 - 8,
                    v24,
                    (unsigned int)&v58,
                    v6,
                    j + v21 + 16,
                    j + v21 + 144);
                  if ( ContextualProcessorBuffer::CheckProcessorHasAllState(v25, v6, 2) )
                  {
                    if ( v37 <= v19 )
                    {
                      v28 = v41;
                      v29 = v19 - v37 + 1;
                      v30 = 208 * v37;
                      v37 = v19 + 1;
                      do
                      {
                        ContextualProcessorBuffer::DeliverInputToTarget(
                          v28,
                          *(_QWORD *)(*v18 + v30),
                          *v18 + v30 + 16,
                          *v18 + v30 + 80,
                          *v18 + v30 + 144);
                        v30 += 208LL;
                        --v29;
                      }
                      while ( v29 );
                      v2 = v42;
                      j = v38;
                    }
                  }
                  else if ( ContextualProcessorBuffer::CheckProcessorHasAllState(v27, v26, 0) )
                  {
                    ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v58);
                    break;
                  }
                  ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v58);
                }
                ++v19;
              }
              if ( ContextualProcessorBuffer::CheckProcessorHasAllState(v22, v6, 2) )
                std::vector<ContextualProcessorBuffer::InputSample>::clear(v18);
            }
          }
          v31 = (int *)v40;
          *(_BYTE *)(v7 + 200) = 1;
          ContextualProcessorBuffer::MakeContextualProcessorDecision(
            (_DWORD)v2 - 8,
            (_DWORD)v31,
            (unsigned int)&v51,
            v6,
            (__int64)v47,
            (__int64)v43);
          for ( k = **(__int64 ***)v7; k != *(__int64 **)v7; k = (__int64 *)*k )
          {
            if ( *((_DWORD *)k + 5) == 1 )
            {
              ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v51);
              VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
                (__int64)&v51,
                v31,
                v33,
                v34);
              std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                (__int64)v52,
                (__int64)v47);
              std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                (__int64)&v53,
                *((_QWORD *)v2 + 18) + 24LL);
              std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
                (__int64)v55,
                (__int64)v43);
              v35 = *((_QWORD *)v2 + 8);
              if ( v35 == *((_QWORD *)v2 + 9) )
              {
                std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
                  (__int64 *)v2 + 7,
                  *((_QWORD *)v2 + 8),
                  (__int64 *)&v51);
              }
              else
              {
                v36 = v51;
                *(_QWORD *)&v51 = 0LL;
                *(_QWORD *)v35 = v36;
                *(_DWORD *)(v35 + 8) = DWORD2(v51);
                std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                  v35 + 16,
                  (__int64)v52);
                std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
                  v35 + 80,
                  (__int64)&v53);
                std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
                  v35 + 144,
                  (__int64)v55);
                *((_QWORD *)v2 + 8) += 208LL;
              }
              ContextualProcessorBuffer::InputSample::~InputSample((void **)&v51);
              goto LABEL_21;
            }
          }
        }
        ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)&v51);
        v5 = v39;
      }
      v6 += 224LL;
      v7 += 224LL;
    }
    while ( v6 != v5 );
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
  ContextualProcessorBuffer::DeliverInputToTarget((char *)v2 - 8, v40, v47, *((_QWORD *)v2 + 18) + 24LL, v43);
LABEL_21:
  std::_Deallocate<16,0>(v45, (v46 - (_QWORD)v45) & 0xFFFFFFFFFFFFFFF8uLL);
  v46 = 0LL;
  v45 = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v15,
    v44);
  std::_Deallocate<16,0>(v44, 0x18uLL);
  std::_Deallocate<16,0>(v49, (v50 - (_QWORD)v49) & 0xFFFFFFFFFFFFFFF8uLL);
  v50 = 0LL;
  v49 = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    v16,
    v48);
  std::_Deallocate<16,0>(v48, 0x20uLL);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v63);
  return 0LL;
}
