/*
 * XREFs of ??_ECAPOServiceProvider@@UEAAPEAXI@Z @ 0x14006F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOServiceProvider@@UEAA@XZ @ 0x14006EFD4 (--1CAPOServiceProvider@@UEAA@XZ.c)
 */

CAPOServiceProvider *__fastcall CAPOServiceProvider::`vector deleting destructor'(CAPOServiceProvider *this, char a2)
{
  CAPOServiceProvider::~CAPOServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
