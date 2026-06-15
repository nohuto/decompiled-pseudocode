/*
 * XREFs of ?_Copy_assign@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x1800129D4
 * Callers:
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18001099C (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::forward_list<IAudioSessionInfo *>::_Copy_assign(char *a1, _QWORD *a2)
{
  _QWORD *i; // rbx
  char **v3; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rdx
  char *v6; // rdi
  _QWORD *j; // r14
  HANDLE v8; // rax
  char *v9; // rcx
  char *v10; // rbx

  for ( i = (_QWORD *)*a2; ; i = (_QWORD *)*i )
  {
    v3 = (char **)a1;
    a1 = *(char **)a1;
    if ( !i )
      break;
    if ( !a1 )
    {
      ProcessHeap = GetProcessHeap();
      v5 = (char *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
      *((_QWORD *)v5 + 1) = i[1];
      v6 = v5;
      for ( j = v5; ; j = v5 )
      {
        i = (_QWORD *)*i;
        if ( !i )
          break;
        v8 = GetProcessHeap();
        v5 = (char *)HeapAlloc(v8, 0, 0x10uLL);
        *((_QWORD *)v5 + 1) = i[1];
        *j = v5;
      }
      if ( v5 )
      {
        *(_QWORD *)v5 = *v3;
        *v3 = v6;
        j = 0LL;
      }
      if ( j )
      {
        *j = 0LL;
        while ( v6 )
        {
          v9 = v6;
          v6 = *(char **)v6;
          std::_Deallocate<16,0>(v9, 0x10uLL);
        }
      }
      return;
    }
    *((_QWORD *)a1 + 1) = i[1];
  }
  *v3 = 0LL;
  if ( a1 )
  {
    do
    {
      v10 = *(char **)a1;
      std::_Deallocate<16,0>(a1, 0x10uLL);
      a1 = v10;
    }
    while ( v10 );
  }
}
