/*
 * XREFs of ??_EBamoInputSystemInternalPrincipal@@MEAAPEAXI@Z @ 0x18014AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18014AFB0 (--1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSystemInternalPrincipal *__fastcall BamoInputSystemInternalPrincipal::`vector deleting destructor'(
        BamoInputSystemInternalPrincipal *this,
        char a2)
{
  BamoImpl::BamoInputSystemInternalPrincipalImpl::~BamoInputSystemInternalPrincipalImpl((BamoInputSystemInternalPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
