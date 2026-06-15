/*
 * XREFs of ??_GPolicyRule@@UEAAPEAXI@Z @ 0x1801310C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x180130E6C (--1PolicyRule@@UEAA@XZ.c)
 */

PolicyRule *__fastcall PolicyRule::`scalar deleting destructor'(PolicyRule *this, char a2)
{
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
