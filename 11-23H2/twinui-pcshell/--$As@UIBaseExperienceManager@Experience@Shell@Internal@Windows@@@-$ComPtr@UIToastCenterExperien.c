/*
 * XREFs of ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180144188
 * Callers:
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x180143C40 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnShellReady@CControlCenterExperienceManager@@AEAAJXZ @ 0x180143E74 (-OnShellReady@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _lambda_464faf368add579c73b162db1e562f2d_::operator() @ 0x1801447F0 (_lambda_464faf368add579c73b162db1e562f2d_--operator().c)
 *     _lambda_2c78e3d2d08e88abfa65ae966e57a982_::operator() @ 0x180144938 (_lambda_2c78e3d2d08e88abfa65ae966e57a982_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
