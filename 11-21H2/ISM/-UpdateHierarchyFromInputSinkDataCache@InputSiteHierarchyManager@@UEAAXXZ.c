/*
 * XREFs of ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180014E30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180007BB0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyMa.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x180013ABC (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??0InputSinkDataCache@@QEAA@XZ @ 0x18003BCE4 (--0InputSinkDataCache@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18004DA74 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x18004DFE8 (-GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Micr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x18009C7C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6B40 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801234C4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhas.c)
 *     ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x180123898 (-RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@2@PEAU32@@Z @ 0x180123984 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180123A70 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$a.c)
 *     ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x180124044 (-RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache(InputSiteHierarchyManager *this)
{
  InputSiteHierarchyManager *v1; // rdi
  unsigned int v2; // r12d
  InputSiteHierarchyManager *v3; // rsi
  InputSiteHierarchyManager *v4; // r15
  __int64 v5; // r14
  unsigned __int128 v6; // kr00_16
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  char *v11; // rbx
  unsigned __int64 v12; // r13
  int v13; // edx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm2
  bool v18; // zf
  int v19; // r12d
  _QWORD *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r13
  void *v23; // rdi
  _QWORD *v24; // r13
  unsigned __int128 v25; // kr10_16
  InputSiteHierarchyManager *j; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD **v29; // rcx
  _QWORD *v30; // r13
  __int64 *v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  void *v35; // r8
  unsigned __int64 v36; // rcx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v38; // rax
  __int64 *v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  void *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // r14
  unsigned __int64 v48; // r15
  __int64 (__fastcall *v49)(_QWORD, GUID *, int *); // rax
  int v50; // eax
  InputSinkDataCache *v51; // rcx
  __int64 v52; // rdi
  unsigned __int8 *v53; // r13
  unsigned __int64 v54; // r15
  unsigned __int8 *v55; // r14
  struct InputSiteManager *InputSiteManager; // rax
  _QWORD *v57; // rdi
  _QWORD *i; // r13
  __int64 v59; // rcx
  __int64 v60; // r11
  unsigned __int64 v61; // rdi
  __int64 v62; // rax
  _QWORD *v63; // r14
  int v64[2]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v65; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v66; // [rsp+30h] [rbp-D0h] BYREF
  void *v67; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v68; // [rsp+40h] [rbp-C0h] BYREF
  InputSiteHierarchyManager *v69; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+58h] [rbp-A8h]
  InputSiteHierarchyManager *v72; // [rsp+60h] [rbp-A0h]
  unsigned __int128 v73; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v74; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall ***v75)(_QWORD, GUID *, int *); // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+88h] [rbp-78h] BYREF
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v78; // [rsp+98h] [rbp-68h]
  __int64 v79; // [rsp+A0h] [rbp-60h]
  InputSiteHierarchyManager *v80; // [rsp+A8h] [rbp-58h]
  char *v81; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+B8h] [rbp-48h] BYREF
  char v83; // [rsp+C0h] [rbp-40h]
  void *v84; // [rsp+C8h] [rbp-38h]
  __int128 v85; // [rsp+D0h] [rbp-30h]
  char v86[16]; // [rsp+E0h] [rbp-20h] BYREF
  char v87[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v88[16]; // [rsp+100h] [rbp+0h] BYREF
  char v89[16]; // [rsp+110h] [rbp+10h] BYREF
  char v90[16]; // [rsp+120h] [rbp+20h] BYREF
  char v91[16]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v92; // [rsp+140h] [rbp+40h] BYREF
  __int128 v93; // [rsp+150h] [rbp+50h]
  __int128 v94; // [rsp+160h] [rbp+60h]
  __int128 v95; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v1 = this;
  v69 = this;
  v2 = 0;
  v71 = 0;
  if ( dword_180242B70 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180242B70);
    if ( dword_180242B70 == -1 )
    {
      InputSinkDataCache::InputSinkDataCache(v51);
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180242B70);
    }
  }
  AcquireSRWLockExclusive(&stru_180242950);
  v3 = (InputSiteHierarchyManager *)qword_180242998;
  v80 = (InputSiteHierarchyManager *)qword_180242998;
  v84 = qword_180242998;
  v4 = (InputSiteHierarchyManager *)xmmword_1802429A0;
  v6 = xmmword_1802429A0;
  v5 = v6 >> 64;
  v72 = (InputSiteHierarchyManager *)v6;
  v85 = xmmword_1802429A0;
  v70 = *((_QWORD *)&xmmword_1802429A0 + 1);
  qword_180242998 = 0LL;
  xmmword_1802429A0 = 0uLL;
  ReleaseSRWLockExclusive(&stru_180242950);
  if ( v3 != v4 )
  {
    v10 = *((_QWORD *)v1 + 12);
    if ( v10 )
    {
      if ( *((_QWORD *)v1 + 17) >> 3 > v10 )
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Unchecked_erase(
          (char *)v1 + 80,
          **((_QWORD **)v1 + 11),
          *((_QWORD *)v1 + 11));
      }
      else
      {
        v29 = (_QWORD **)*((_QWORD *)v1 + 11);
        *v29[1] = 0LL;
        v30 = *v29;
        if ( *v29 )
        {
          do
          {
            *(_QWORD *)v64 = *v30;
            v31 = (__int64 *)v30[3];
            if ( v31 )
            {
              v32 = v30[4];
              v68 = v32;
              if ( v31 != (__int64 *)v32 )
              {
                do
                {
                  v33 = *v31;
                  if ( *v31 )
                  {
                    *v31 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                    v32 = v68;
                  }
                  ++v31;
                }
                while ( v31 != (__int64 *)v32 );
                v31 = (__int64 *)v30[3];
              }
              v34 = 8 * ((__int64)(v30[5] - (_QWORD)v31) >> 3);
              v65 = v34;
              v67 = v31;
              if ( v34 >= 0x1000 )
              {
                std::_Adjust_manually_vector_aligned(&v67, &v65);
                v34 = v65;
                v31 = (__int64 *)v67;
              }
              operator delete(v31, v34);
              v30[3] = 0LL;
              v30[4] = 0LL;
              v30[5] = 0LL;
            }
            operator delete(v30, 0x30uLL);
            v30 = *(_QWORD **)v64;
          }
          while ( *(_QWORD *)v64 );
        }
        **((_QWORD **)v1 + 11) = *((_QWORD *)v1 + 11);
        *(_QWORD *)(*((_QWORD *)v1 + 11) + 8LL) = *((_QWORD *)v1 + 11);
        *((_QWORD *)v1 + 12) = 0LL;
        v35 = (void *)*((_QWORD *)v1 + 13);
        v36 = (unsigned __int64)(*((_QWORD *)v1 + 14) - (_QWORD)v35 + 7LL) >> 3;
        if ( (unsigned __int64)v35 > *((_QWORD *)v1 + 14) )
          v36 = 0LL;
        if ( v36 )
        {
          memset64(v35, *((_QWORD *)v1 + 11), v36);
          v1 = v69;
        }
        v5 = v70;
        v4 = v72;
      }
    }
    v11 = (char *)v3 + 24;
    v78 = 0xCBF29CE484222325uLL;
    v79 = 0x100000001B3LL;
    while ( 1 )
    {
      v81 = v11;
      v12 = *((_QWORD *)v11 - 2);
      v66 = v12;
      v8 = HIWORD(v12);
      v9 = v12 >> 40;
      *(_QWORD *)v64 = v12 >> 16;
      v65 = *(_QWORD *)v11;
      v67 = (void *)v65;
      v13 = *((_DWORD *)v11 - 6);
      if ( v13 == 2 )
      {
        v7 = *((_QWORD *)v1 + 5)
           + 16
           * (*((_QWORD *)v1 + 8) & (0x100000001B3LL
                                   * (HIBYTE(v12) ^ (0x100000001B3LL
                                                   * (BYTE6(v12) ^ (0x100000001B3LL
                                                                  * (BYTE5(v12) ^ (0x100000001B3LL
                                                                                 * (BYTE4(v12) ^ (0x100000001B3LL
                                                                                                * (BYTE3(v12) ^ (0x100000001B3LL * (LOBYTE(v64[0]) ^ (0x100000001B3LL * (BYTE1(v12) ^ (v79 * (v78 ^ (unsigned __int8)v12)))))))))))))))));
        v14 = *(_QWORD **)(v7 + 8);
        v15 = (_QWORD *)*((_QWORD *)v1 + 3);
        if ( v14 != v15 )
        {
          v7 = *(_QWORD *)v7;
          while ( v12 != v14[2] )
          {
            if ( v14 == (_QWORD *)v7 )
              goto LABEL_22;
            v14 = (_QWORD *)v14[1];
          }
          if ( v14 )
          {
            if ( v14 != v15 )
            {
              v16 = v14[3];
              v17 = *(_OWORD *)(v11 + 8);
              v92 = v17;
              v93 = *(_OWORD *)(v11 + 24);
              v94 = *(_OWORD *)(v11 + 40);
              v95 = *(_OWORD *)(v11 + 56);
              if ( *(_BYTE *)(v16 + 480) )
              {
                v18 = *(_BYTE *)(v16 + 472) == 0;
                *(_OWORD *)(v16 + 408) = v17;
                *(_OWORD *)(v16 + 424) = v93;
                *(_OWORD *)(v16 + 440) = v94;
                *(_OWORD *)(v16 + 456) = v95;
                if ( v18 )
                  *(_BYTE *)(v16 + 472) = 1;
                v73 = 0LL;
                v8 = 0LL;
                v65 = 0LL;
                v74 = 0LL;
                v19 = v2 | 4;
                v71 = v19;
                v20 = 0LL;
                *(_QWORD *)v64 = 0LL;
                v21 = *(_QWORD *)(v16 + 488);
                v22 = *(_QWORD *)(v16 + 496);
                if ( v21 == v22 )
                {
LABEL_17:
                  if ( v20 )
                  {
                    *(_QWORD *)v64 = 0LL;
                    (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
                  }
                  v25 = v73;
                  v7 = v25 >> 64;
                  v23 = (void *)v25;
                  v24 = (_QWORD *)v73;
                  if ( (_QWORD)v73 != *((_QWORD *)&v73 + 1) )
                  {
                    v63 = (_QWORD *)*((_QWORD *)&v73 + 1);
                    do
                    {
                      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v24 + 24LL))(*v24, &v92);
                      ++v24;
                    }
                    while ( v24 != v63 );
                    v5 = v70;
                    v7 = *((_QWORD *)&v73 + 1);
                  }
                  v2 = v19 & 0xFFFFFFFB;
                  if ( v23 )
                  {
                    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(v23);
                    std::_Deallocate<16,0>(v23, 8 * ((__int64)(v65 - (_QWORD)v23) >> 3));
                  }
                  goto LABEL_22;
                }
                v47 = (_QWORD *)*((_QWORD *)&v73 + 1);
                v48 = v65;
                while ( 2 )
                {
                  v75 = *(__int64 (__fastcall ****)(_QWORD, GUID *, int *))(v21 + 8);
                  v49 = **v75;
                  v65 = (unsigned __int64)v49;
                  if ( v20 )
                  {
                    *(_QWORD *)v64 = 0LL;
                    (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
                    v50 = ((__int64 (__fastcall *)(_QWORD, GUID *, int *))v65)(
                            v75,
                            &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5,
                            v64);
                  }
                  else
                  {
                    v50 = v49(v75, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, v64);
                  }
                  if ( v50 >= 0 )
                  {
                    if ( v47 == (_QWORD *)v48 )
                    {
                      std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
                        &v73,
                        v47,
                        v64);
                      v48 = v74;
                      v47 = (_QWORD *)*((_QWORD *)&v73 + 1);
                      goto LABEL_61;
                    }
                    *v47 = *(_QWORD *)v64;
                    v20 = *(_QWORD **)v64;
                    if ( *(_QWORD *)v64 )
                    {
                      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v64 + 8LL))(*(_QWORD *)v64);
                      v20 = *(_QWORD **)v64;
                    }
                    *((_QWORD *)&v73 + 1) = ++v47;
                  }
                  else
                  {
LABEL_61:
                    v20 = *(_QWORD **)v64;
                  }
                  v21 += 16LL;
                  if ( v21 == v22 )
                  {
                    v65 = v48;
                    v3 = v80;
                    v5 = v70;
                    v4 = v72;
                    v8 = 0LL;
                    goto LABEL_17;
                  }
                  continue;
                }
              }
            }
          }
        }
      }
      else if ( v13 )
      {
        v7 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 == 2 )
          {
            v65 = (unsigned __int64)v1 + 16;
            std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find<void>(
              (char *)v1 + 16,
              &v76,
              &v66,
              v9);
            v52 = v76;
            if ( v76 == *((_QWORD *)v69 + 3) )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x76,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteh"
                              "ierarchymanager.cpp",
                (const char *)0x8000FFFFLL,
                v64[0]);
            InputSiteHierarchyManager::RemoveInputSinkFromParentList(v69, v12, *(_QWORD *)(v76 + 32));
            v53 = *(unsigned __int8 **)(v52 + 40);
            if ( v53 != *(unsigned __int8 **)(v52 + 48) )
            {
              v54 = v65;
              v55 = *(unsigned __int8 **)(v52 + 48);
              do
              {
                *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                         v54,
                                         (__int64)v86,
                                         v53)
                          + 32LL) = 0LL;
                v53 += 8;
              }
              while ( v53 != v55 );
              v5 = v70;
              v4 = v72;
            }
            std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Unchecked_erase(
              v65,
              v52);
            InputSiteManager = ISMStatics::GetInputSiteManager();
            v65 = v66;
            v57 = (_QWORD *)*((_QWORD *)InputSiteManager + 7);
            for ( i = (_QWORD *)*((_QWORD *)InputSiteManager + 8); v57 != i; ++v57 )
            {
              InputSite::GetIdForNamespace(*v57, &v82, 0LL);
              if ( v83 != (_BYTE)v8 && v82 == v60 )
                InputSite::RemoveIdForNamespace(v59, 0LL);
            }
          }
        }
        else
        {
          *(_QWORD *)v64 = (char *)v1 + 16;
          std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find<void>(
            (char *)v1 + 16,
            &v77,
            &v66,
            v9);
          if ( v77 == *((_QWORD *)v1 + 3) )
          {
            v61 = v65;
          }
          else
          {
            InputSiteHierarchyManager::RemoveInputSinkFromParentList(v1, v12, *(_QWORD *)(v77 + 32));
            v61 = (unsigned __int64)v67;
          }
          *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                   *(__int64 *)v64,
                                   (__int64)v87,
                                   (unsigned __int8 *)&v66)
                    + 32LL) = v61;
          v62 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                  *(__int64 *)v64,
                  (__int64)v88,
                  (unsigned __int8 *)&v67);
          v46 = *(_QWORD *)v62 + 40LL;
          v7 = *(_QWORD *)(*(_QWORD *)v62 + 48LL);
          if ( v7 == *(_QWORD *)(*(_QWORD *)v62 + 56LL) )
            goto LABEL_56;
          *(_QWORD *)v7 = v66;
          *(_QWORD *)(v46 + 8) += 8LL;
        }
      }
      else
      {
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
        v39 = (__int64 *)InputSiteManager::GetOrCreateInputSiteFromInputSinkHandle(v38, &v68, v11 - 8);
        v65 = (unsigned __int64)v1 + 16;
        v40 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                           (__int64)v1 + 16,
                           (__int64)v89,
                           (unsigned __int8 *)&v66);
        v41 = 0LL;
        if ( &v75 != (__int64 (__fastcall ****)(_QWORD, GUID *, int *))v39 )
        {
          v41 = *v39;
          *v39 = 0LL;
        }
        v42 = *(_QWORD *)(v40 + 24);
        *(_QWORD *)(v40 + 24) = v41;
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        v43 = v68;
        if ( v68 )
        {
          v68 = 0LL;
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v43 + 16LL))(v43);
        }
        v44 = v67;
        *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                 v65,
                                 (__int64)v90,
                                 (unsigned __int8 *)&v66)
                  + 32LL) = v44;
        v45 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                v65,
                (__int64)v91,
                (unsigned __int8 *)&v67);
        v46 = *(_QWORD *)v45 + 40LL;
        v7 = *(_QWORD *)(*(_QWORD *)v45 + 48LL);
        if ( v7 == *(_QWORD *)(*(_QWORD *)v45 + 56LL) )
        {
LABEL_56:
          std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
            (const void **)v46,
            (_BYTE *)v7,
            &v66);
          goto LABEL_22;
        }
        *(_QWORD *)v7 = v66;
        *(_QWORD *)(v46 + 8) += 8LL;
      }
LABEL_22:
      v11 += 96;
      if ( v81 + 72 == (char *)v4 )
        break;
      v1 = v69;
    }
  }
  if ( v3 )
  {
    for ( j = v3; j != v4; j = (InputSiteHierarchyManager *)((char *)j + 96) )
    {
      v27 = *((_QWORD *)j + 2);
      if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v27, v7, v8, v9);
    }
    v28 = 32 * ((v5 - (__int64)v3) >> 5);
    v68 = v28;
    v69 = v3;
    if ( v28 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned((void **)&v69, &v68);
      v28 = v68;
      v3 = v69;
    }
    operator delete(v3, v28);
  }
}
