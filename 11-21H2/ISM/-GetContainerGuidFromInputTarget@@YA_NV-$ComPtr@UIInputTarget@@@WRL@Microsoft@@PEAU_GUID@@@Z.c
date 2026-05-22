/*
 * XREFs of ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801B259C
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B2720 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180137FD8 (--$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA-AV-$ComPtr@UIContainerInf.c)
 *     ??$As@UIInputSiteTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801389F8 (--$As@UIInputSiteTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall GetContainerGuidFromInputTarget(__int64 *a1, GUID *a2)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+58h] [rbp+30h] BYREF
  __int64 v9; // [rsp+60h] [rbp+38h] BYREF
  __int64 v10; // [rsp+68h] [rbp+40h] BYREF

  v4 = 0;
  if ( !a2 )
    goto LABEL_12;
  *a2 = GUID_NULL;
  v9 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
              &v9) < 0 )
  {
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
    goto LABEL_12;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v8);
  v5 = v8;
  if ( !v8 )
  {
LABEL_9:
    if ( v5 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    goto LABEL_11;
  }
  InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(v8, &v10);
  if ( !v10 )
  {
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v10);
    v5 = v8;
    goto LABEL_9;
  }
  *a2 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v10);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
  v4 = 1;
LABEL_12:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1);
  return v4;
}
