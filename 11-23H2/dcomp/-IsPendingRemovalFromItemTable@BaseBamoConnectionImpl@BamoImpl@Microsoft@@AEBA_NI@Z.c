/*
 * XREFs of ?IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z @ 0x18016CAE0
 * Callers:
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x18016D390 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18016EEA4 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::IsPendingRemovalFromItemTable(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2)
{
  _DWORD *v2; // rax
  char v3; // r8

  v2 = (_DWORD *)*((_QWORD *)this + 24);
  v3 = 0;
  while ( v2 != *((_DWORD **)this + 25) )
  {
    if ( *v2 == a2 )
      return 1;
    ++v2;
  }
  return v3;
}
