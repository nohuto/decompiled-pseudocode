/*
 * XREFs of ??_GCUnknown@@UEAAPEAXI@Z @ 0x1C0017C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CUnknown *__fastcall CUnknown::`scalar deleting destructor'(CUnknown *this, char a2)
{
  this->__vftable = (CUnknown_vtbl *)&CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePool(this);
  return this;
}
