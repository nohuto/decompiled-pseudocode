/*
 * XREFs of sub_1802738D9 @ 0x1802738D9
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1802738D9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rcx
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), __int64, __int64); // rbx

  v12 = *(_QWORD *)(a11 + 104);
  if ( !v12 )
  {
    v13 = *(_QWORD *)(a12 + 88);
    v14 = *(int (__fastcall **)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), __int64, __int64))(*(_QWORD *)v13 + 144LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a11 + 104));
    if ( v14(v13, KeyboardHosting::TabTipAdapter::TimerRetryInitializingRemoteTabTipAdapter, a12, a11 + 104) < 0 )
      JUMPOUT(0x180273885LL);
    v12 = *(_QWORD *)(a12 + 104);
  }
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) >= 0
    && (*(int (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a12 + 104) + 80LL))(
         *(_QWORD *)(a12 + 104),
         500000LL,
         0LL) >= 0 )
  {
    JUMPOUT(0x1800BF3E6LL);
  }
  JUMPOUT(0x18027388ALL);
}
