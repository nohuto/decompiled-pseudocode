/*
 * XREFs of ??_ECAPOServiceProvider@@UEAAPEAXI@Z @ 0x1400674E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOServiceProvider@@UEAA@XZ @ 0x140067404 (--1CAPOServiceProvider@@UEAA@XZ.c)
 */

CAPOServiceProvider *__fastcall CAPOServiceProvider::`vector deleting destructor'(CAPOServiceProvider *this, char a2)
{
  CAPOServiceProvider::~CAPOServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
