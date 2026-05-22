/*
 * XREFs of ??$As@UIContainerInfoInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013F95C
 * Callers:
 *     ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180157FC8 (--$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA-AV-$ComPtr@UIContainerInf.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IContainerInfoInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v3, &GUID_8ddffe9c_458e_6d51_c227_1374408f672c, a2);
}
