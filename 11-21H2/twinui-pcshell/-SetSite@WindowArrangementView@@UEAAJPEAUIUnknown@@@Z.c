/*
 * XREFs of ?SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z @ 0x18051B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::SetSite(WindowArrangementView *this, struct IUnknown *a2)
{
  IUnknown **v4; // r14
  char v5; // di
  IUnknown **v6; // rdi
  __int64 v7; // rcx
  IUnknown *v8; // rcx
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  v4 = (IUnknown **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || !a2 )
  {
    v5 = 0;
    if ( *v4 && !a2 )
    {
      v6 = (IUnknown **)((char *)this + 80);
      v7 = *((_QWORD *)this + 10);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, 4LL, 0LL);
        IUnknown_SetSite(*v6, 0LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v6);
      }
      v8 = (IUnknown *)*((_QWORD *)this + 9);
      if ( v8 )
      {
        IUnknown_SetSite(v8, 0LL);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 9);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
      SmartCookie::Unregister((WindowArrangementView *)((char *)this + 160));
      *((_BYTE *)this + 314) = 1;
      ppvOut = 0LL;
      if ( *((_DWORD *)this + 80) )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
        if ( IUnknown_QueryService(
               *v4,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &ppvOut) >= 0 )
        {
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 104LL))(ppvOut, *((unsigned int *)this + 80));
          *((_DWORD *)this + 80) = 0;
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      v5 = 0;
    }
  }
  else
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)v4, (__int64)a2);
  if ( v5 )
  {
    ppvOut = 0LL;
    if ( !*((_DWORD *)this + 80) )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *v4,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, char *, char *))(*(_QWORD *)ppvOut + 96LL))(
          ppvOut,
          (char *)this + 40,
          (char *)this + 320);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  }
  return 0LL;
}
