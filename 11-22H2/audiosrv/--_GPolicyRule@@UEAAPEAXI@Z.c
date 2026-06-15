/*
 * XREFs of ??_GPolicyRule@@UEAAPEAXI@Z @ 0x18013E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x18013E370 (--1PolicyRule@@UEAA@XZ.c)
 */

PolicyRule *__fastcall PolicyRule::`scalar deleting destructor'(PolicyRule *this, char a2)
{
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
