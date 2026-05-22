/*
 * XREFs of ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801CEF50
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801CDC10 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA918 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800ABEB4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800AC4BC (-clear@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800ADF54 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800ED7D8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V-$_Uhash_compar.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800FC1D8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x180106168 (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x180106450 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18016A104 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801CBD5C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$_Assign_cast@AEAU?$pair@KW4ContextualProcessorDecision@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801CC244 (--$_Assign_cast@AEAU-$pair@KW4ContextualProcessorDecision@@@std@@V-$_List_unchecked_const_iterat.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@QEBAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@1@@Z @ 0x1801CD7DC (--R-$_Func_class@XPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocato.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAU1@@std@@QEBAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@1@0@Z @ 0x1801CD824 (--R-$_Func_class@XPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@_ea_1801CD824.c)
 *     ??R?$_Func_class@XPEAUInputInfo@@PEAK@std@@QEBAXPEAUInputInfo@@PEAK@Z @ 0x1801CD878 (--R-$_Func_class@XPEAUInputInfo@@PEAK@std@@QEBAXPEAUInputInfo@@PEAK@Z.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x1801CF2C4 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801CF3D8 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ?Get@InfoMetadata@@SAPEAV1@XZ @ 0x1801D0B5C (-Get@InfoMetadata@@SAPEAV1@XZ.c)
 *     ?GetInput@InfoMetadata@@QEAAPEBUInputInfoMetadata@1@W4InputType@@@Z @ 0x1801D0B94 (-GetInput@InfoMetadata@@QEAAPEBUInputInfoMetadata@1@W4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContextualProcessorBuffer::MakeContextualProcessorDecision(
        __int64 a1,
        int *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  struct InfoMetadata *v12; // rax
  __int64 Input; // rsi
  __int64 v14; // r8
  const char *v15; // r9
  unsigned __int8 *v16; // rdi
  unsigned __int8 *i; // rbx
  const struct InputInfo *v18; // rdi
  __int64 v19; // r12
  signed int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  const unsigned __int16 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // [rsp+40h] [rbp-99h] BYREF
  struct InputInfo *v32[3]; // [rsp+48h] [rbp-91h] BYREF
  __int64 v33; // [rsp+60h] [rbp-79h] BYREF
  _QWORD **v34; // [rsp+68h] [rbp-71h]
  unsigned __int64 v35; // [rsp+70h] [rbp-69h]
  void *v36; // [rsp+78h] [rbp-61h]
  __int128 v37; // [rsp+80h] [rbp-59h]
  _BYTE v38[8]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD **v39; // [rsp+A8h] [rbp-31h]
  unsigned __int64 v40; // [rsp+B0h] [rbp-29h]
  void *v41; // [rsp+B8h] [rbp-21h]
  __int128 v42; // [rsp+C0h] [rbp-19h]
  unsigned int v44; // [rsp+138h] [rbp+5Fh] BYREF
  __int64 v45; // [rsp+140h] [rbp+67h] BYREF
  __int64 v46; // [rsp+148h] [rbp+6Fh] BYREF

  v44 = 0;
  *(_DWORD *)(a3 + 8) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear((_QWORD *)(a3 + 16));
  Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)a3, a4 + 26);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 104LL) = *((_DWORD *)a4 + 34);
  v10 = *(_QWORD *)(a1 + 152) + 112LL;
  if ( (_QWORD *)v10 != a4 + 18 )
  {
    v45 = v10;
    *(_DWORD *)v10 = *((_DWORD *)a4 + 36);
    std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Assign_cast<std::pair<unsigned long,enum ContextualProcessorDecision> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
      (void ****)(v10 + 8),
      *(__int64 **)a4[19],
      (__int64 *)a4[19]);
    v11 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
            v10,
            *(_QWORD *)(v10 + 16));
    std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::_Forced_rehash(
      (_QWORD *)v10,
      v11);
  }
  v12 = InfoMetadata::Get();
  Input = InfoMetadata::GetInput(v12, (unsigned int)*a2);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v38);
  if ( Input )
    std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &>::operator()(Input + 192, (__int64)a2);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)&v33);
  v16 = (unsigned __int8 *)a4[2];
  for ( i = *(unsigned __int8 **)v16; i != v16; i = *(unsigned __int8 **)i )
  {
    if ( *((_DWORD *)i + 5)
      && (!Input
       || std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
            (__int64)v38,
            i + 16)) )
    {
      std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
        &v33,
        (__int64)v32,
        i + 16);
    }
  }
  if ( v35 )
  {
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)v32, a2, v14, v15);
    v18 = v32[0];
    v44 = 1;
    v19 = a6;
    if ( Input )
    {
      if ( v35 < v40 )
        std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::operator()(
          Input + 64,
          (__int64)a2,
          (__int64)&v33,
          v32[0]);
      std::_Func_class<void,InputInfo *,unsigned long *>::operator()(Input + 128, (__int64)v18, (__int64)&v44);
      std::_Func_class<void,InputInfo *,std::unordered_set<unsigned long> &>::operator()(Input + 320, (__int64)v18);
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, const struct InputInfo *, _QWORD, __int64))(*(_QWORD *)*a4 + 40LL))(
            *a4,
            v18,
            *(_QWORD *)(a1 + 152),
            a3);
    v21 = *(_QWORD *)(a3 + 80);
    v46 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 48LL))(*a4);
    v23 = wil::details::static_lazy<InputETW>::get(
            v22,
            _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v23 > 4u
      && (*(_BYTE *)(v23 + 16) & 1) != 0
      && (*(_QWORD *)(v23 + 24) & 1LL) == *(_QWORD *)(v23 + 24) )
    {
      LODWORD(v45) = v20;
      v31 = v21;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v23,
        (unsigned __int8 *)dword_180237BCA,
        v24,
        v25,
        (const WCHAR **)&v46,
        (__int64)&v31,
        (__int64)&v45);
    }
    v26 = v44;
    v27 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 48LL))(*a4);
    InputTraceLogging::ContextualProcessing::OnInput(v18, v27, v26, v20);
    if ( v20 < 0 )
    {
      *(_DWORD *)(a3 + 8) = 0;
      std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear((_QWORD *)(a3 + 16));
    }
    ContextualProcessorBuffer::ProcessContextualProcessorDecision(a1, (_DWORD)a2, a3, (_DWORD)a4, a5, v19);
    if ( v32[0] )
      operator delete[](v32[0]);
  }
  else
  {
    v20 = v44;
  }
  std::_Deallocate<16,0>(v36, (v37 - (_QWORD)v36) & 0xFFFFFFFFFFFFFFF8uLL);
  v36 = 0LL;
  v37 = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v28,
    v34);
  std::_Deallocate<16,0>(v34, 0x18uLL);
  std::_Deallocate<16,0>(v41, (v42 - (_QWORD)v41) & 0xFFFFFFFFFFFFFFF8uLL);
  v41 = 0LL;
  v42 = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v29,
    v39);
  std::_Deallocate<16,0>(v39, 0x18uLL);
  return (unsigned int)v20;
}
