/*
 * XREFs of ??_EBamoActivationWatcherPrincipal@@MEAAPEAXI@Z @ 0x1800B6DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x1800B6C44 (--1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoActivationWatcherPrincipal *__fastcall BamoActivationWatcherPrincipal::`vector deleting destructor'(
        BamoActivationWatcherPrincipal *this,
        char a2)
{
  BamoImpl::BamoActivationWatcherPrincipalImpl::~BamoActivationWatcherPrincipalImpl((BamoActivationWatcherPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
