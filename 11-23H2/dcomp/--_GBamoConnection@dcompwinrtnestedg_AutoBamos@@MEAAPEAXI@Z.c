/*
 * XREFs of ??_GBamoConnection@dcompwinrtnestedg_AutoBamos@@MEAAPEAXI@Z @ 0x18016AE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18016AA64 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

dcompwinrtnestedg_AutoBamos::BamoConnection *__fastcall dcompwinrtnestedg_AutoBamos::BamoConnection::`scalar deleting destructor'(
        dcompwinrtnestedg_AutoBamos::BamoConnection *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((dcompwinrtnestedg_AutoBamos::BamoConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
