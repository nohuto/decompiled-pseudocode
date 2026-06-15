/*
 * XREFs of ??1CAcl@ATL@@UEAA@XZ @ 0x1800444E0
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$6 @ 0x18004B63B (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::~CAcl(void **this)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
}
