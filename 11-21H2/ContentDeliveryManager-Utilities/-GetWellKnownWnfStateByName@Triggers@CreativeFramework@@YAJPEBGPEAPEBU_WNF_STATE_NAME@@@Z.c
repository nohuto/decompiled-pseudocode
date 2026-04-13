/*
 * XREFs of ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800B30E0
 * Callers:
 *     ?PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z @ 0x18003C190 (-PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z.c)
 *     ?GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180083750 (-GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A5A0C (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x1800B26C4 (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x1800B2A20 (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x1800B2EF4 (--1-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x1800B2F88 (-CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA-AV-$map@PEBGPEBU_WNF_STATE_NAME@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::GetWellKnownWnfStateByName(
        LPCWCH lpString1,
        unsigned __int16 *a2,
        const struct _WNF_STATE_NAME **a3)
{
  unsigned int v5; // esi
  LPCWCH *v6; // rax
  WCHAR *v7; // rbx
  LPCWCH *v8; // rdi
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v14[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  CreativeFramework::Triggers::CreateSupportedWnfNameStateMap((__int64 *)v14);
  v6 = (LPCWCH *)v14[0];
  v7 = (WCHAR *)*((_QWORD *)v14[0] + 1);
  v8 = (LPCWCH *)v14[0];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_8;
  do
  {
    if ( CompareStringOrdinal(*((LPCWCH *)v7 + 4), -1, lpString1, -1, 1) == 1 )
    {
      v7 = (WCHAR *)*((_QWORD *)v7 + 2);
    }
    else
    {
      v8 = (LPCWCH *)v7;
      v7 = *(WCHAR **)v7;
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  v6 = (LPCWCH *)v14[0];
  if ( v8 == v14[0] || (v9 = CompareStringOrdinal(lpString1, -1, v8[4], -1, 1) == 1, v6 = (LPCWCH *)v14[0], v9) )
LABEL_8:
    v8 = v6;
  if ( v8 == v6 )
  {
    v5 = -2147024809;
  }
  else
  {
    v10 = (__int64)v6[1];
    v11 = (__int64)v6;
    if ( !*(_BYTE *)(v10 + 25) )
    {
      do
      {
        if ( CompareStringOrdinal(*(LPCWCH *)(v10 + 32), -1, lpString1, -1, 1) == 1 )
        {
          v10 = *(_QWORD *)(v10 + 16);
        }
        else
        {
          v11 = v10;
          v10 = *(_QWORD *)v10;
        }
      }
      while ( !*(_BYTE *)(v10 + 25) );
      v6 = (LPCWCH *)v14[0];
    }
    if ( (LPCWCH *)v11 == v6 || CompareStringOrdinal(lpString1, -1, *(LPCWCH *)(v11 + 32), -1, 1) == 1 )
    {
      v15[0] = lpString1;
      v15[1] = 0LL;
      v12 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
              (__int64)v14,
              v15);
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        v14,
        &v16,
        v11,
        (LPCWCH *)(v12 + 32),
        (_QWORD *)v12);
      v11 = v16;
    }
    *(_QWORD *)a2 = *(_QWORD *)(v11 + 40);
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::~_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v14);
  return v5;
}
