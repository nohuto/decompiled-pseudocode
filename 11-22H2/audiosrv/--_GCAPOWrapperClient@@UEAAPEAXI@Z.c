/*
 * XREFs of ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x180029EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x18002AF58 (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

CAPOWrapperClient *__fastcall CAPOWrapperClient::`scalar deleting destructor'(CAPOWrapperClient *this, char a2)
{
  CAPOWrapperClient::~CAPOWrapperClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
