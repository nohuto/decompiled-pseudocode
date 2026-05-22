/*
 * XREFs of ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800DF220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D1CC (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180086E8C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18008C80C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18008C80C.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DD55C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAXV-$vector@IV-$allocator@I@std@@@std@@@s.c)
 *     ??$_Try_emplace@PEAX$$V@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAX@Z @ 0x1800DD8D0 (--$_Try_emplace@PEAX$$V@-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uha.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x1800DEFC4 (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Win32kInterop::DeliverInputToAllTargets(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // r13d
  _QWORD *v6; // rax
  unsigned int *v7; // rdi
  __int64 v8; // rsi
  int v9; // ebx
  unsigned int *v10; // rdx
  _OWORD *v11; // rax
  unsigned __int8 *v12; // r8
  char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  _QWORD **v17; // rsi
  _QWORD *i; // rbx
  __int64 v19; // rcx
  __int64 v21[2]; // [rsp+30h] [rbp-69h] BYREF
  float v22; // [rsp+40h] [rbp-59h] BYREF
  _QWORD **v23; // [rsp+48h] [rbp-51h]
  __int64 v24; // [rsp+50h] [rbp-49h]
  void *v25; // [rsp+58h] [rbp-41h] BYREF
  __int128 v26; // [rsp+60h] [rbp-39h]
  __int64 v27; // [rsp+70h] [rbp-29h]
  __int64 v28; // [rsp+78h] [rbp-21h]
  void *v29; // [rsp+80h] [rbp-19h] BYREF
  __int64 v30; // [rsp+88h] [rbp-11h] BYREF
  __int64 v31; // [rsp+90h] [rbp-9h] BYREF
  char v32; // [rsp+98h] [rbp-1h] BYREF
  char v33; // [rsp+A8h] [rbp+Fh] BYREF
  int v34; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+118h] [rbp+7Fh] BYREF

  v5 = *(_DWORD *)(a2 + 328);
  v24 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v6 = v6;
  v6[1] = v6;
  v23 = (_QWORD **)v6;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 7LL;
  v28 = 8LL;
  v22 = FLOAT_1_0;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)&v25,
    0x10uLL,
    (unsigned __int64)v6);
  Win32kInterop::CreateInputInteropMessageFromInputInfo((__int64 *)&v29, a2);
  v7 = (unsigned int *)v29;
  *((_DWORD *)v29 + 39) = 0;
  v8 = 0LL;
  if ( *(_DWORD *)(a2 + 316) )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(144 * v8 + a2 + 324);
      v34 = v9;
      v21[0] = 0LL;
      LODWORD(v35) = v9;
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        a3,
        &v30,
        (const unsigned __int8 *)&v35);
      if ( v30 == a3[1]
        || (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v30 + 24),
                  v21) < 0 )
      {
        break;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21[0] + 48LL))(v21[0]) )
      {
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21[0] + 56LL))(v21[0]);
        v12 = (unsigned __int8 *)&v31;
        v13 = &v32;
        goto LABEL_8;
      }
      v10 = &v7[60 * v7[39] + 42];
      v11 = (_OWORD *)(144 * v8 + a2 + 320);
      *(_OWORD *)v10 = *v11;
      *((_OWORD *)v10 + 1) = v11[1];
      *((_OWORD *)v10 + 2) = v11[2];
      *((_OWORD *)v10 + 3) = v11[3];
      *((_OWORD *)v10 + 4) = v11[4];
      *((_OWORD *)v10 + 5) = v11[5];
      *((_OWORD *)v10 + 6) = v11[6];
      *((_OWORD *)v10 + 7) = v11[7];
      *((_OWORD *)v10 + 8) = v11[8];
      v7[60 * v7[39]++ + 90] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21[0] + 64LL))(v21[0]);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v21);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 316) )
        goto LABEL_12;
    }
    v35 = 0LL;
    v12 = (unsigned __int8 *)&v35;
    v13 = &v33;
LABEL_8:
    v14 = std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::_Try_emplace<void *,>(
            &v22,
            (__int64)v13,
            v12);
    v15 = *(_QWORD *)v14 + 24LL;
    v16 = *(_BYTE **)(*(_QWORD *)v14 + 32LL);
    if ( v16 == *(_BYTE **)(*(_QWORD *)v14 + 40LL) )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)v15, v16, &v34);
    }
    else
    {
      *(_DWORD *)v16 = v9;
      *(_QWORD *)(v15 + 8) += 4LL;
    }
    goto LABEL_11;
  }
LABEL_12:
  v17 = v23;
  for ( i = *v23; i != v17; i = (_QWORD *)*i )
    PointerInputMediator::RoutePointer(
      v5,
      (void *)i[2],
      (__int64)(i[4] - i[3]) >> 2,
      (unsigned int *)i[3],
      (const struct tagTELEMETRY_POINTER_FRAME_TIMES *)(a2 + 88),
      0);
  if ( v7[39] )
    ((void (__fastcall *)(unsigned int *, _QWORD))Win32kInterop::s_pfnMTCallback)(v7, 0LL);
  if ( v7 )
    operator delete[](v7);
  std::_Deallocate<16,0>(v25, (v26 - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF8uLL);
  v25 = 0LL;
  v26 = 0LL;
  std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>>>(
    v19,
    v23);
  std::_Deallocate<16,0>(v23, 0x30uLL);
  return 0LL;
}
