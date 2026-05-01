/*
 * XREFs of ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0325_0005@@@Z @ 0x1801B4348
 * Callers:
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800C4A50 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ShellPositionerTelemetry::DoesAppHaveQuirk(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        unsigned int a2)
{
  bool v4; // si
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  v9 = 0LL;
  v5 = **a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( v5(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v10) >= 0 )
  {
    v6 = v10;
    v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    if ( v7(v6, &v9) >= 0 )
      v4 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 328LL))(v9, a2) != 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v4;
}
