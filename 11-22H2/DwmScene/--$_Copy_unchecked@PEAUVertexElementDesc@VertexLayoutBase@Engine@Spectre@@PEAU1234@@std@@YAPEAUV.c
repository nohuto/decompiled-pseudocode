/*
 * XREFs of ??$_Copy_unchecked@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEAU1234@@std@@YAPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEAU1234@00@Z @ 0x18008BB28
 * Callers:
 *     ??$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18008BA48 (--$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@-$vector@UVertexElement.c)
 * Callees:
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<Spectre::Engine::VertexLayoutBase::VertexElementDesc *,Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3)
{
  _DWORD *v5; // rdi
  int v6; // eax

  if ( a1 != a2 )
  {
    v5 = a1 + 9;
    do
    {
      std::string::operator=((void **)a3, (void **)(v5 - 9));
      *(_DWORD *)(a3 + 32) = *(v5 - 1);
      v6 = *v5;
      v5 += 12;
      *(_DWORD *)(a3 + 36) = v6;
      *(_BYTE *)(a3 + 40) = *((_BYTE *)v5 - 44);
      *(_DWORD *)(a3 + 44) = *(v5 - 10);
      a3 += 48LL;
    }
    while ( v5 - 9 != a2 );
  }
  return a3;
}
