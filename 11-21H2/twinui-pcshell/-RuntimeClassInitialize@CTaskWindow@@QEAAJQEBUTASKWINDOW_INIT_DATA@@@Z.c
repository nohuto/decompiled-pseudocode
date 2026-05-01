/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18003A97C
 * Callers:
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18003A8A4 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006A230 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x18006A280 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x18006A2F4 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x18006B9F8 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::RuntimeClassInitialize(CTaskWindow *this, const struct TASKWINDOW_INIT_DATA *const a2)
{
  bool v4; // zf
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 5) = *(_QWORD *)a2;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 25);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (char *)this + 56,
    *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=((char *)this + 136, *((_QWORD *)a2 + 11));
  if ( !(unsigned __int8)CTaskWindow::s_ValidateCreationZbidAndConvert(*((unsigned int *)a2 + 5), &v6) )
    return 2147947423LL;
  v4 = (*((_BYTE *)this + 68) & 8) == 0;
  *((_DWORD *)this + 13) = v6;
  if ( !v4
    || (result = (*(__int64 (__fastcall **)(char *, char *, char *))(*((_QWORD *)this + 1) + 64LL))(
                   (char *)this + 8,
                   (char *)a2 + 24,
                   (char *)a2 + 40),
        (int)result >= 0) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 152LL))((char *)this + 8);
    return CTaskWindow::_RegisterForViewReadinessChanges(this);
  }
  return result;
}
