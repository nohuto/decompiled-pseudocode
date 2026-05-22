/*
 * XREFs of ??_GActivatableEntityBamoPrincipal@@UEAAPEAXI@Z @ 0x1800A5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

ActivatableEntityBamoPrincipal *__fastcall ActivatableEntityBamoPrincipal::`scalar deleting destructor'(
        ActivatableEntityBamoPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v4 = a2;
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
