/*
 * XREFs of ??_GBamoShellHandwritingHostServerPrincipal@@MEAAPEAXI@Z @ 0x180062A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18009E568 (--1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoShellHandwritingHostServerPrincipal *__fastcall BamoShellHandwritingHostServerPrincipal::`scalar deleting destructor'(
        BamoShellHandwritingHostServerPrincipal *this,
        char a2)
{
  Microsoft::BamoImpl::BamoPrincipalImpl::~BamoPrincipalImpl((BamoShellHandwritingHostServerPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
