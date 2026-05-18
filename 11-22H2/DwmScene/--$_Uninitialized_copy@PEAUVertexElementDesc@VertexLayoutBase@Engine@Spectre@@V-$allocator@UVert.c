/*
 * XREFs of ??$_Uninitialized_copy@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x180086298
 * Callers:
 *     ??0?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180086594 (--0-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 *     ??$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18008BA48 (--$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@-$vector@UVertexElement.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x18007C980 (--$_Destroy_range@V-$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@Y.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Uninitialized_copy<Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 36;
    do
    {
      std::string::string((_QWORD *)a3, v5 - 36);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(a3 + 36) = *(_DWORD *)v5;
      *(_BYTE *)(a3 + 40) = *(_BYTE *)(v5 + 4);
      *(_DWORD *)(a3 + 44) = *(_DWORD *)(v5 + 8);
      a3 += 48LL;
      v5 += 48LL;
    }
    while ( v5 - 36 != a2 );
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(a3, a3);
  return a3;
}
