/*
 * XREFs of ??_ECompObjectDiagnosticsRootPrincipal@@UEAAPEAXI@Z @ 0x18019E910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016DDE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

CompObjectDiagnosticsRootPrincipal *__fastcall CompObjectDiagnosticsRootPrincipal::`vector deleting destructor'(
        CompObjectDiagnosticsRootPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v5 = a2;
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
