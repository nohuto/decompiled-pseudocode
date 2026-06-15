/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002B218
 * Callers:
 *     __dynamic_initializer_for__TsSessionList___::_1_::dtor$1 @ 0x180045E84 (__dynamic_initializer_for__TsSessionList___--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__TsSessionList__ @ 0x180046BD0 (_dynamic_atexit_destructor_for__TsSessionList__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>::~list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>(
        char **a1)
{
  char *v1; // rdx
  char *v3; // rbx
  void *v4; // rdi
  char *v5; // rbp

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(char **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = (void *)*((_QWORD *)v3 + 3);
      v5 = *(char **)v3;
      if ( v4 )
      {
        TSSession::~TSSession(*((TSSession **)v3 + 3));
        operator delete(v4);
      }
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
