/*
 * XREFs of ??_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z @ 0x180130FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x180130E6C (--1PolicyRule@@UEAA@XZ.c)
 */

AvoidEndpointPolicyRule *__fastcall AvoidEndpointPolicyRule::`vector deleting destructor'(
        AvoidEndpointPolicyRule *this,
        char a2)
{
  *(_QWORD *)this = &AvoidEndpointPolicyRule::`vftable';
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
