/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E1544
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1800E1870 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??$?RVCAudioSessionInstanceId@@V0@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_NAEBVCAudioSessionInstanceId@@0@Z @ 0x18003CC80 (--$-RVCAudioSessionInstanceId@@V0@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSes.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1800426C8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x1800E6488 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // r15
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 *v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  _DWORD *v11; // rsi
  int v12; // r14d
  unsigned int v13; // r14d
  ATL::CStringData *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // r13
  __int64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _DWORD *v31; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v32; // [rsp+70h] [rbp+18h]

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = v2[1];
  v7 = v2 + 3;
  v32 = v2 + 3;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)(v2 + 3),
    2 * v5,
    v6);
  LOBYTE(v8) = v5 - 1;
  v2[6] = v5 - 1;
  v2[7] = v5;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v6 )
  {
    v10 = (_QWORD *)*v10;
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v31, (__int64)&ATL::g_strmgr);
    if ( (int)CAudioSessionInstanceId::ToString((__int64)(v9 + 2), (void **)&v31) < 0 )
    {
      v14 = (ATL::CStringData *)(v31 - 6);
      v13 = 0;
    }
    else
    {
      v11 = v31;
      v12 = *(v31 - 4);
      if ( ((1 - *(v31 - 2)) | (*(v31 - 3) - v12)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v31, v12);
        v11 = v31;
      }
      _o__wcsupr_s(v11, v12 + 1);
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v31, v12);
      v13 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v11);
      v14 = (ATL::CStringData *)(v11 - 6);
    }
    ATL::CStringData::Release(v14);
    LOBYTE(v8) = v13;
    v16 = 2 * (v13 & v2[6]);
    v17 = *v7;
    if ( *(_QWORD *)(*v7 + 8 * v16) == v6 )
    {
      *(_QWORD *)(v17 + 8 * v16) = v9;
LABEL_12:
      *(_QWORD *)(v17 + 8 * v16 + 8) = v9;
      goto LABEL_22;
    }
    v18 = *(_QWORD **)(v17 + 8 * v16 + 8);
    LOBYTE(v8) = std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
                   v15,
                   (__int64)(v9 + 2),
                   (__int64)(v18 + 2));
    if ( !(_BYTE)v8 )
    {
      v20 = (_QWORD *)*v18;
      if ( (_QWORD *)*v18 != v9 )
      {
        v21 = (_QWORD *)v9[1];
        *v21 = v10;
        v22 = (_QWORD *)v10[1];
        *v22 = v20;
        v8 = (_QWORD *)v20[1];
        *v8 = v9;
        v20[1] = v22;
        v10[1] = v21;
        v9[1] = v8;
      }
      goto LABEL_12;
    }
    v23 = v18;
    while ( *(_QWORD **)(v17 + 8 * v16) != v23 )
    {
      v18 = (_QWORD *)v18[1];
      v23 = v18;
      if ( !std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
              v19,
              (__int64)(v9 + 2),
              (__int64)(v18 + 2)) )
      {
        v24 = *v18;
        v25 = (_QWORD *)v9[1];
        *v25 = v10;
        v26 = (_QWORD *)v10[1];
        *v26 = v24;
        v8 = *(_QWORD **)(v24 + 8);
        *v8 = v9;
        *(_QWORD *)(v24 + 8) = v26;
        v10[1] = v25;
        v9[1] = v8;
        goto LABEL_21;
      }
    }
    v27 = (_QWORD *)v9[1];
    *v27 = v10;
    v28 = (_QWORD *)v10[1];
    *v28 = v23;
    v8 = (_QWORD *)v23[1];
    *v8 = v9;
    v23[1] = v28;
    v10[1] = v27;
    v9[1] = v8;
    *(_QWORD *)(v17 + 8 * v16) = v9;
LABEL_21:
    v7 = v32;
LABEL_22:
    v9 = v10;
    v2 = a1;
  }
  return (char)v8;
}
