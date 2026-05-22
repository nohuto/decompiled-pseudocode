/*
 * XREFs of ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001DBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18000A120 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@K.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180046B30 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x1800473E0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BA10 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall ContextualProcessorBuffer::TryAddProcessorAndContact(__int64 a1, int a2, __int64 a3, int *a4)
{
  __int64 v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // ebx
  __int64 v21; // rcx
  void *v22; // rcx
  unsigned __int64 v23; // rdx
  _QWORD **v24; // rcx
  _QWORD *v25; // rcx
  void *v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD **v28; // rcx
  _QWORD *v29; // rcx
  void *v30; // rcx
  unsigned __int64 v31; // rdx
  _QWORD **v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // rbx
  void *v41[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  void *v44[2]; // [rsp+40h] [rbp-C0h]
  void *v45[2]; // [rsp+50h] [rbp-B0h]
  _QWORD *v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  void *v50[2]; // [rsp+80h] [rbp-80h]
  void *v51[2]; // [rsp+90h] [rbp-70h]
  _QWORD *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+C0h] [rbp-40h]
  void *v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  void *v59; // [rsp+D8h] [rbp-28h]
  __int128 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int128 v63; // [rsp+100h] [rbp+0h]
  unsigned __int64 v64; // [rsp+140h] [rbp+40h] BYREF
  int v65; // [rsp+148h] [rbp+48h] BYREF
  int *v66; // [rsp+158h] [rbp+58h]

  v66 = a4;
  v65 = a2;
  v6 = a1 + 24;
  v7 = *(_QWORD **)(a1 + 24);
  v8 = *(_QWORD **)(a1 + 32);
  if ( v7 == v8 )
  {
LABEL_4:
    v42 = 0LL;
    *(_OWORD *)v44 = 0LL;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
    *v9 = v9;
    v9[1] = v9;
    v44[0] = v9;
    v47 = 7LL;
    v48 = 8LL;
    v43 = 1065353216;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
    v45[0] = v10;
    v11 = v10 + 16;
    v45[1] = v10 + 16;
    v46 = v10 + 16;
    do
      *v10++ = v9;
    while ( v10 != v11 );
    *(_OWORD *)v50 = 0LL;
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
    *v12 = v12;
    v12[1] = v12;
    v50[0] = v12;
    v53 = 7LL;
    v54 = 8LL;
    v49 = 1065353216;
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
    v51[0] = v13;
    v14 = v13 + 16;
    v51[1] = v13 + 16;
    v52 = v13 + 16;
    do
      *v13++ = v12;
    while ( v13 != v14 );
    v55 = 0LL;
    v58 = 0LL;
    v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
    *v15 = v15;
    v15[1] = v15;
    v57 = v15;
    v61 = 7LL;
    v62 = 8LL;
    v56 = 1065353216;
    v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
    v59 = v16;
    v17 = v16 + 16;
    *(_QWORD *)&v60 = v16 + 16;
    *((_QWORD *)&v60 + 1) = v16 + 16;
    do
      *v16++ = v15;
    while ( v16 != v17 );
    v63 = 0LL;
    v18 = v42;
    if ( v42 != a3 )
    {
      if ( a3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
        v18 = v42;
      }
      v42 = a3;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = *((_QWORD *)a4 + 1);
    if ( (_QWORD)v63 != v19 )
    {
      v64 = *((_QWORD *)a4 + 1);
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v64);
      v64 = v63;
      *(_QWORD *)&v63 = v19;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v64);
    }
    BYTE8(v63) = 0;
    LODWORD(v55) = 0;
    v20 = *a4;
    *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Try_emplace<unsigned long const &,>(
                             (__int64)&v43,
                             (__int64)v41,
                             (unsigned __int8 *)&v65)
              + 20LL) = v20;
    if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 16) )
    {
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        v6,
        *(_QWORD *)(v6 + 8),
        &v42);
    }
    else
    {
      ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
        *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(v6 + 8),
        (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v42);
      *(_QWORD *)(v6 + 8) += 224LL;
    }
    v21 = v63;
    if ( (_QWORD)v63 )
    {
      *(_QWORD *)&v63 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v59;
    v23 = 8 * ((__int64)(v60 - (_QWORD)v59) >> 3);
    v64 = v23;
    v41[0] = v59;
    if ( v23 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v41, &v64);
      v23 = v64;
      v22 = v41[0];
    }
    operator delete(v22, v23);
    v59 = 0LL;
    v60 = 0LL;
    v24 = (_QWORD **)v57;
    **((_QWORD **)v57 + 1) = 0LL;
    v25 = *v24;
    if ( v25 )
    {
      do
      {
        v39 = (_QWORD *)*v25;
        std::_Deallocate<16,0>(v25, 0x18uLL);
        v25 = v39;
      }
      while ( v39 );
    }
    operator delete(v57, 0x18uLL);
    v26 = v51[0];
    v27 = 8 * (((char *)v51[1] - (char *)v51[0]) >> 3);
    v64 = v27;
    v41[0] = v51[0];
    if ( v27 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v41, &v64);
      v27 = v64;
      v26 = v41[0];
    }
    operator delete(v26, v27);
    *(_OWORD *)v51 = 0LL;
    v52 = 0LL;
    v28 = (_QWORD **)v50[0];
    **((_QWORD **)v50[0] + 1) = 0LL;
    v29 = *v28;
    if ( v29 )
    {
      do
      {
        v40 = (_QWORD *)*v29;
        std::_Deallocate<16,0>(v29, 0x18uLL);
        v29 = v40;
      }
      while ( v40 );
    }
    operator delete(v50[0], 0x18uLL);
    v30 = v45[0];
    v31 = 8 * (((char *)v45[1] - (char *)v45[0]) >> 3);
    v64 = v31;
    v41[0] = v45[0];
    if ( v31 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v41, &v64);
      v31 = v64;
      v30 = v41[0];
    }
    operator delete(v30, v31);
    *(_OWORD *)v45 = 0LL;
    v46 = 0LL;
    v32 = (_QWORD **)v44[0];
    **((_QWORD **)v44[0] + 1) = 0LL;
    v33 = *v32;
    if ( v33 )
    {
      do
      {
        v34 = (_QWORD *)*v33;
        operator delete(v33, 0x18uLL);
        v33 = v34;
      }
      while ( v34 );
    }
    operator delete(v44[0], 0x18uLL);
    v35 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = *((_QWORD *)a4 + 1);
    if ( !v36 )
      return;
LABEL_46:
    *((_QWORD *)a4 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    return;
  }
  while ( *v7 != a3 )
  {
    v7 += 28;
    if ( v7 == v8 )
      goto LABEL_4;
  }
  v37 = *a4;
  *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Try_emplace<unsigned long const &,>(
                           (__int64)(v7 + 1),
                           (__int64)v41,
                           (unsigned __int8 *)&v65)
            + 20LL) = v37;
  v38 = *((_QWORD *)a4 + 1);
  if ( v38 && v38 != v7[26] )
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v7 + 26, a4 + 2);
  v36 = *((_QWORD *)a4 + 1);
  if ( v36 )
    goto LABEL_46;
}
