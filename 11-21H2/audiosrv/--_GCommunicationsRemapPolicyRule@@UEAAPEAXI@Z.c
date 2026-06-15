/*
 * XREFs of ??_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z @ 0x180131030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x180130E6C (--1PolicyRule@@UEAA@XZ.c)
 */

CommunicationsRemapPolicyRule *__fastcall CommunicationsRemapPolicyRule::`scalar deleting destructor'(
        CommunicationsRemapPolicyRule *this,
        char a2)
{
  *(_QWORD *)this = &RemapPolicyRule::`vftable';
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
