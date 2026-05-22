/*
 * XREFs of ??_EBamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18008D750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18008D5C0 (--1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoActivationWatcherPrincipalImpl *__fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoActivationWatcherPrincipalImpl::~BamoActivationWatcherPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
