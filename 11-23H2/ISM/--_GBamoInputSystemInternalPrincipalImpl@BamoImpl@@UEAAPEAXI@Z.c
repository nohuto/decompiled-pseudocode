/*
 * XREFs of ??_GBamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18013D110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18013D080 (--1BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSystemInternalPrincipalImpl *__fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSystemInternalPrincipalImpl *this,
        char a2)
{
  BamoImpl::BamoInputSystemInternalPrincipalImpl::~BamoInputSystemInternalPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
