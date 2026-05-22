/*
 * XREFs of ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x1800032C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D24C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180081048 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@KPEAX@2@PEAU32@QEAU32@@Z @ 0x180082AA8 (-_Unchecked_erase@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DD48C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18014225C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_co.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801A1ECC (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorBuffer::ResetBuffer(ContextualProcessorBuffer *this)
{
  ContextualProcessorBuffer::InputSample *v2; // rbx
  ContextualProcessorBuffer::InputSample *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  void *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  void *v19; // rdi
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rdx
  void *v22; // rdi
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rdx
  void *v25; // rdi
  unsigned __int64 v26; // rcx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::GetImpl'::`2'::impl,
    0LL);
  v2 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 7);
  v3 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 6);
  if ( v3 != v2 )
  {
    do
    {
      ContextualProcessorBuffer::InputSample::~InputSample(v3);
      v3 = (ContextualProcessorBuffer::InputSample *)((char *)v3 + 208);
    }
    while ( v3 != v2 );
    v3 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 6);
  }
  *((_QWORD *)this + 7) = v3;
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 4);
  if ( v4 != v5 )
  {
    v6 = v4 + 40;
    do
    {
      v7 = *(_QWORD *)(v6 + 168);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 168) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      *(_BYTE *)(v6 + 176) = 0;
      *(_DWORD *)(v6 + 96) = 0;
      v8 = *(_QWORD *)(v6 - 16);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v6 - 24);
        if ( *(_QWORD *)(v6 + 24) >> 3 > v8 )
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Unchecked_erase(
            v6 - 32,
            *(_QWORD *)v9,
            *(_QWORD *)(v6 - 24));
        }
        else
        {
          **(_QWORD **)(v9 + 8) = 0LL;
          v10 = *(_QWORD **)v9;
          if ( *(_QWORD *)v9 )
          {
            do
            {
              v11 = (_QWORD *)*v10;
              operator delete(v10, 0x18uLL);
              v10 = v11;
            }
            while ( v11 );
          }
          **(_QWORD **)(v6 - 24) = *(_QWORD *)(v6 - 24);
          *(_QWORD *)(*(_QWORD *)(v6 - 24) + 8LL) = *(_QWORD *)(v6 - 24);
          *(_QWORD *)(v6 - 16) = 0LL;
          v12 = *(void **)(v6 - 8);
          v13 = (unsigned __int64)(*(_QWORD *)v6 - (_QWORD)v12 + 7LL) >> 3;
          if ( (unsigned __int64)v12 > *(_QWORD *)v6 )
            v13 = 0LL;
          if ( v13 )
            memset64(v12, *(_QWORD *)(v6 - 24), v13);
        }
      }
      v14 = *(_QWORD *)(v6 + 48);
      if ( v14 )
      {
        v18 = *(_QWORD **)(v6 + 40);
        if ( *(_QWORD *)(v6 + 88) >> 3 <= v14 )
        {
          std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
            v14,
            v18);
          **(_QWORD **)(v6 + 40) = *(_QWORD *)(v6 + 40);
          *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL) = *(_QWORD *)(v6 + 40);
          *(_QWORD *)(v6 + 48) = 0LL;
          v19 = *(void **)(v6 + 56);
          v20 = (unsigned __int64)(*(_QWORD *)(v6 + 64) - (_QWORD)v19 + 7LL) >> 3;
          if ( (unsigned __int64)v19 > *(_QWORD *)(v6 + 64) )
            v20 = 0LL;
          if ( v20 )
            memset64(v19, *(_QWORD *)(v6 + 40), v20);
        }
        else
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Unchecked_erase(
            v6 + 32,
            *v18,
            *(_QWORD *)(v6 + 40));
        }
      }
      v15 = *(_QWORD *)(v6 + 120);
      if ( v15 )
      {
        v21 = *(_QWORD **)(v6 + 112);
        if ( *(_QWORD *)(v6 + 160) >> 3 <= v15 )
        {
          std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
            v15,
            v21);
          **(_QWORD **)(v6 + 112) = *(_QWORD *)(v6 + 112);
          *(_QWORD *)(*(_QWORD *)(v6 + 112) + 8LL) = *(_QWORD *)(v6 + 112);
          *(_QWORD *)(v6 + 120) = 0LL;
          v22 = *(void **)(v6 + 128);
          v23 = (unsigned __int64)(*(_QWORD *)(v6 + 136) - (_QWORD)v22 + 7LL) >> 3;
          if ( (unsigned __int64)v22 > *(_QWORD *)(v6 + 136) )
            v23 = 0LL;
          if ( v23 )
            memset64(v22, *(_QWORD *)(v6 + 112), v23);
        }
        else
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Unchecked_erase(
            v6 + 104,
            *v21,
            *(_QWORD *)(v6 + 112));
        }
      }
      v4 += 224LL;
      v6 += 224LL;
    }
    while ( v4 != v5 );
  }
  v16 = *((_QWORD *)this + 11);
  if ( v16 )
  {
    v24 = (_QWORD *)*((_QWORD *)this + 10);
    if ( *((_QWORD *)this + 16) >> 3 <= v16 )
    {
      std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
        v16,
        v24);
      **((_QWORD **)this + 10) = *((_QWORD *)this + 10);
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL) = *((_QWORD *)this + 10);
      *((_QWORD *)this + 11) = 0LL;
      v25 = (void *)*((_QWORD *)this + 12);
      v26 = (unsigned __int64)(*((_QWORD *)this + 13) - (_QWORD)v25 + 7LL) >> 3;
      if ( (unsigned __int64)v25 > *((_QWORD *)this + 13) )
        v26 = 0LL;
      if ( v26 )
        memset64(v25, *((_QWORD *)this + 10), v26);
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Unchecked_erase(
        (char *)this + 72,
        *v24,
        *((_QWORD *)this + 10));
    }
  }
  v17 = *((_QWORD *)this + 17);
  if ( v17 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
}
