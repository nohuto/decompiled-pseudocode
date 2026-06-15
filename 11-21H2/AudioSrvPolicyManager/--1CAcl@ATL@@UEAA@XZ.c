/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x18003DDD0
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$6 @ 0x180046A46 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
