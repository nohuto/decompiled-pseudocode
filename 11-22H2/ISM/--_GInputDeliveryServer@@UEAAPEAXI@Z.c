/*
 * XREFs of ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x180180FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x180180F48 (--1InputDeliveryServer@@UEAA@XZ.c)
 */

InputDeliveryServer *__fastcall InputDeliveryServer::`scalar deleting destructor'(InputDeliveryServer *this, char a2)
{
  InputDeliveryServer::~InputDeliveryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
