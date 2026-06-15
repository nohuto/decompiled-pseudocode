/*
 * XREFs of ??_E?$_Ref_count_obj2@UPool@CEndpointResourcePool@Sarm@@@std@@UEAAPEAXI@Z @ 0x18012A700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
