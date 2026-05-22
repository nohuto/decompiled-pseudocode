/*
 * XREFs of ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001F960
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18000E1D0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyMa.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z @ 0x18001D838 (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x180051A0C (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x180056BA8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180056C10 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x18005F86C (-GetOrCreateInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Micr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x1800B3D4C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013DEA0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$vector@V-$ComPtr@VInputSite@@@WRL@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x18013E0FC (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhas.c)
 *     ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x18013E740 (-RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@2@PEAU32@@Z @ 0x18013E998 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18013EA84 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$a.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA?A_TAEBV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@Z @ 0x18013EE30 (--$emplace_back@AEBV-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@-$vector@V-$Com.c)
 *     ?NotifyInputSiteIdentityRemoved@InputSiteManager@@QEAAXUInputSiteId@@@Z @ 0x18013F2DC (-NotifyInputSiteIdentityRemoved@InputSiteManager@@QEAAXUInputSiteId@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache(InputSiteHierarchyManager *this)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  char *v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  char *v9; // rbx
  char *v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // r15
  int v13; // edx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int128 v17; // xmm2
  bool v18; // zf
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r12
  int (__fastcall ***v22)(_QWORD, GUID *, __int128 *); // rsi
  int (__fastcall *v23)(_QWORD, GUID *, __int128 *); // r15
  void *v24; // rdi
  unsigned __int128 v25; // kr00_16
  char *v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v30; // rax
  __int128 *v31; // rdi
  char *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  void *v43; // rdi
  unsigned __int64 v44; // rcx
  char *v45; // r15
  void *v46; // rdi
  unsigned __int8 *v47; // rsi
  unsigned __int8 *v48; // rdi
  struct InputSiteManager *InputSiteManager; // rax
  char *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r15
  int v53[2]; // [rsp+20h] [rbp-E0h] BYREF
  InputSiteHierarchyManager *v54; // [rsp+28h] [rbp-D8h]
  __int128 v55; // [rsp+30h] [rbp-D0h] BYREF
  void *v56; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+58h] [rbp-A8h]
  int v60; // [rsp+5Ch] [rbp-A4h]
  unsigned __int128 v61; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  char *v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int128 v66; // [rsp+90h] [rbp-70h]
  void *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  char v70[16]; // [rsp+B8h] [rbp-48h] BYREF
  char v71[16]; // [rsp+C8h] [rbp-38h] BYREF
  char v72[16]; // [rsp+D8h] [rbp-28h] BYREF
  char v73[16]; // [rsp+E8h] [rbp-18h] BYREF
  char v74[16]; // [rsp+F8h] [rbp-8h] BYREF
  char v75[24]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v76; // [rsp+120h] [rbp+20h] BYREF
  __int128 v77; // [rsp+130h] [rbp+30h]
  __int128 v78; // [rsp+140h] [rbp+40h]
  __int128 v79; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v54 = this;
  v2 = 0;
  v59 = 0;
  if ( dword_180268C28 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180268C28);
    if ( dword_180268C28 == -1 )
    {
      SRWLock.Ptr = 0LL;
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180268A18);
      qword_180268A58 = 0LL;
      xmmword_180268A60 = 0LL;
      qword_180268A70 = 0LL;
      byte_180268A78 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180268C28);
    }
  }
  AcquireSRWLockExclusive(&SRWLock);
  v3 = *((_QWORD *)&xmmword_180268A60 + 1);
  v65 = *((_QWORD *)&xmmword_180268A60 + 1);
  v4 = (char *)qword_180268A58;
  v64 = (char *)qword_180268A58;
  qword_180268A58 = 0LL;
  v67 = v64;
  v68 = 0LL;
  v69 = *((_QWORD *)&xmmword_180268A60 + 1);
  xmmword_180268A60 = 0uLL;
  ReleaseSRWLockExclusive(&SRWLock);
  if ( v4 )
  {
    v8 = *((_QWORD *)this + 12);
    if ( v8 )
    {
      v40 = (_QWORD *)*((_QWORD *)this + 11);
      if ( *((_QWORD *)this + 17) >> 3 <= v8 )
      {
        std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>>>(
          v8,
          v40);
        **((_QWORD **)this + 11) = *((_QWORD *)this + 11);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8LL) = *((_QWORD *)this + 11);
        *((_QWORD *)this + 12) = 0LL;
        v41 = *((_QWORD *)this + 11);
        v42 = *((_QWORD *)this + 14);
        v43 = (void *)*((_QWORD *)this + 13);
        v44 = (v42 - (unsigned __int64)v43 + 7) >> 3;
        if ( (unsigned __int64)v43 > v42 )
          v44 = 0LL;
        if ( v44 )
          memset64(v43, v41, v44);
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Unchecked_erase(
          (char *)this + 80,
          *v40,
          *((_QWORD *)this + 11));
      }
    }
    v9 = v4 + 24;
    while ( 1 )
    {
      v10 = v9;
      v11 = *((_QWORD *)v9 - 2);
      *(_QWORD *)v53 = v11;
      v6 = v11 >> 40;
      v7 = HIDWORD(v11);
      v12 = *(_QWORD *)v9;
      v58 = *(_QWORD *)v9;
      v13 = *((_DWORD *)v9 - 6);
      if ( v13 == 2 )
      {
        v5 = 16
           * ((0x100000001B3LL
             * (HIBYTE(v11) ^ (0x100000001B3LL
                             * (BYTE6(v11) ^ (0x100000001B3LL
                                            * (BYTE5(v11) ^ (0x100000001B3LL
                                                           * (BYTE4(v11) ^ (0x100000001B3LL
                                                                          * (BYTE3(v11) ^ (0x100000001B3LL
                                                                                         * (BYTE2(v11) ^ (0x100000001B3LL * (BYTE1(v11) ^ (0x100000001B3LL * ((unsigned __int8)v11 ^ 0xCBF29CE484222325uLL)))))))))))))))) & *((_QWORD *)v54 + 8))
           + *((_QWORD *)v54 + 5);
        v14 = *(_QWORD **)(v5 + 8);
        v15 = (_QWORD *)*((_QWORD *)v54 + 3);
        if ( v14 == v15 )
        {
LABEL_68:
          v14 = 0LL;
        }
        else
        {
          while ( v11 != v14[2] )
          {
            if ( v14 == *(_QWORD **)v5 )
              goto LABEL_68;
            v14 = (_QWORD *)v14[1];
          }
        }
        if ( v14 )
        {
          if ( v14 != v15 )
          {
            v16 = v14[3];
            v17 = *(_OWORD *)(v9 + 8);
            v76 = v17;
            v77 = *(_OWORD *)(v9 + 24);
            v78 = *(_OWORD *)(v9 + 40);
            v79 = *(_OWORD *)(v9 + 56);
            if ( *(_BYTE *)(v16 + 480) )
            {
              v18 = *(_BYTE *)(v16 + 472) == 0;
              *(_OWORD *)(v16 + 408) = v17;
              *(_OWORD *)(v16 + 424) = v77;
              *(_OWORD *)(v16 + 440) = v78;
              *(_OWORD *)(v16 + 456) = v79;
              if ( v18 )
                *(_BYTE *)(v16 + 472) = 1;
              v61 = 0LL;
              v19 = 0LL;
              v62 = 0LL;
              v60 = v2 | 0x10;
              v59 = v2 | 0x10;
              v5 = 0LL;
              *(_QWORD *)&v55 = 0LL;
              v20 = *(_QWORD *)(v16 + 488);
              v21 = *(_QWORD *)(v16 + 496);
              if ( v20 != v21 )
              {
                do
                {
                  v22 = *(int (__fastcall ****)(_QWORD, GUID *, __int128 *))(v20 + 8);
                  v23 = **v22;
                  if ( v5 )
                  {
                    *(_QWORD *)&v55 = 0LL;
                    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
                  }
                  if ( v23(v22, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, &v55) >= 0 )
                    std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::emplace_back<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate> const &>(
                      &v61,
                      &v55);
                  v20 += 16LL;
                  v5 = v55;
                }
                while ( v20 != v21 );
                v19 = v62;
              }
              if ( v5 )
              {
                *(_QWORD *)&v55 = 0LL;
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
              }
              v24 = (void *)v61;
              v25 = v61;
              if ( (_QWORD)v61 != *((_QWORD *)&v61 + 1) )
              {
                do
                {
                  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v25 + 24LL))(*(_QWORD *)v25, &v76);
                  v52 = v25 + 8;
                  v25 = __PAIR128__(*((unsigned __int64 *)&v61 + 1), (__int64)v25 + 8);
                }
                while ( v52 != *((_QWORD *)&v61 + 1) );
              }
              v2 = v60 & 0xFFFFFFEF;
              if ( v24 )
              {
                std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(
                  v24,
                  *((_QWORD *)&v25 + 1));
                std::_Deallocate<16,0>(v24, 8 * ((v19 - (__int64)v24) >> 3));
              }
            }
          }
        }
        goto LABEL_27;
      }
      if ( v13 )
      {
        v5 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v5 )
        {
          if ( (_DWORD)v5 == 2 )
          {
            v45 = (char *)v54 + 16;
            std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find<void>(
              (char *)v54 + 16,
              &v56,
              v53,
              v7);
            v46 = v56;
            if ( v56 == *((void **)v54 + 3) )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x76,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\inputsiteh"
                              "ierarchymanager.cpp",
                (const char *)0x8000FFFFLL,
                v53[0]);
            InputSiteHierarchyManager::RemoveInputSinkFromParentList(v54, v11, *((_QWORD *)v56 + 4));
            v47 = (unsigned __int8 *)*((_QWORD *)v46 + 5);
            if ( v47 != *((unsigned __int8 **)v46 + 6) )
            {
              v48 = (unsigned __int8 *)*((_QWORD *)v46 + 6);
              do
              {
                *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                         (__int64)v45,
                                         (__int64)v70,
                                         v47)
                          + 32LL) = 0LL;
                v47 += 8;
              }
              while ( v47 != v48 );
              v46 = v56;
            }
            std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Unchecked_erase(
              v45,
              v46);
            InputSiteManager = ISMStatics::GetInputSiteManager();
            LODWORD(v66) = 0;
            *((_QWORD *)&v66 + 1) = *(_QWORD *)v53;
            v55 = v66;
            InputSiteManager::NotifyInputSiteIdentityRemoved(InputSiteManager, &v55);
          }
          goto LABEL_27;
        }
        v50 = (char *)v54 + 16;
        std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find<void>(
          (char *)v54 + 16,
          &v63,
          v53,
          v7);
        if ( v63 != *((_QWORD *)v54 + 3) )
        {
          InputSiteHierarchyManager::RemoveInputSinkFromParentList(v54, v11, *(_QWORD *)(v63 + 32));
          v12 = v58;
        }
        *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                 (__int64)v50,
                                 (__int64)v71,
                                 (unsigned __int8 *)v53)
                  + 32LL) = v12;
        v51 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                (__int64)v50,
                (__int64)v72,
                (unsigned __int8 *)&v58);
        v39 = *(_QWORD *)v51 + 40LL;
        v5 = *(_QWORD *)(*(_QWORD *)v51 + 48LL);
        if ( v5 != *(_QWORD *)(*(_QWORD *)v51 + 56LL) )
        {
          *(_QWORD *)v5 = *(_QWORD *)v53;
          *(_QWORD *)(v39 + 8) += 8LL;
          goto LABEL_27;
        }
      }
      else
      {
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
        v31 = (__int128 *)InputSiteManager::GetOrCreateInputSiteFromInputSinkHandle(v30, &v57, v9 - 8);
        v32 = (char *)v54 + 16;
        v33 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                           (__int64)v54 + 16,
                           (__int64)v73,
                           (unsigned __int8 *)v53);
        v34 = 0LL;
        if ( &v55 != v31 )
        {
          v34 = *(_QWORD *)v31;
          *(_QWORD *)v31 = 0LL;
        }
        v35 = *(_QWORD *)(v33 + 24);
        *(_QWORD *)(v33 + 24) = v34;
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        v36 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        v37 = v58;
        *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                                 (__int64)v32,
                                 (__int64)v74,
                                 (unsigned __int8 *)v53)
                  + 32LL) = v37;
        v38 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                (__int64)v32,
                (__int64)v75,
                (unsigned __int8 *)&v58);
        v39 = *(_QWORD *)v38 + 40LL;
        v5 = *(_QWORD *)(*(_QWORD *)v38 + 48LL);
        if ( v5 != *(_QWORD *)(*(_QWORD *)v38 + 56LL) )
        {
          *(_QWORD *)v5 = *(_QWORD *)v53;
          *(_QWORD *)(v39 + 8) += 8LL;
          goto LABEL_27;
        }
      }
      std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>((const void **)v39, (_BYTE *)v5, v53);
LABEL_27:
      v9 += 96;
      if ( v10 == (char *)-72LL )
      {
        v4 = v64;
        v3 = v65;
        break;
      }
    }
  }
  if ( v4 )
  {
    v26 = v4;
    do
    {
      v27 = *((_QWORD *)v26 + 2);
      if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        NtCloseCompositionInputSink(v27, v5, v6, v7);
      v26 += 96;
    }
    while ( v26 );
    v28 = 32 * ((v3 - (__int64)v4) >> 5);
    v57 = v28;
    v56 = v4;
    if ( v28 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v56, &v57);
      v28 = v57;
      v4 = (char *)v56;
    }
    operator delete(v4, v28);
  }
}
