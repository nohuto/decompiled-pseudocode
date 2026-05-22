/*
 * XREFs of ??_EBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180062A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18009E568 (--1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::BamoShellHandwritingHostServerPrincipalImpl *__fastcall BamoImpl::BamoShellHandwritingHostServerPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoShellHandwritingHostServerPrincipalImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BamoPrincipalImpl::~BamoPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
