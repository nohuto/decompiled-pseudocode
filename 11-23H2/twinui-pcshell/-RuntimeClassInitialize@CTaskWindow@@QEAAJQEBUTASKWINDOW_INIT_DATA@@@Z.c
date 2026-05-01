/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1803C81E8
 * Callers:
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1803C7AE0 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180048274 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800482C4 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x180048314 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x1800485E4 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::RuntimeClassInitialize(CTaskWindow *this, const struct TASKWINDOW_INIT_DATA *const a2)
{
  __int64 result; // rax
  bool v5; // zf
  char *v6; // rdi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 5) = *(_QWORD *)a2;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 25);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)this + 7,
    *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=((__int64 *)this + 17, *((_QWORD *)a2 + 11));
  if ( !CTaskWindow::s_ValidateCreationZbidAndConvert(*((_DWORD *)a2 + 5), &v7) )
    return 2147947423LL;
  v5 = (*((_BYTE *)this + 68) & 8) == 0;
  v6 = (char *)this + 8;
  *((_DWORD *)this + 13) = v7;
  if ( !v5
    || (result = (*(__int64 (__fastcall **)(char *, char *, char *))(*(_QWORD *)v6 + 64LL))(
                   (char *)this + 8,
                   (char *)a2 + 24,
                   (char *)a2 + 40),
        (int)result >= 0) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 152LL))((char *)this + 8);
    return CTaskWindow::_RegisterForViewReadinessChanges(this);
  }
  return result;
}
