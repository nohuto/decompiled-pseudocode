/*
 * XREFs of ??_GBamoConnection@ISMBamos_AutoBamos@@MEAAPEAXI@Z @ 0x1800593C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1800AE578 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

ISMBamos_AutoBamos::BamoConnection *__fastcall ISMBamos_AutoBamos::BamoConnection::`scalar deleting destructor'(
        ISMBamos_AutoBamos::BamoConnection *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((ISMBamos_AutoBamos::BamoConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
