/*
 * XREFs of ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180533C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805325DC (-IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x1805356EC (-_SetWindowRgn@CDragVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CDragVisual::SetSite(CDragVisual *this, IUnknown *punk)
{
  bool v4; // bl
  __int64 *v5; // rbx
  int *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  IUnknown *punka; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v4 = 0;
    if ( !punk )
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 17);
  }
  else
  {
    v4 = punk != 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 2, (__int64)punk);
  if ( v4 )
  {
    punka = 0LL;
    v11 = 0LL;
    v5 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&punka, &v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
    if ( IUnknown_QueryService(
           punk,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           (void **)v5) >= 0 )
    {
      v6 = (int *)((char *)this + 192);
      if ( ((int (__fastcall *)(IUnknown *, char *))punka->lpVtbl[3].QueryInterface)(punka, (char *)this + 192) >= 0 )
      {
        v7 = ((__int64 (__fastcall *)(IUnknown *, char *))punka->lpVtbl[3].Release)(punka, (char *)this + 208);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x158,
            (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)v7);
          *((_OWORD *)this + 13) = *(_OWORD *)v6;
        }
        SetWindowPos(
          *((HWND *)this + 19),
          0LL,
          *v6,
          *((_DWORD *)this + 49),
          *((_DWORD *)this + 50) - *v6,
          *((_DWORD *)this + 51) - *((_DWORD *)this + 49),
          0x14u);
        CDragVisual::_SetWindowRgn(this);
      }
    }
    IUnknown_GetScaleFactor(punka, (enum DEVICE_SCALE_FACTOR *)this + 71);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punka);
  }
  return 0LL;
}
