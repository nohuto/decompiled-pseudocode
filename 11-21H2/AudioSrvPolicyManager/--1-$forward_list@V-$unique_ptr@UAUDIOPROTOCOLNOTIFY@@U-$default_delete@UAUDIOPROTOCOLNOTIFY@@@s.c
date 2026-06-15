/*
 * XREFs of ??1?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002B124
 * Callers:
 *     _TSSession::TSSession_::_1_::dtor$0 @ 0x180045E16 (_TSSession--TSSession_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>::~forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>(
        char **a1)
{
  char *v1; // rbx
  void *v2; // rcx
  char *v3; // rdi

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (void *)*((_QWORD *)v1 + 1);
      v3 = *(char **)v1;
      if ( v2 )
        operator delete(v2);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v3;
    }
    while ( v3 );
  }
}
