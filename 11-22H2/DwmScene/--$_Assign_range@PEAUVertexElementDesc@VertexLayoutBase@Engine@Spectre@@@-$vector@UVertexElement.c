/*
 * XREFs of ??$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18008BA48
 * Callers:
 *     ?AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18008BF08 (-AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceVertexLayout@En.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x18007C980 (--$_Destroy_range@V-$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@Y.c)
 *     ??$_Uninitialized_copy@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x180086298 (--$_Uninitialized_copy@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVert.c)
 *     ??$_Copy_unchecked@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEAU1234@@std@@YAPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEAU1234@00@Z @ 0x18008BB28 (--$_Copy_unchecked@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEAU1234@@std@@YAPEAUV.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C420 (-_Clear_and_reserve_geometric@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$al.c)
 */

void __fastcall std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Assign_range<Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx

  v6 = a3 - a2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 4);
  v8 = 0xAAAAAAAAAAAAAAABuLL * (v6 >> 4);
  if ( v8 <= v7 )
  {
    v10 = *a1 + 48 * v8;
    std::_Copy_unchecked<Spectre::Engine::VertexLayoutBase::VertexElementDesc *,Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(
      a2,
      a3,
      *a1);
    std::_Destroy_range<std::allocator<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(v10, a1[1]);
  }
  else
  {
    if ( v8 > 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) )
    {
      std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Clear_and_reserve_geometric(a1, v8);
      v7 = 0LL;
    }
    v9 = a2 + 48 * v7;
    std::_Copy_unchecked<Spectre::Engine::VertexLayoutBase::VertexElementDesc *,Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(
      a2,
      v9,
      *a1);
    v10 = std::_Uninitialized_copy<Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(v9, a3, a1[1]);
  }
  a1[1] = v10;
}
