/*
 * XREFs of ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18006394C
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18000A2D0 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x1801BFA78 (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 * Callees:
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180051734 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594AC (-InternalRelease@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BA10 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800DE878 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V-$_Uhash_compar.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800F79A0 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800F79D0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18015CB08 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha.c)
 *     ??$_Assign_cast@AEAU?$pair@KW4ContextualProcessorDecision@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801BE9D4 (--$_Assign_cast@AEAU-$pair@KW4ContextualProcessorDecision@@@std@@V-$_List_unchecked_const_iterat.c)
 *     ??1ContextualProcessorResponse@@QEAA@XZ @ 0x1801BFCC4 (--1ContextualProcessorResponse@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision(ContextualProcessorBuffer *this)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  _DWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  int v9[4]; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v10[64]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v11; // [rsp+70h] [rbp-59h]
  _BYTE v12[64]; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v13[104]; // [rsp+B8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]
  __int64 v15; // [rsp+130h] [rbp+67h] BYREF
  __int64 v16; // [rsp+138h] [rbp+6Fh] BYREF

  v15 = 0LL;
  v2 = *((_QWORD *)this + 5);
  v3 = *((_QWORD *)this + 6);
  while ( v2 != v3 )
  {
    if ( *(_BYTE *)(v2 + 216) )
    {
      v4 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v2;
      v5 = ***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v2;
      Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v15);
      if ( v5(v4, &GUID_7fa430a3_9305_4154_a5ee_11987d0ffb6f, &v15) >= 0 )
      {
        *(_OWORD *)v9 = 0LL;
        std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>(v10);
        v11 = 0LL;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((__int64)v12);
        std::unordered_set<unsigned long>::unordered_set<unsigned long>(v13);
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v9, v2 + 208);
        *(_DWORD *)(*((_QWORD *)this + 19) + 104LL) = *(_DWORD *)(v2 + 136);
        v6 = (_DWORD *)(*((_QWORD *)this + 19) + 112LL);
        if ( v6 != (_DWORD *)(v2 + 144) )
        {
          v16 = *((_QWORD *)this + 19) + 112LL;
          *v6 = *(_DWORD *)(v2 + 144);
          std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Assign_cast<std::pair<unsigned long,enum ContextualProcessorDecision> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
            v6 + 2,
            **(_QWORD **)(v2 + 152));
          v7 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(v6);
          std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::_Forced_rehash(
            v6,
            v7);
          v16 = 0LL;
          std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Clear_guard::~_Clear_guard(&v16);
        }
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v15 + 24LL))(
               v15,
               *((_QWORD *)this + 19),
               v9);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x111,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
            (const char *)(unsigned int)v8,
            v9[0]);
        ContextualProcessorResponse::~ContextualProcessorResponse((ContextualProcessorResponse *)v9);
      }
    }
    v2 += 224LL;
  }
  Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(&v15);
}
