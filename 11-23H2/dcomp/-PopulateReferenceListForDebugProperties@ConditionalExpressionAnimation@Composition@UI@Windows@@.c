/*
 * XREFs of ?PopulateReferenceListForDebugProperties@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x180161E10
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x1800468E0 (-PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::ConditionalExpressionAnimation::PopulateReferenceListForDebugProperties(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 **i; // rbx
  __int64 result; // rax

  for ( i = *(__int64 ***)(a1 + 344); i; i = (__int64 **)*i )
  {
    Windows::UI::Composition::ExpressionAnimationBuilder::PopulateReferenceListForDebugProperties(
      (__int64)(i[2] + 45),
      a2);
    result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(*i[3] + 288))(i[3], a2);
  }
  return result;
}
