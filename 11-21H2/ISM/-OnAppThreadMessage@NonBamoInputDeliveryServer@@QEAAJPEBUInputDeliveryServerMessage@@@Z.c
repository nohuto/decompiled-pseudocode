/*
 * XREFs of ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x1800407A8
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x180040780 (-OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x180153FE0 (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemot.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180154088 (--$find@X@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare@Ut.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180154810 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadMessage(
        NonBamoInputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v6; // r8d
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 *v12; // r13
  __int64 *v13; // r10
  _OWORD *v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // rdx
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v28; // rax
  const char *v29; // r9
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  const char *v36; // r9
  char *v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 **v43; // rax
  int v44; // [rsp+20h] [rbp-60h]
  char v45[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v46; // [rsp+50h] [rbp-30h] BYREF
  __int128 v47; // [rsp+60h] [rbp-20h]
  __int64 v48; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  const char *v50; // [rsp+B8h] [rbp+38h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v6 = *((_DWORD *)a2 + 4);
      v7 = *((unsigned int *)a2 + 5);
      v8 = v7 | ((unsigned __int64)v6 << 32);
      v9 = 2 * (*((_QWORD *)this + 33) & v8);
      v10 = *((_QWORD *)this + 30);
      v11 = *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 33) & v8) + 8);
      v12 = (__int64 *)*((_QWORD *)this + 28);
      if ( v11 != v12 )
      {
        v13 = *(__int64 **)(v10 + 8 * v9);
        while ( 1 )
        {
          if ( v6 == *((_DWORD *)v11 + 4)
            && (_DWORD)v7 == *((_DWORD *)v11 + 5)
            && *((_QWORD *)a2 + 3) == v11[3]
            && *((_QWORD *)a2 + 4) == v11[4] )
          {
            v42 = *((_QWORD *)a2 + 5) - v11[5];
            if ( !v42 )
              v42 = *((_QWORD *)a2 + 6) - v11[6];
            if ( !v42 )
              break;
          }
          if ( v11 == v13 )
          {
            v12 = v11;
            v11 = 0LL;
            goto LABEL_7;
          }
          v11 = (__int64 *)v11[1];
        }
        v12 = (__int64 *)*v11;
LABEL_7:
        if ( v11 )
          goto LABEL_18;
      }
      if ( *((_QWORD *)this + 29) == 0x276276276276276LL )
        std::_Xlength_error("unordered_map/set too long");
      v14 = operator new(0x68uLL);
      v14[1] = *((_OWORD *)a2 + 1);
      v14[2] = *((_OWORD *)a2 + 2);
      *((_QWORD *)v14 + 6) = *((_QWORD *)a2 + 6);
      *(_OWORD *)((char *)v14 + 56) = *(_OWORD *)((char *)a2 + 8);
      *(_OWORD *)((char *)v14 + 72) = *(_OWORD *)((char *)a2 + 24);
      *(_OWORD *)((char *)v14 + 88) = *(_OWORD *)((char *)a2 + 40);
      v15 = *((_QWORD *)this + 29);
      v16 = v15 + 1;
      if ( v15 + 1 < 0 )
        v17 = (float)(int)(v16 & 1 | (v16 >> 1)) + (float)(int)(v16 & 1 | (v16 >> 1));
      else
        v17 = (float)(int)v16;
      v18 = *((_QWORD *)this + 34);
      if ( v18 < 0 )
      {
        v28 = *((_QWORD *)this + 34) & 1LL | ((unsigned __int64)v18 >> 1);
        v19 = (float)(int)v28 + (float)(int)v28;
      }
      else
      {
        v19 = (float)(int)v18;
      }
      if ( (float)(v17 / v19) > *((float *)this + 54) )
      {
        std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Rehash_for_1((char *)this + 216);
        v43 = (__int64 **)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Find_last<tagMsgRoutingInfo>(
                            (char *)this + 216,
                            v45,
                            v14 + 1,
                            v8);
        v15 = *((_QWORD *)this + 29);
        v12 = *v43;
      }
      v20 = (_QWORD *)v12[1];
      *((_QWORD *)this + 29) = v15 + 1;
      *(_QWORD *)v14 = v12;
      *((_QWORD *)v14 + 1) = v20;
      *v20 = v14;
      v12[1] = (__int64)v14;
      v21 = *((_QWORD *)this + 30);
      v22 = 2 * (*((_QWORD *)this + 33) & v8);
      v23 = *(__int64 **)(v21 + 8 * v22);
      if ( v23 == *((__int64 **)this + 28) )
      {
        *(_QWORD *)(v21 + 8 * v22) = v14;
      }
      else
      {
        if ( v23 == v12 )
        {
          *(_QWORD *)(v21 + 8 * v22) = v14;
LABEL_18:
          v24 = (__int64 *)*((_QWORD *)this + 4);
          v25 = *v24;
          v46 = *((_OWORD *)a2 + 1);
          v47 = *((_OWORD *)a2 + 2);
          v48 = *((_QWORD *)a2 + 6);
          v26 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD))(v25 + 24))(
                  v24,
                  &v46,
                  *((unsigned int *)a2 + 14),
                  *((unsigned int *)a2 + 15));
          if ( v26 >= 0 )
            return 0LL;
          v32 = 329LL;
LABEL_55:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v32,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
            (const char *)(unsigned int)v26,
            v44);
          return 0LL;
        }
        if ( *(_QWORD **)(v21 + 8 * v22 + 8) != v20 )
          goto LABEL_18;
      }
      *(_QWORD *)(v21 + 8 * v22 + 8) = v14;
      goto LABEL_18;
    case 1:
      v33 = (__int64 *)*((_QWORD *)this + 4);
      v34 = *v33;
      v46 = *((_OWORD *)a2 + 1);
      v47 = *((_OWORD *)a2 + 2);
      v48 = *((_QWORD *)a2 + 6);
      v35 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v34 + 40))(v33, &v46);
      if ( v35 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x151,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v35,
          v44);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        (char *)this + 216,
        &v50,
        (char *)a2 + 16);
      v36 = (const char *)*((_QWORD *)this + 28);
      v37 = (char *)v50;
      if ( v50 == v36 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x154,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v36);
      v38 = *((unsigned int *)v50 + 5);
      v39 = 2 * (*((_QWORD *)this + 33) & (v38 | ((unsigned __int64)*((unsigned int *)v50 + 4) << 32)));
      v40 = *((_QWORD *)this + 30);
      if ( *(const char **)(v40
                          + 16 * (*((_QWORD *)this + 33) & (v38 | ((unsigned __int64)*((unsigned int *)v50 + 4) << 32)))
                          + 8) == v50 )
      {
        if ( *(const char **)(v40
                            + 16
                            * (*((_QWORD *)this + 33) & (v38 | ((unsigned __int64)*((unsigned int *)v50 + 4) << 32)))) == v50 )
          *(_QWORD *)(v40 + 16 * (*((_QWORD *)this + 33) & (v38 | ((unsigned __int64)*((unsigned int *)v50 + 4) << 32)))) = v36;
        else
          v36 = (const char *)*((_QWORD *)v50 + 1);
        *(_QWORD *)(v40 + 8 * v39 + 8) = v36;
      }
      else if ( *(const char **)(v40
                               + 16
                               * (*((_QWORD *)this + 33) & (v38 | ((unsigned __int64)*((unsigned int *)v50 + 4) << 32)))) == v50 )
      {
        *(_QWORD *)(v40 + 16 * (*((_QWORD *)this + 33) & (v38 | ((unsigned __int64)*((unsigned int *)v50 + 4) << 32)))) = *(_QWORD *)v50;
      }
      v41 = *(_QWORD **)v37;
      --*((_QWORD *)this + 29);
      **((_QWORD **)v37 + 1) = v41;
      v41[1] = *((_QWORD *)v37 + 1);
      std::_Deallocate<16,0>(v37, 0x68uLL);
      break;
    case 2:
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        (char *)this + 216,
        &v50,
        (char *)a2 + 16);
      if ( v50 == *((const char **)this + 28) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x15D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v29);
      v30 = (__int64 *)*((_QWORD *)this + 4);
      v31 = *v30;
      v46 = *((_OWORD *)a2 + 1);
      v47 = *((_OWORD *)a2 + 2);
      v48 = *((_QWORD *)a2 + 6);
      v26 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD))(v31 + 32))(
              v30,
              &v46,
              *((unsigned int *)a2 + 14),
              *((unsigned int *)a2 + 15));
      if ( v26 < 0 )
      {
        v32 = 354LL;
        goto LABEL_55;
      }
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x169,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        a4);
  }
  return 0LL;
}
