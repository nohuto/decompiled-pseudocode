/*
 * XREFs of ??1?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x18001BD98
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$2 @ 0x1800488D1 (_CDuckingManager--CDuckingManager_--_1_--dtor$2.c)
 *     _CDuckingManager::ForEachDuckableSession_::_1_::dtor$0 @ 0x180048BF3 (_CDuckingManager--ForEachDuckableSession_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::forward_list<IAudioSessionInfo *>::~forward_list<IAudioSessionInfo *>(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    do
    {
      v2 = (_QWORD *)*result;
      std::_Deallocate<16,0>(result, 0x10uLL);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
