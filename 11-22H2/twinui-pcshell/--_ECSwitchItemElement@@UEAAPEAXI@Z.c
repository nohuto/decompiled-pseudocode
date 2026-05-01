/*
 * XREFs of ??_ECSwitchItemElement@@UEAAPEAXI@Z @ 0x1805692C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CSwitchItemElement@@UEAA@XZ @ 0x1805690DC (--1CSwitchItemElement@@UEAA@XZ.c)
 */

CSwitchItemElement *__fastcall CSwitchItemElement::`vector deleting destructor'(CSwitchItemElement *this, char a2)
{
  CSwitchItemElement::~CSwitchItemElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
