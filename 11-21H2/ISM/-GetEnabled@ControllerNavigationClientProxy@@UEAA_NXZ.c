/*
 * XREFs of ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x180173D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEnabled@BamoControllerNavigationClientProxy@@UEAA_NXZ @ 0x180173D4C (-GetEnabled@BamoControllerNavigationClientProxy@@UEAA_NXZ.c)
 */

char __fastcall ControllerNavigationClientProxy::GetEnabled(ControllerNavigationClientProxy *this)
{
  bool Enabled; // al
  char v3; // dl

  Enabled = BamoControllerNavigationClientProxy::GetEnabled(this);
  v3 = 0;
  if ( Enabled )
    return *((_BYTE *)this + 80) == 0;
  return v3;
}
