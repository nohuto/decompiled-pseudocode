/*
 * XREFs of ?TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z @ 0x18017D710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x18054D054 (-TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopTabletModePolicy::TabletModeChanged(__int64 a1, int a2, struct IAppLayout *a3)
{
  int v6; // ebx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD); // rbx
  _QWORD *v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v20; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72), &v20);
  if ( a2 == *(_DWORD *)(a1 + 96) )
    goto LABEL_2;
  *(_DWORD *)(a1 + 96) = a2;
  if ( a2 == 1 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 312LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 80));
    v10 = v9(v8, 0LL, a1 + 80);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 47LL;
LABEL_13:
      v15 = (unsigned int)v10;
      goto LABEL_14;
    }
    v12 = *(_QWORD *)(a1 + 56);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 336LL);
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 104LL))(
                      *(_QWORD *)(a1 + 48),
                      &v19);
    v6 = v13(v12, 0LL, *v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    if ( v6 < 0 )
    {
      v15 = (unsigned int)v6;
      v11 = 48LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
        (const char *)v15);
      goto LABEL_3;
    }
    v16 = *(_QWORD *)(a1 + 56);
    v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 368LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 88));
    v10 = v17(v16, a1 + 88);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 49LL;
      goto LABEL_13;
    }
  }
  else
  {
    v10 = VirtualDesktopTabletModePolicy::TransitionToDesktopMode((VirtualDesktopTabletModePolicy *)a1, a3);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 53LL;
      goto LABEL_13;
    }
  }
LABEL_2:
  v6 = 0;
LABEL_3:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
  return (unsigned int)v6;
}
