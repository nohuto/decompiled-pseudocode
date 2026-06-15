/*
 * XREFs of ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@PEAUIAudioSessionInfo@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18000F558
 * Callers:
 *     _std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::_Copy_assign_::_1_::dtor$0 @ 0x180045079 (_std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--_Copy_assign_--_1_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<IAudioSessionInfo *,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rax
  char *v2; // rbx
  char *v3; // rcx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    *v1 = 0LL;
    v2 = *(char **)(a1 + 16);
    while ( v2 )
    {
      v3 = v2;
      v2 = *(char **)v2;
      std::_Deallocate<16,0>(v3, 0x10uLL);
    }
  }
}
