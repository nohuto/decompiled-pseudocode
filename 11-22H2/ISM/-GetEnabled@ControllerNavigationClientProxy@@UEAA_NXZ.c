/*
 * XREFs of ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x1801A0E00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEnabled@BamoControllerNavigationClientProxy@@UEAA_NXZ @ 0x1801A0DBC (-GetEnabled@BamoControllerNavigationClientProxy@@UEAA_NXZ.c)
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
