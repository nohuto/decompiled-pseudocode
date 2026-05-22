/*
 * XREFs of ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18000A740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18007745C (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA918 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@KPEAX@2@PEAU32@QEAU32@@Z @ 0x1800AC114 (-_Unchecked_erase@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180105B5C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18016F294 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_co.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801CD64C (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorBuffer::ResetBuffer(ContextualProcessorBuffer *this)
{
  ContextualProcessorBuffer::InputSample *v2; // rbx
  ContextualProcessorBuffer::InputSample *i; // rdi
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
  _QWORD *v15; // rdx
  void *v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdx
  void *v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rdx
  void *v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx

  ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision((ContextualProcessorBuffer *)((char *)this - 16));
  v2 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 7);
  for ( i = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 6);
        i != v2;
        i = (ContextualProcessorBuffer::InputSample *)((char *)i + 208) )
  {
    ContextualProcessorBuffer::InputSample::~InputSample(i);
  }
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
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
        if ( *(_QWORD *)(v6 + 24) >> 3 <= v8 )
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
        else
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Unchecked_erase(
            v6 - 32,
            *(_QWORD *)v9,
            *(_QWORD *)(v6 - 24));
        }
      }
      v14 = *(_QWORD *)(v6 + 48);
      if ( v14 )
      {
        v15 = *(_QWORD **)(v6 + 40);
        if ( *(_QWORD *)(v6 + 88) >> 3 <= v14 )
        {
          std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
            v14,
            v15);
          **(_QWORD **)(v6 + 40) = *(_QWORD *)(v6 + 40);
          *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL) = *(_QWORD *)(v6 + 40);
          *(_QWORD *)(v6 + 48) = 0LL;
          v16 = *(void **)(v6 + 56);
          v17 = (unsigned __int64)(*(_QWORD *)(v6 + 64) - (_QWORD)v16 + 7LL) >> 3;
          if ( (unsigned __int64)v16 > *(_QWORD *)(v6 + 64) )
            v17 = 0LL;
          if ( v17 )
            memset64(v16, *(_QWORD *)(v6 + 40), v17);
        }
        else
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Unchecked_erase(
            v6 + 32,
            *v15,
            *(_QWORD *)(v6 + 40));
        }
      }
      v18 = *(_QWORD *)(v6 + 120);
      if ( v18 )
      {
        v19 = *(_QWORD **)(v6 + 112);
        if ( *(_QWORD *)(v6 + 160) >> 3 <= v18 )
        {
          std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
            v18,
            v19);
          **(_QWORD **)(v6 + 112) = *(_QWORD *)(v6 + 112);
          *(_QWORD *)(*(_QWORD *)(v6 + 112) + 8LL) = *(_QWORD *)(v6 + 112);
          *(_QWORD *)(v6 + 120) = 0LL;
          v20 = *(void **)(v6 + 128);
          v21 = (unsigned __int64)(*(_QWORD *)(v6 + 136) - (_QWORD)v20 + 7LL) >> 3;
          if ( (unsigned __int64)v20 > *(_QWORD *)(v6 + 136) )
            v21 = 0LL;
          if ( v21 )
            memset64(v20, *(_QWORD *)(v6 + 112), v21);
        }
        else
        {
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Unchecked_erase(
            v6 + 104,
            *v19,
            *(_QWORD *)(v6 + 112));
        }
      }
      v4 += 224LL;
      v6 += 224LL;
    }
    while ( v4 != v5 );
  }
  v22 = *((_QWORD *)this + 11);
  if ( v22 )
  {
    v23 = (_QWORD *)*((_QWORD *)this + 10);
    if ( *((_QWORD *)this + 16) >> 3 <= v22 )
    {
      std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
        v22,
        v23);
      **((_QWORD **)this + 10) = *((_QWORD *)this + 10);
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL) = *((_QWORD *)this + 10);
      *((_QWORD *)this + 11) = 0LL;
      v24 = (void *)*((_QWORD *)this + 12);
      v25 = (unsigned __int64)(*((_QWORD *)this + 13) - (_QWORD)v24 + 7LL) >> 3;
      if ( (unsigned __int64)v24 > *((_QWORD *)this + 13) )
        v25 = 0LL;
      if ( v25 )
        memset64(v24, *((_QWORD *)this + 10), v25);
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Unchecked_erase(
        (char *)this + 72,
        *v23,
        *((_QWORD *)this + 10));
    }
  }
  v26 = *((_QWORD *)this + 17);
  if ( v26 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
}
