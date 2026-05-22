/*
 * XREFs of ??$As@UIInputSiteTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180158988
 * Callers:
 *     ?InputTargetsSameByInputSite@CursorProcessor@@CA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z @ 0x180159124 (-InputTargetsSameByInputSite@CursorProcessor@@CA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z.c)
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x180170A94 (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801D0ABC (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v3, &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea, a2);
}
