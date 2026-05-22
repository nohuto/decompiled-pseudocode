/*
 * XREFs of ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180016F50
 * Callers:
 *     ?HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180011430 (-HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800036F0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800DD5AC (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@W.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800DD73C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Win32kInterop::DoConvergedHitTestCallback(
        Win32kInterop *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  struct _InputHitTestResult *v3; // r14
  Win32kInterop *v5; // r13
  int v6; // esi
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // bl
  char *v13; // rcx
  char *v14; // rdx
  _QWORD *v15; // r15
  __int64 v16; // rcx
  int v17; // edi
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  Win32kInterop *v28; // rbx
  void (__fastcall ***v29)(_QWORD, GUID *, _QWORD *); // rdi
  void (__fastcall *v30)(_QWORD, GUID *, _QWORD *); // rbp
  __int64 v31; // rcx
  void (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v34; // rdi
  int v35; // [rsp+20h] [rbp-A8h]
  _QWORD v36[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-78h] BYREF
  char v38; // [rsp+60h] [rbp-68h] BYREF
  char v39[88]; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned int v41; // [rsp+D8h] [rbp+10h] BYREF
  struct _InputHitTestResult *v42; // [rsp+E0h] [rbp+18h]
  int v43; // [rsp+E8h] [rbp+20h] BYREF

  v42 = a3;
  v3 = a3;
  v5 = Win32kInterop::s_pInterop;
  switch ( *(_DWORD *)a2 )
  {
    case 4:
      v6 = 2;
      break;
    case 2:
      v6 = 8;
      break;
    case 3:
      v6 = 16;
      break;
    case 5:
      v6 = 0x1000000;
      if ( !*((_DWORD *)a2 + 4) )
        v6 = 32;
      break;
    default:
      v6 = 0;
      break;
  }
  v7 = *((_DWORD *)a2 + 8);
  if ( !v7 )
    v7 = -1;
  v43 = v7;
  v8 = *((_DWORD *)a2 + 18);
  v41 = v8;
  if ( !v8 )
    return (*(__int64 (__fastcall **)(_QWORD, struct _InputHitTestRequest *, struct _InputHitTestResult *, _QWORD, char *, _QWORD))(**((_QWORD **)Win32kInterop::s_pInterop + 6) + 48LL))(
             *((_QWORD *)Win32kInterop::s_pInterop + 6),
             a2,
             a3,
             0LL,
             (char *)Win32kInterop::s_pInterop + 8,
             0LL);
  if ( v6 == 2 )
  {
    v9 = *((_QWORD *)Win32kInterop::s_pInterop + 30);
    v10 = *(_QWORD *)(v9
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(v8) ^ (0x100000001B3LL
                                     * (BYTE2(v8) ^ (0x100000001B3LL
                                                   * (BYTE1(v8) ^ (0x100000001B3LL
                                                                 * ((unsigned __int8)v8 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)Win32kInterop::s_pInterop + 33))
                    + 8);
    v11 = *((_QWORD *)Win32kInterop::s_pInterop + 28);
    if ( v10 == v11 )
      goto LABEL_8;
    while ( v8 != *(_DWORD *)(v10 + 16) )
    {
      if ( v10 == *(_QWORD *)(v9
                            + 16
                            * ((0x100000001B3LL
                              * (HIBYTE(v8) ^ (0x100000001B3LL
                                             * (BYTE2(v8) ^ (0x100000001B3LL
                                                           * (BYTE1(v8) ^ (0x100000001B3LL
                                                                         * ((unsigned __int8)v8 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)Win32kInterop::s_pInterop + 33))) )
        goto LABEL_8;
      v10 = *(_QWORD *)(v10 + 8);
    }
    if ( !v10 || v10 == v11 )
LABEL_8:
      v12 = 1;
    else
      v12 = 0;
    v13 = (char *)Win32kInterop::s_pInterop + 216;
    v14 = v37;
  }
  else
  {
    v34 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::_Try_emplace<unsigned long const &,>(
                       (char *)Win32kInterop::s_pInterop + 288,
                       v37,
                       &v43);
    v12 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
                       v34 + 24,
                       v36,
                       &v41) == *(_QWORD *)(v34 + 32);
    v14 = &v38;
    v13 = (char *)(v34 + 24);
  }
  v15 = (_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                (__int64)v13,
                                (__int64)v14,
                                (unsigned __int8 *)&v41)
                 + 24LL);
  if ( v12 )
  {
    v16 = *v15;
    v17 = 0;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v15 )
    {
      v18 = malloc(0xC0uLL);
      v19 = v18;
      if ( v18 )
        memset_0(v18, 0, 0xC0uLL);
      v36[1] = v19;
      if ( v19 )
      {
        v19[1] = 0LL;
        memset_0(v19 + 3, 0, 0xA8uLL);
        *((_DWORD *)v19 + 2) = 1;
        *v19 = &InputContext::`vftable';
        v19[2] = 0LL;
        v36[0] = v19 + 3;
        *((_DWORD *)v19 + 6) = 0;
        v19[4] = 0LL;
        v19[5] = 0LL;
        v20 = operator new(0x20uLL);
        *v20 = v20;
        v20[1] = v20;
        v19[4] = v20;
        v19[6] = 0LL;
        v19[7] = 0LL;
        v19[8] = 0LL;
        v19[9] = 7LL;
        v19[10] = 8LL;
        *((_DWORD *)v19 + 6) = 1065353216;
        v21 = v19[4];
        v22 = operator new(0x80uLL);
        v19[6] = v22;
        v23 = v22 + 16;
        v19[7] = v22 + 16;
        v19[8] = v22 + 16;
        do
          *v22++ = v21;
        while ( v22 != v23 );
        v36[0] = v19 + 14;
        *((_DWORD *)v19 + 28) = 0;
        v19[15] = 0LL;
        v19[16] = 0LL;
        v24 = operator new(0x18uLL);
        *v24 = v24;
        v24[1] = v24;
        v19[15] = v24;
        v19[17] = 0LL;
        v19[18] = 0LL;
        v19[19] = 0LL;
        v19[20] = 7LL;
        v19[21] = 8LL;
        *((_DWORD *)v19 + 28) = 1065353216;
        v25 = v19[15];
        v26 = operator new(0x80uLL);
        v19[17] = v26;
        v27 = v26 + 16;
        v19[18] = v26 + 16;
        v19[19] = v26 + 16;
        do
          *v26++ = v25;
        while ( v26 != v27 );
        v17 = 0;
        v19[22] = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      if ( v19 )
      {
        *v15 = v19;
      }
      else
      {
        v17 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41,
          (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
          (const char *)0x8007000ELL,
          v35);
      }
      v3 = v42;
    }
    else
    {
      v17 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
        (const char *)0x80070057LL,
        v35);
    }
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x64C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v17,
        v35);
    *(_BYTE *)(*v15 + 184LL) = 0;
    if ( v6 == 2 )
      v28 = (Win32kInterop *)((char *)v5 + 280);
    else
      v28 = (Win32kInterop *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                                           (char *)v5 + 352,
                                           v39,
                                           &v43)
                            + 24LL);
    v29 = *(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v28;
    if ( *(_QWORD *)v28 )
    {
      v30 = **v29;
      v31 = v15[1];
      if ( v31 )
      {
        v15[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v30(v29, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, v15 + 1);
      v32 = *(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v28;
      if ( *(_QWORD *)v28 )
      {
        *(_QWORD *)v28 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v32)[2])(v32);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct _InputHitTestRequest *, struct _InputHitTestResult *, _QWORD, __int64, _QWORD *))(**((_QWORD **)v5 + 6) + 48LL))(
           *((_QWORD *)v5 + 6),
           a2,
           v3,
           *v15,
           (__int64)v5 + 8,
           v15 + 1);
}
