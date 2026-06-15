/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E8D14
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1800E9000 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 * Callees:
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18001C838 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C878 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180028068 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??$?RVCAudioSessionInstanceId@@V0@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_NAEBVCAudioSessionInstanceId@@0@Z @ 0x180041750 (--$-RVCAudioSessionInstanceId@@V0@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSes.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 *v2; // r15
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 *v7; // r13
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r8
  unsigned __int16 *v11; // rsi
  int v12; // r14d
  __int64 v13; // r14
  ATL::CStringData *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  unsigned __int16 *v33; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v34; // [rsp+70h] [rbp+18h]

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = v2[1];
  v7 = (__int64 *)(v2 + 3);
  v34 = (__int64 *)(v2 + 3);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    2 * v5,
    v6);
  v2[6] = v5 - 1;
  v2[7] = v5;
  v8 = *(_QWORD **)v2[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v6 )
  {
    v9 = (_QWORD *)*v9;
    v33 = (unsigned __int16 *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    if ( (int)CAudioSessionInstanceId::ToString((__int64)(v8 + 2), &v33) < 0 )
    {
      v14 = (ATL::CStringData *)(v33 - 12);
      v13 = 0LL;
    }
    else
    {
      v11 = v33;
      v12 = *((_DWORD *)v33 - 4);
      if ( ((1 - *((_DWORD *)v33 - 2)) | (*((_DWORD *)v33 - 3) - v12)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v33, v12);
        v11 = v33;
      }
      _o__wcsupr_s(v11, v12 + 1, v10);
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v33, v12);
      v13 = (unsigned int)ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v11);
      v14 = (ATL::CStringData *)(v11 - 12);
    }
    ATL::CStringData::Release(v14);
    v16 = 2 * (v2[6] & v13);
    v17 = *v7;
    if ( *(_QWORD *)(*v7 + 8 * v16) == v6 )
    {
      *(_QWORD *)(v17 + 8 * v16) = v8;
LABEL_12:
      *(_QWORD *)(v17 + 8 * v16 + 8) = v8;
      goto LABEL_22;
    }
    v18 = *(_QWORD **)(v17 + 8 * v16 + 8);
    if ( !std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
            v15,
            (__int64)(v8 + 2),
            (__int64)(v18 + 2)) )
    {
      v20 = (_QWORD *)*v18;
      if ( (_QWORD *)*v18 != v8 )
      {
        v21 = (_QWORD *)v8[1];
        *v21 = v9;
        v22 = (_QWORD *)v9[1];
        *v22 = v20;
        v23 = (_QWORD *)v20[1];
        *v23 = v8;
        v20[1] = v22;
        v9[1] = v21;
        v8[1] = v23;
      }
      goto LABEL_12;
    }
    v24 = v18;
    while ( *(_QWORD **)(v17 + 8 * v16) != v24 )
    {
      v18 = (_QWORD *)v18[1];
      v24 = v18;
      if ( !std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
              v19,
              (__int64)(v8 + 2),
              (__int64)(v18 + 2)) )
      {
        v25 = *v18;
        v26 = (_QWORD *)v8[1];
        *v26 = v9;
        v27 = (_QWORD *)v9[1];
        *v27 = v25;
        v28 = *(_QWORD **)(v25 + 8);
        *v28 = v8;
        *(_QWORD *)(v25 + 8) = v27;
        v9[1] = v26;
        v8[1] = v28;
        goto LABEL_21;
      }
    }
    v29 = (_QWORD *)v8[1];
    *v29 = v9;
    v30 = (_QWORD *)v9[1];
    *v30 = v18;
    v31 = (_QWORD *)v18[1];
    *v31 = v8;
    v18[1] = v30;
    v9[1] = v29;
    v8[1] = v31;
    *(_QWORD *)(v17 + 8 * v16) = v8;
LABEL_21:
    v7 = v34;
LABEL_22:
    v8 = v9;
    v2 = a1;
  }
}
