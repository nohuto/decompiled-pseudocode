/*
 * XREFs of ??1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18009E568
 * Callers:
 *     ??_EShellHandwritingHostServer@@UEAAPEAXI@Z @ 0x180059460 (--_EShellHandwritingHostServer@@UEAAPEAXI@Z.c)
 *     ??_GBamoShellHandwritingHostServerPrincipal@@MEAAPEAXI@Z @ 0x180062A40 (--_GBamoShellHandwritingHostServerPrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180062A90 (--_EBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::~BamoPrincipalImpl(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx

  v4 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 2);
  if ( v4 )
    Microsoft::BamoImpl::BamoImplObject::Release(v4, a2, a3, a4);
}
