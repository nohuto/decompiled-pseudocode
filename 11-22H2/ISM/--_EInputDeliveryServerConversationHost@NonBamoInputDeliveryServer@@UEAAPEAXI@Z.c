/*
 * XREFs of ??_EInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAPEAXI@Z @ 0x1801816F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

NonBamoInputDeliveryServer::InputDeliveryServerConversationHost *__fastcall NonBamoInputDeliveryServer::InputDeliveryServerConversationHost::`vector deleting destructor'(
        NonBamoInputDeliveryServer::InputDeliveryServerConversationHost *this,
        char a2)
{
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
