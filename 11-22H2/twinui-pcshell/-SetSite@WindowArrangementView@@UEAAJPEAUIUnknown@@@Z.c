/*
 * XREFs of ?SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z @ 0x1805D3E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::SetSite(WindowArrangementView *this, struct IUnknown *a2)
{
  IUnknown **v4; // r14
  char v5; // di
  _DWORD *v6; // rsi
  IUnknown **v8; // rdi
  __int64 v9; // rcx
  IUnknown *v10; // rcx
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  v4 = (IUnknown **)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) && a2 )
  {
    v5 = 1;
LABEL_4:
    v6 = (_DWORD *)((char *)this + 320);
    goto LABEL_5;
  }
  v5 = 0;
  if ( !*v4 || a2 )
    goto LABEL_4;
  v8 = (IUnknown **)((char *)this + 80);
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, 4LL, 0LL);
    IUnknown_SetSite(*v8, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8);
  }
  v10 = (IUnknown *)*((_QWORD *)this + 9);
  if ( v10 )
  {
    IUnknown_SetSite(v10, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  SmartCookie::Unregister((WindowArrangementView *)((char *)this + 160));
  *((_BYTE *)this + 314) = 1;
  ppvOut = 0LL;
  v6 = (_DWORD *)((char *)this + 320);
  if ( *((_DWORD *)this + 80) )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           *v4,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &ppvOut) >= 0 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 104LL))(ppvOut, (unsigned int)*v6);
      *v6 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)v4, (__int64)a2);
  if ( v5 )
  {
    ppvOut = 0LL;
    if ( !*v6 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *v4,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, unsigned __int64, _DWORD *))(*(_QWORD *)ppvOut + 96LL))(
          ppvOut,
          ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
          v6);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  }
  return 0LL;
}
