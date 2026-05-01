/*
 * XREFs of ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A6B84
 * Callers:
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x1800A05C0 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnShellReady@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800A68D4 (-OnShellReady@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _lambda_5ab8ce89e2cf3b8eaaa3949bb6aa8195_::operator() @ 0x1801965A8 (_lambda_5ab8ce89e2cf3b8eaaa3949bb6aa8195_--operator().c)
 *     _lambda_bc1ea76c9a22cd8feb059e07d72d9c7e_::operator() @ 0x180196A58 (_lambda_bc1ea76c9a22cd8feb059e07d72d9c7e_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return v4(v3, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861, a2);
}
