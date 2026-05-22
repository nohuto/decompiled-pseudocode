/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@@std@@@?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@@1@PEAU01@@Z @ 0x180157938
 * Callers:
 *     ??1?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@QEAA@XZ @ 0x180157970 (--1-$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U-$hash@PEBVCompositionBrush@Com.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<Windows::UI::Composition::CompositionBrush const *,void *>::_Free_non_head<std::allocator<std::_List_node<Windows::UI::Composition::CompositionBrush const *,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x18uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
