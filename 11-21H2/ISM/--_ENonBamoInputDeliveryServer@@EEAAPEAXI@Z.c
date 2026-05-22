/*
 * XREFs of ??_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z @ 0x180154270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x180154114 (--1NonBamoInputDeliveryServer@@EEAA@XZ.c)
 */

NonBamoInputDeliveryServer *__fastcall NonBamoInputDeliveryServer::`vector deleting destructor'(
        NonBamoInputDeliveryServer *this,
        char a2)
{
  NonBamoInputDeliveryServer::~NonBamoInputDeliveryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
