/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180079178
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180079048 (--$_Try_emplace@AEBI$$V@-$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@@Z @ 0x1800792BC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedObject@AnimationLoggingManag.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@2@@Z @ 0x180079310 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUReferencedObject@AnimationLoggingManag.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Insert_node(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rdx

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return v3;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    *v6 = a3;
    if ( v6 == (_QWORD *)*v4 )
      *v4 = a3;
  }
  else
  {
    v6[2] = a3;
    if ( v6 == (_QWORD *)v4[2] )
      v4[2] = a3;
  }
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a3;
  while ( !*(_BYTE *)(v7 + 24) )
  {
    v10 = *(_QWORD *)(v8 + 8);
    v11 = *(__int64 **)(v10 + 8);
    v9 = *v11;
    if ( v10 == *v11 )
    {
      v9 = v11[2];
      if ( !*(_BYTE *)(v9 + 24) )
        goto LABEL_7;
      if ( v8 == *(_QWORD *)(v10 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Lrotate(
          a1,
          *(_QWORD *)(v8 + 8));
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Rrotate(a1);
    }
    else
    {
      if ( !*(_BYTE *)(v9 + 24) )
      {
LABEL_7:
        *(_BYTE *)(v10 + 24) = 1;
        *(_BYTE *)(v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
        v8 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
        goto LABEL_8;
      }
      if ( v8 == *(_QWORD *)v10 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Rrotate(a1);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL));
    }
LABEL_8:
    v7 = *(_QWORD *)(v8 + 8);
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return v3;
}
