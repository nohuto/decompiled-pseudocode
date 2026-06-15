/*
 * XREFs of ??_ECEndpointStore@@UEAAPEAXI@Z @ 0x18010F210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x18010F090 (--1CEndpointStore@@UEAA@XZ.c)
 */

CEndpointStore *__fastcall CEndpointStore::`vector deleting destructor'(CEndpointStore *this, char a2)
{
  CEndpointStore::~CEndpointStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
