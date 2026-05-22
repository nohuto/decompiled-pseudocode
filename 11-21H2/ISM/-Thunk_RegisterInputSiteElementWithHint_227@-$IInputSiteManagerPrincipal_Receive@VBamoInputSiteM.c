/*
 * XREFs of ?Thunk_RegisterInputSiteElementWithHint_227@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180124A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputSiteManagerPrincipal_Receive<BamoImpl::BamoInputSiteManagerPrincipalImpl>::Thunk_RegisterInputSiteElementWithHint_227(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElementWithHint(
           a1,
           **(_DWORD **)a2,
           *(const struct InputSiteId **)(a2 + 8));
}
