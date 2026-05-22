/*
 * XREFs of ??_EBaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x18016AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18016AA64 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::`vector deleting destructor'(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
