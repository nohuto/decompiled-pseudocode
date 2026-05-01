/*
 * XREFs of ?PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z @ 0x1801063DC
 * Callers:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ImmersiveMonitorHelper::PublishVisibilityToMonitorManager(
        ImmersiveMonitorHelper *this,
        unsigned __int8 a2)
{
  unsigned int v2; // esi
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v5 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
  v4 = **v3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  if ( v4(v3, &GUID_ad23ddfb_50f1_4f9f_ba1f_dda292ae0b6a, &v5) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
}
