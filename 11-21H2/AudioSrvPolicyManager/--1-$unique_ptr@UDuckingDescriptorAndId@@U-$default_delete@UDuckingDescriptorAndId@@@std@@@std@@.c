/*
 * XREFs of ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18002B38C
 * Callers:
 *     _TsSessionCreate_::_1_::dtor$3 @ 0x180046002 (_TsSessionCreate_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$4 @ 0x180046014 (_TsSessionCreate_--_1_--dtor$4.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x180046026 (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$8 @ 0x180046038 (_TsSessionCreate_--_1_--dtor$8.c)
 *     _TsSessionCreate_::_1_::dtor$9 @ 0x18004604A (_TsSessionCreate_--_1_--dtor$9.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x18004605C (_TsSessionCreate_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>(v1 + 32);
    v2 = *(_QWORD *)(v1 + 24);
    if ( v2 >= 8 )
      std::_Deallocate<16,0>(*(char **)v1, 2 * v2 + 2);
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(v1 + 24) = 7LL;
    *(_WORD *)v1 = 0;
    operator delete((void *)v1);
  }
}
