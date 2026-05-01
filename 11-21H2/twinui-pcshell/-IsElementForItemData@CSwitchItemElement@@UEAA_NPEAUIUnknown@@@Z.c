/*
 * XREFs of ?IsElementForItemData@CSwitchItemElement@@UEAA_NPEAUIUnknown@@@Z @ 0x1804ACCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CSwitchItemElement::IsElementForItemData(struct IUnknown **this, struct IUnknown *a2)
{
  return (unsigned int)SHIsSameObject(a2, this[46]) != 0;
}
