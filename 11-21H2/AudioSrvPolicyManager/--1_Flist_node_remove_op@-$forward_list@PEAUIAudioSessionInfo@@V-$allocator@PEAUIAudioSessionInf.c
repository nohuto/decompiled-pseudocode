/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x18000F684
 * Callers:
 *     _std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5____::_1_::dtor$0 @ 0x180044C25 (_std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op(__int64 a1)
{
  char *v1; // rcx
  char *v2; // rbx

  v1 = *(char **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = *(char **)v1;
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
