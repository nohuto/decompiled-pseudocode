/*
 * XREFs of ??_GPersistedEndpointPolicyRule@@UEAAPEAXI@Z @ 0x18013E528
 * Callers:
 *     ??_EPersistedEndpointPolicyRule@@W7EAAPEAXI@Z @ 0x180077650 (--_EPersistedEndpointPolicyRule@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

PersistedEndpointPolicyRule *__fastcall PersistedEndpointPolicyRule::`scalar deleting destructor'(
        PersistedEndpointPolicyRule *this,
        char a2)
{
  *(_QWORD *)this = &PersistedEndpointPolicyRule::`vftable'{for `IPolicyRule'};
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
