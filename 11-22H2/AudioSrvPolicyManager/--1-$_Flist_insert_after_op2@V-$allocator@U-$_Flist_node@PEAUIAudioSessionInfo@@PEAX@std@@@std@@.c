/*
 * XREFs of ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800202FC
 * Callers:
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18001F8C4 (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@PEA.c)
 *     _std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::_Assign_unchecked_std::_Flist_unchecked_const_iterator_std::_Flist_val_std::_Flist_simple_types_IAudioSessionInfo______std::_Iterator_base0__std::_Default_sentinel__::_1_::dtor$0 @ 0x180049E59 (_std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--_Assign_unchecked_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F520 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  void *v3; // rcx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    *v1 = 0LL;
    v2 = *(_QWORD **)(a1 + 16);
    while ( v2 )
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v3, 0x10uLL);
    }
  }
}
