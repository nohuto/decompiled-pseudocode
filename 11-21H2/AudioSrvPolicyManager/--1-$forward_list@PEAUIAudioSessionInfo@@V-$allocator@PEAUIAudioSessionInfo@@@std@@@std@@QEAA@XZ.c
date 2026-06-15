/*
 * XREFs of ??1?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x1800089F0
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$2 @ 0x1800449F8 (_CDuckingManager--CDuckingManager_--_1_--dtor$2.c)
 *     _CDuckingManager::ForEachDuckableSession_::_1_::dtor$0 @ 0x180044DAD (_CDuckingManager--ForEachDuckableSession_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

char *__fastcall std::forward_list<IAudioSessionInfo *>::~forward_list<IAudioSessionInfo *>(char **a1)
{
  char *result; // rax
  char *v2; // rbx

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    do
    {
      v2 = *(char **)result;
      std::_Deallocate<16,0>(result, 0x10uLL);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
