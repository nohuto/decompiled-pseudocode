/*
 * XREFs of ??1?$forward_list@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V?$allocator@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002B178
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

void __fastcall std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::~forward_list<std::unique_ptr<DuckingDescriptorAndId>>(
        char **a1)
{
  char *v1; // rdi
  __int64 v2; // rbx
  char *v3; // rsi
  unsigned __int64 v4; // rdx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = *((_QWORD *)v1 + 1);
      v3 = *(char **)v1;
      if ( v2 )
      {
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>(v2 + 32);
        v4 = *(_QWORD *)(v2 + 24);
        if ( v4 >= 8 )
          std::_Deallocate<16,0>(*(char **)v2, 2 * v4 + 2);
        *(_QWORD *)(v2 + 16) = 0LL;
        *(_QWORD *)(v2 + 24) = 7LL;
        *(_WORD *)v2 = 0;
        operator delete((void *)v2);
      }
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v3;
    }
    while ( v3 );
  }
}
