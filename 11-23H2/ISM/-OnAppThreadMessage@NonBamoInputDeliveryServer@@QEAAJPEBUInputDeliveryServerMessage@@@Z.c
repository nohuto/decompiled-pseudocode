/*
 * XREFs of ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180014248
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x180014220 (-OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001A970 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x1801736A0 (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemot.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180173748 (--$find@X@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare@Ut.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180173BE0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_comp.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadMessage(
        NonBamoInputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2,
        __int64 a3,
        const char *a4)
{
  char *v6; // r13
  unsigned __int64 v7; // r12
  _QWORD *v8; // r9
  _QWORD *v9; // r15
  _OWORD *v10; // rsi
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v23; // r9
  _QWORD *v24; // r10
  __int64 v25; // rax
  const char *v26; // r9
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  const char *v33; // r9
  __int64 *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-60h]
  char v41[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v42; // [rsp+50h] [rbp-30h] BYREF
  __int128 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 *v46; // [rsp+B8h] [rbp+38h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v6 = (char *)a2 + 16;
      v7 = *((unsigned int *)a2 + 5) | ((unsigned __int64)*((unsigned int *)a2 + 4) << 32);
      v8 = *(_QWORD **)(*((_QWORD *)this + 30) + 16 * (v7 & *((_QWORD *)this + 33)) + 8);
      v9 = (_QWORD *)*((_QWORD *)this + 28);
      if ( v8 != v9 )
      {
        while ( !(unsigned __int8)operator==(v6, v8 + 2, a3) )
        {
          if ( v23 == v24 )
          {
            v9 = v23;
            v23 = 0LL;
            goto LABEL_18;
          }
          v8 = (_QWORD *)v23[1];
        }
        v9 = (_QWORD *)*v23;
LABEL_18:
        if ( v23 )
          goto LABEL_13;
      }
      if ( *((_QWORD *)this + 29) == 0x276276276276276LL )
        std::_Xlength_error("unordered_map/set too long");
      v10 = operator new(0x68uLL);
      v10[1] = *(_OWORD *)v6;
      v10[2] = *((_OWORD *)v6 + 1);
      *((_QWORD *)v10 + 6) = *((_QWORD *)v6 + 4);
      *(_OWORD *)((char *)v10 + 56) = *(_OWORD *)((char *)a2 + 8);
      *(_OWORD *)((char *)v10 + 72) = *(_OWORD *)((char *)a2 + 24);
      *(_OWORD *)((char *)v10 + 88) = *(_OWORD *)((char *)a2 + 40);
      v11 = *((_QWORD *)this + 29) + 1LL;
      if ( v11 < 0 )
        v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
            + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
      else
        v12 = (float)(int)v11;
      v13 = *((_QWORD *)this + 34);
      if ( v13 < 0 )
      {
        v25 = *((_QWORD *)this + 34) & 1LL | ((unsigned __int64)v13 >> 1);
        v14 = (float)(int)v25 + (float)(int)v25;
      }
      else
      {
        v14 = (float)(int)v13;
      }
      if ( (float)(v12 / v14) > *((float *)this + 54) )
      {
        v39 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count((char *)this + 216);
        std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Forced_rehash(
          (char *)this + 216,
          v39);
        v9 = *(_QWORD **)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Find_last<tagMsgRoutingInfo>(
                           (char *)this + 216,
                           v41,
                           v10 + 1,
                           v7);
      }
      v15 = (_QWORD *)v9[1];
      ++*((_QWORD *)this + 29);
      *(_QWORD *)v10 = v9;
      *((_QWORD *)v10 + 1) = v15;
      *v15 = v10;
      v9[1] = v10;
      v16 = *((_QWORD *)this + 30);
      v17 = 2 * (v7 & *((_QWORD *)this + 33));
      v18 = *(_QWORD **)(v16 + 16 * (v7 & *((_QWORD *)this + 33)));
      if ( v18 == *((_QWORD **)this + 28) )
      {
        *(_QWORD *)(v16 + 16 * (v7 & *((_QWORD *)this + 33))) = v10;
      }
      else
      {
        if ( v18 == v9 )
        {
          *(_QWORD *)(v16 + 16 * (v7 & *((_QWORD *)this + 33))) = v10;
          goto LABEL_13;
        }
        if ( *(_QWORD **)(v16 + 16 * (v7 & *((_QWORD *)this + 33)) + 8) != v15 )
          goto LABEL_13;
      }
      *(_QWORD *)(v16 + 8 * v17 + 8) = v10;
LABEL_13:
      v19 = (__int64 *)*((_QWORD *)this + 4);
      v20 = *v19;
      v42 = *(_OWORD *)v6;
      v43 = *((_OWORD *)v6 + 1);
      v44 = *((_QWORD *)v6 + 4);
      v21 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD))(v20 + 24))(
              v19,
              &v42,
              *((unsigned int *)a2 + 14),
              *((unsigned int *)a2 + 15));
      if ( v21 >= 0 )
        return 0LL;
      v29 = 308LL;
LABEL_49:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v21,
        v40);
      return 0LL;
    case 1:
      v30 = (__int64 *)*((_QWORD *)this + 4);
      v31 = *v30;
      v42 = *((_OWORD *)a2 + 1);
      v43 = *((_OWORD *)a2 + 2);
      v44 = *((_QWORD *)a2 + 6);
      v32 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v31 + 40))(v30, &v42);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v32,
          v40);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        (char *)this + 216,
        &v46,
        (char *)a2 + 16);
      v33 = (const char *)*((_QWORD *)this + 28);
      v34 = v46;
      if ( v46 == (__int64 *)v33 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v33);
      v35 = *((unsigned int *)v46 + 5);
      v36 = 2 * (*((_QWORD *)this + 33) & (v35 | ((unsigned __int64)*((unsigned int *)v46 + 4) << 32)));
      v37 = *((_QWORD *)this + 30);
      if ( *(__int64 **)(v37
                       + 16 * (*((_QWORD *)this + 33) & (v35 | ((unsigned __int64)*((unsigned int *)v46 + 4) << 32)))
                       + 8) == v46 )
      {
        if ( *(__int64 **)(v37
                         + 16 * (*((_QWORD *)this + 33) & (v35 | ((unsigned __int64)*((unsigned int *)v46 + 4) << 32)))) == v46 )
          *(_QWORD *)(v37 + 16 * (*((_QWORD *)this + 33) & (v35 | ((unsigned __int64)*((unsigned int *)v46 + 4) << 32)))) = v33;
        else
          v33 = (const char *)v46[1];
        *(_QWORD *)(v37 + 8 * v36 + 8) = v33;
      }
      else if ( *(__int64 **)(v37
                            + 16
                            * (*((_QWORD *)this + 33) & (v35 | ((unsigned __int64)*((unsigned int *)v46 + 4) << 32)))) == v46 )
      {
        *(_QWORD *)(v37 + 16 * (*((_QWORD *)this + 33) & (v35 | ((unsigned __int64)*((unsigned int *)v46 + 4) << 32)))) = *v46;
      }
      v38 = *v34;
      --*((_QWORD *)this + 29);
      *(_QWORD *)v34[1] = v38;
      *(_QWORD *)(v38 + 8) = v34[1];
      std::_Deallocate<16,0>(v34, 104LL);
      break;
    case 2:
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        (char *)this + 216,
        &v46,
        (char *)a2 + 16);
      if ( v46 == *((__int64 **)this + 28) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x148,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v26);
      v27 = (__int64 *)*((_QWORD *)this + 4);
      v28 = *v27;
      v42 = *((_OWORD *)a2 + 1);
      v43 = *((_OWORD *)a2 + 2);
      v44 = *((_QWORD *)a2 + 6);
      v21 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD))(v28 + 32))(
              v27,
              &v42,
              *((unsigned int *)a2 + 14),
              *((unsigned int *)a2 + 15));
      if ( v21 < 0 )
      {
        v29 = 333LL;
        goto LABEL_49;
      }
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x154,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        a4);
  }
  return 0LL;
}
