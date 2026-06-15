/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x1800202D4
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800224D0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180022BA8 (-UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$8 @ 0x180048DB4 (_CDuckingManager--OnStateChanged_--_1_--dtor$8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
