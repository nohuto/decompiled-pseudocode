/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180142A60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateComponentWindowId@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1801427B8 (-UpdateComponentWindowId@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 */

void __fastcall BamoImpl::BamoCUIComponentInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoCUIComponentInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v4; // r8

  BamoImpl::BamoCUIComponentInputObjectProxyImpl::UpdateComponentWindowId(this, 0LL, *((_QWORD *)a2 + 4));
  LOBYTE(v4) = *((_BYTE *)a2 + 40);
  BamoImpl::BamoCUIComponentInputObjectProxyImpl::UpdateIsInputDisabled(this, 0LL, v4);
}
