/*
 * XREFs of ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x180192FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEnabled@BamoControllerNavigationClientProxy@@UEAA_NXZ @ 0x180192F5C (-GetEnabled@BamoControllerNavigationClientProxy@@UEAA_NXZ.c)
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
