/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ @ 0x180052820
 * Callers:
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z @ 0x18005270C (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void________std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ @ 0x1800F4F70 (std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair__anonymous_namespace__ea_1800F4F70.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Insert_node @ 0x1800F5BA0 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800F5BA0.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180185E18 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rsi
  __int64 *v4; // r10
  __int64 *v6; // rdx
  __int64 *v7; // r9
  unsigned __int64 v8; // r11
  __int64 v10; // rax
  __int64 v11; // rdi
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 *v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v15 = 0;
  v3 = a1 + 8;
  v4 = *(__int64 **)(a1 + 8);
  v6 = v4;
  v7 = (__int64 *)v4[1];
  v14 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v14 = v7;
      if ( v7[4] >= v8 || *((_DWORD *)v7 + 10) >= *((_DWORD *)a3 + 2) )
      {
        v6 = v7;
        v15 = 1;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v15 = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || *a3 < v6[4] && *((_DWORD *)a3 + 2) < *((_DWORD *)v6 + 10) )
  {
    if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v10 = std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void________std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____(
            v12,
            v3,
            v4,
            a3);
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 56LL);
    *(_QWORD *)a2 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Insert_node(
                      v3,
                      &v14,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
