/*
 * XREFs of ?PopulateReferenceListForDebugProperties@KeyFrameAnimation@Composition@UI@Windows@@MEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x180080270
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x1800468E0 (-PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA.c)
 */

void **__fastcall Windows::UI::Composition::KeyFrameAnimation::PopulateReferenceListForDebugProperties(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 i; // rbx
  void **result; // rax

  if ( (*(_BYTE *)(a1 + 480) & 1) != 0 )
  {
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_DWORD *)(i + 24) == 2 )
        result = Windows::UI::Composition::ExpressionAnimationBuilder::PopulateReferenceListForDebugProperties(
                   *(_QWORD *)(i + 32) + 360LL,
                   a2);
    }
  }
  return result;
}
